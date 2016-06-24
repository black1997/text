//
//  STAES.m
//  12345ForUser
//
//  Created by 文君 on 16/6/12.
//  Copyright © 2016年 文君. All rights reserved.
//

#import "STAES.h"
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonCryptor.h>
#import <Availability.h>
#import "GTMBase64.h"
#import "Common.h"

static NSString * key = @"12345678adcdefgh";
static NSString * keySHA1;
@implementation STAES


//+ (NSString *)getSha1String:(NSString *)srcString{
//    const char  * cstr = [srcString UTF8String];
//    //使用对应的CC_SHA1,CC_SHA256,CC_SHA384,CC_SHA512的长度分别是20,32,48,64
//    unsigned char digest[CC_SHA1_DIGEST_LENGTH];
//    //使用对应的CC_SHA256,CC_SHA384,CC_SHA512
//    CC_SHA1(cstr,  (int)strlen(cstr), digest);
//    NSMutableString* result = [NSMutableString stringWithCapacity:CC_SHA1_DIGEST_LENGTH*2];
//    for(int i = 0; i < CC_SHA1_DIGEST_LENGTH; i++) {
//        [result appendFormat:@"%02x", digest[i]];
//    }
//    return result;
//}
//+ (NSString *)getSha1String:(NSString *)srcString{
//    const char  * cstr = [srcString UTF8String];
//    NSData * data = [NSData dataWithBytes:cstr length:srcString.length];
//    //使用对应的CC_SHA1,CC_SHA256,CC_SHA384,CC_SHA512的长度分别是20,32,48,64
//    unsigned char digest[CC_SHA1_DIGEST_LENGTH];
//    //使用对应的CC_SHA256,CC_SHA384,CC_SHA512
//    //    CC_SHA1(cstr,  (int)strlen(cstr), digest);
//    CC_SHA1(data.bytes, data.length, digest);
//    NSMutableString* result = [NSMutableString stringWithCapacity:CC_SHA1_DIGEST_LENGTH * 2];
//    for(int i = 0; i < CC_SHA1_DIGEST_LENGTH; i++) {
//        [result appendFormat:@"%02x", digest[i]];
//    }
//    return result;
//}

//加密
+(NSString *) encryptUseAES:(NSString *)clearText
{

//    Byte keyByte[] = {0x3c,0xfb,0xbf,0x77,0xcb,0xc,0xbc,0x18,0x6,0x29,0xec,0xf0,0x67,0x9d,0xaa,0xb};
    Byte keyByte[] = {0x08, 0x08, 0x04, 0x0b, 0x02, 0x0f, 0x0b, 0x0c,
        0x01, 0x03, 0x09, 0x07, 0x0c, 0x03, 0x07, 0x0a};
    //byte转换为NSData类型，以便下边加密方法的调用
    NSData *keyData = [[NSData alloc] initWithBytes:keyByte length:32];
    
//    const void * keyPtr2 = [keyData bytes];
//    char (*keyPtr)[32] = keyPtr2;
    
    NSData *data = [clearText dataUsingEncoding:NSUTF8StringEncoding allowLossyConversion:YES];
    unsigned char buffer[1024];
    memset(buffer, 0, sizeof(char));
    size_t numBytesEncrypted = 0;
    //IV
    char ivPtr[kCCBlockSizeAES128+1];
    memset(ivPtr, 0, sizeof(ivPtr));
    [key getCString:ivPtr maxLength:sizeof(ivPtr) encoding:NSUTF8StringEncoding];
    
    CCCryptorStatus cryptStatus = CCCrypt(kCCEncrypt,               //加密
                                          kCCAlgorithmAES128,         //加密方式
                                          kCCOptionPKCS7Padding | kCCOptionECBMode ,   //填充算法
                                          [keyData bytes],         //密钥串
                                          kCCKeySizeAES128,        //加密位数
//                                          [keyData bytes],                  //IV向量
                                          nil,
                                          [data bytes],
                                          [data length],
                                          buffer,
                                          1024,
                                          &numBytesEncrypted
                                          );
    
    NSString* plainText = nil;
    if (cryptStatus == kCCSuccess) {
        NSData *dataTemp = [NSData dataWithBytes:buffer length:(NSUInteger)numBytesEncrypted];
//        plainText = [GTMBase64 stringByEncodingData:dataTemp];
        NSString *oriStr = [NSString stringWithFormat:@"%@",dataTemp];
        NSCharacterSet *cSet = [NSCharacterSet characterSetWithCharactersInString:@"< >"];
        plainText = [[oriStr componentsSeparatedByCharactersInSet:cSet] componentsJoinedByString:@""];
    }else{
        STLog(@"AES加密失败");
    }
//    return [plainText uppercaseString] ;
    return plainText;
}



//解密
+ (NSString*) decryptUseAES:(NSString*)cipherText  {
    
    NSData *cipherData1 = [cipherText dataUsingEncoding:NSUTF8StringEncoding allowLossyConversion:YES];
    NSData * cipherData = [GTMBase64 decodeData:cipherData1];
    unsigned char buffer[1024 * 100];
    //    unsigned char *buffer = (unsigned char*)malloc(1024 * 1024 * sizeof(unsigned char));
    memset(buffer, 0, sizeof(char));
    size_t numBytesDecrypted = 0;
    // IV
    char ivPtr[kCCBlockSizeAES128 + 1];
    memset(ivPtr, 0, sizeof(ivPtr));
    [key getCString:ivPtr maxLength:sizeof(ivPtr) encoding:NSUTF8StringEncoding];
    
    const void *vkey = (const void *) [key UTF8String];
    
    CCCryptorStatus cryptStatus = CCCrypt(kCCDecrypt,
                                          kCCAlgorithmAES128,
                                          kCCOptionPKCS7Padding | kCCOptionECBMode,
//                                          [key UTF8String],
                                          vkey,
                                          kCCKeySizeAES128,
                                          ivPtr,
                                          [cipherData bytes],
                                          [cipherData length],
                                          buffer,
                                          1024 * 100,
                                          &numBytesDecrypted);
    NSString* plainText = nil;
    
    if (cryptStatus == kCCSuccess) {
        NSData* data = [NSData dataWithBytes:buffer length:(NSUInteger)numBytesDecrypted];
        plainText = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
    }else{
        STLog(@"AES解密失败");
    }
    //    free(buffer);
    return plainText;
}

//解密流修改
+ (NSData *)hexToBytes:(NSString *)inputStr
{
    NSMutableData* data = [NSMutableData data];
    int idx;
    for (idx = 0; idx+2 <= inputStr.length; idx+=2) {
        NSRange range = NSMakeRange(idx, 2);
        NSString* hexStr = [inputStr substringWithRange:range];
        NSScanner* scanner = [NSScanner scannerWithString:hexStr];
        unsigned int intValue;
        [scanner scanHexInt:&intValue];
        [data appendBytes:&intValue length:1];
    }
    return data;
}



//
//+ (NSString *)hyb_AESEncrypt:(NSString *)plainText  {
//    if (key == nil || (key.length != 16 && key.length != 32)) {
//        return nil;
//    }
//    
//    char keyPtr[kCCKeySizeAES128+1];
//    memset(keyPtr, 0, sizeof(keyPtr));
//    [key getCString:keyPtr maxLength:sizeof(keyPtr) encoding:NSUTF8StringEncoding];
//    
//    
//    char ivPtr[kCCBlockSizeAES128+1];
//    memset(ivPtr, 0, sizeof(ivPtr));
//    [key getCString:ivPtr maxLength:sizeof(ivPtr) encoding:NSUTF8StringEncoding];
//    
//    NSData* data = [plainText dataUsingEncoding:NSUTF8StringEncoding];
//    NSUInteger dataLength = [data length];
//    
//    int diff = kCCKeySizeAES128 - (dataLength % kCCKeySizeAES128);
//    unsigned long newSize = 0;
//    
//    if(diff > 0) {
//        newSize = dataLength + diff;
//    }
//    
//    char dataPtr[newSize];
//    memcpy(dataPtr, [data bytes], [data length]);
//    for(int i = 0; i < diff; i++) {
//        // 这里是关键，这里是使用NoPadding的
//        dataPtr[i + dataLength] = 0x0000;
//    }
//    
//    size_t bufferSize = newSize + kCCBlockSizeAES128;
//    void *buffer = malloc(bufferSize);
//    memset(buffer, 0, bufferSize);
//    
//    size_t numBytesCrypted = 0;
//    
//    CCCryptorStatus cryptStatus = CCCrypt(kCCEncrypt,
//                                          kCCAlgorithm3DES,
//                                          kCCOptionECBMode,
//                                          [key UTF8String],
//                                          kCCKeySizeAES256,
//                                          ivPtr,
//                                          dataPtr,
//                                          sizeof(dataPtr),
//                                          buffer,
//                                          bufferSize,
//                                          &numBytesCrypted);
//    
//    if (cryptStatus == kCCSuccess) {
//        NSData *resultData = [NSData dataWithBytesNoCopy:buffer length:numBytesCrypted];
//        return [GTMBase64 stringByEncodingData:resultData];
//    }
//    free(buffer);
//    return nil;
//}











@end
