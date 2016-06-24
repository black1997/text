//
//  NSData+STAES.h
//  12345ForUser
//
//  Created by 文君 on 16/6/15.
//  Copyright © 2016年 文君. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (STAES)
- (NSData *)AES256EncryptWithKey:(NSData *)key;
- (NSData *)AES256DecryptWithKey:(NSData *)key;
@end
