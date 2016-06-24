//
//  STHttpquest.h
//  12345ForUser
//
//  Created by 文君 on 16/6/7.
//  Copyright © 2016年 文君. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  http请求成功,返回字符串
 *  @param result
 */
typedef void (^HttpRequestSuccessBlock)(id response);
/**
 *  http请求失败
 *  @param error
 */
typedef void (^HttpRequestFailureBlock)(NSError *error);


@interface STHttpquest : NSObject

+ (instancetype)getInstance;

/**
   上传多找图片
   @param url 上传的url
   @param 请求体参数
   @param filePart 文件名
   @param success 请求成功的回调
   @param failure 请求失败的回调
 */
- (void)postMutilForm:(NSString *)url
       withStringPart:(NSDictionary *)param
         withFilePart:(NSDictionary *)filePart
              success:(HttpRequestSuccessBlock)success
              failure:(HttpRequestFailureBlock)failure;
/**
 POST请求
 @param url
 @param 请求体参数
 @param success 请求成功的回调
 @param failure 请求失败的回调
 */
- (void)postWithUrl:(NSString *)url
         withParams:(NSString *)param
            success:(HttpRequestSuccessBlock)success
            failure:(HttpRequestFailureBlock)failure;


@end
