//
//  STAES.h
//  12345ForUser
//
//  Created by 文君 on 16/6/12.
//  Copyright © 2016年 文君. All rights reserved.
//

#import <Foundation/Foundation.h>




@interface STAES : NSObject


//+ (NSString *)hyb_AESEncrypt:(NSString *)plainText;
/**
 *  AES128 解密方法
 *  @param cipherText    需要解密的字符串
 *  @param 返回的字符串为解密后的字符串
 */

+ (NSString*) decryptUseAES:(NSString*)cipherText;
/**
 *@  AES128 加密,然后用Base64编码
 *@  @param clearText   需要加密字符串
 *@  @param Key为静态字符串,实现文件中
 */
+(NSString *) encryptUseAES:(NSString *)clearText;

@end
