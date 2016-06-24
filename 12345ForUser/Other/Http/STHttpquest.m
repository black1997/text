//
//  STHttpquest.m
//  12345ForUser
//
//  Created by 文君 on 16/6/7.
//  Copyright © 2016年 文君. All rights reserved.
//

#import "STHttpquest.h"
#import "MJExtension.h"
#import "AFNetworking.h"
#import "Common.h"



@implementation STHttpquest

+ (instancetype)getInstance
{
    STHttpquest *http = [[STHttpquest alloc] init];
    return http;
}
//上传多张图片的方法
- (void)postMutilForm:(NSString *)url
       withStringPart:(NSDictionary *)param
         withFilePart:(NSDictionary *)filePart
              success:(HttpRequestSuccessBlock)success
              failure:(HttpRequestFailureBlock)failure
{
    
    NSMutableURLRequest *request = [[AFHTTPRequestSerializer serializer] multipartFormRequestWithMethod:@"POST" URLString:url parameters:nil constructingBodyWithBlock:^(id<AFMultipartFormData> formData) {
        
        [formData appendPartWithFileURL:[NSURL fileURLWithPath:@"file://path/to/image.jpg"] name:@"file" fileName:@"filename.jpg" mimeType:@"image/jpeg" error:nil];
        NSEnumerator *enumerator = [filePart keyEnumerator];
        NSString *key;
        while (key = [enumerator nextObject]) {
            [formData appendPartWithFileData:filePart[key] name:key fileName:[NSString stringWithFormat:@"%f", [[NSDate date] timeIntervalSince1970]*1000] mimeType:@"image/jpeg"];
        }
        NSEnumerator *stringEnumberator = [param keyEnumerator];
        while (key = [stringEnumberator nextObject]) {
            NSString *value = param[key];
            [formData appendPartWithFormData:[value dataUsingEncoding:NSUTF8StringEncoding] name:key];
        }
    } error:nil];
    
    AFURLSessionManager *manager = [[AFURLSessionManager alloc] initWithSessionConfiguration:[NSURLSessionConfiguration defaultSessionConfiguration]];
    NSURLSessionUploadTask *uploadTask;
    
    uploadTask = [manager uploadTaskWithStreamedRequest:request progress:^(NSProgress * _Nonnull uploadProgress) {
        dispatch_async(dispatch_get_main_queue(), ^{
//            [progressView setProgress:uploadProgress.fractionCompleted];
            STLog(@"%f",uploadProgress.fractionCompleted);
        });
    } completionHandler:^(NSURLResponse * _Nonnull response, id  _Nullable responseObject, NSError * _Nullable error) {
        if (error) {
            STLog(@"request failure:%@",error);
            failure(error);
        }else{
            STLog(@"request sucess");
            success(responseObject);
        }
    }];
    [uploadTask resume];
}

#pragma mark  - post请求
- (void)postWithUrl:(NSString *)url
         withParams:(NSString *)param
            success:(HttpRequestSuccessBlock)success
            failure:(HttpRequestFailureBlock)failure
{
    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];
    manager.requestSerializer = [AFHTTPRequestSerializer serializer];
//    manager.requestSerializer = [AFPropertyListRequestSerializer serializer];
//    [manager.requestSerializer setValue:@"application/xml" forHTTPHeaderField:@"Accept"];
//    [manager.requestSerializer setValue:@"application/xml; charset=utf-8" forHTTPHeaderField:@"Content-Type"];
//    [urlRequest addValue: @"text/xml; charset=utf-8" forHTTPHeaderField:@"Content-Type"];
//    [urlRequest addValue: @"http://webservice.rzhy.com/getReservationDepartment" forHTTPHeaderField:@"SOAPAction"];
//    [urlRequest addValue: msgLength forHTTPHeaderField:@"Content-Length"];
//    [urlRequest setHTTPMethod:@"POST"];
//    [urlRequest setHTTPBody: [soap dataUsingEncoding:NSUTF8StringEncoding]];
    
    [manager.requestSerializer setValue:@"Keep-Alive" forHTTPHeaderField:@"Connection"];
    [manager.requestSerializer setValue:@"application/soap+xml; charset=utf-8" forHTTPHeaderField:@"Content-Type"];
    [manager.requestSerializer setValue:@"text/xml" forHTTPHeaderField:@"Accept"];
    
//    [manager.requestSerializer setValue:@"http://webservice.rzhy.com/getReservationDepartment" forHTTPHeaderField:@"SOAPAction"];
    
//     [manager.requestSerializer setValue:@"http://www.w3.org/2001/XMLSchema" forHTTPHeaderField:@"SOAPAction"];
    
    NSInteger lent = [param length];
    
    [manager.requestSerializer setValue:[NSString stringWithFormat:@"%ld",(long)lent] forHTTPHeaderField:@"Content-Length"];

    manager.requestSerializer.timeoutInterval = 10;
//    manager.responseSerializer = [AFPropertyListResponseSerializer serializer];
    manager.responseSerializer = [AFHTTPResponseSerializer serializer];
    manager.responseSerializer.acceptableContentTypes = [NSSet setWithObject:@"text/html"];
    
    [manager POST:url parameters:param progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        NSString *result = [[NSString alloc] initWithData:responseObject encoding:NSUTF8StringEncoding];
        STLog(@"HTTP Suceess Result-->%@",result);
        success(responseObject);
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        STLog(@"HTTP Failure Result-->%@",error);
        failure(error);
    }];
}






















@end
