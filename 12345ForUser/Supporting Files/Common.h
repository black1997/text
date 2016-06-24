//
//  Common.h
//  12345ForUser
//
//  Created by 文君 on 16/6/7.
//  Copyright © 2016年 文君. All rights reserved.
//

//#ifndef Common_h
//#define Common_h
////
////
//#endif  //Common_h

#ifdef DEBUG
#define STLog(...) NSLog(__VA_ARGS__)
#else
#define STLog(...)
#endif

#import "URL.h"
#define STColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

#define UIColorFromRGBA(rgbValue, alphaValue) \
[UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0x00FF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0x0000FF))/255.0 \
alpha:alphaValue]


//#define kBaseUrl @"http://172.16.71.26:9080"

#define AppleFont(_size) [UIFont fontWithName:@"AppleSDGothicNeo-Light" size:_size]
#define BUTTONBACKCOLOR  [UIColor colorWithRed:229/255.0 green:230/255.0 blue:231/255.0 alpha:1.0]

/**
 * 适配宏
 */
#define sWidth  ([UIScreen mainScreen].bounds.size.width/320)
#define sHeight ([UIScreen mainScreen].bounds.size.height/480)
/**
 * UI常用
 */
#define NavigationBar_HEIGHT 44.0f
#define Tabbar_HEIGHT 49.0f
#define WIDTH [UIScreen mainScreen].bounds.size.width
#define HEIGHT [UIScreen mainScreen].bounds.size.height

/**
 *  软件的各个属性
 */
#define IPHONE_UUID              [[NSUUID UUID] UUIDString]                         //获取UUID
#define IPHONE_SCREEN_RESOLUTION [[UIScreen mainScreen] currentMode].size           //屏幕分辨率
#define IPHONE_USER_NAME         [[UIDevice currentDevice] name]                    //手机别名： 用户定义的名称
#define IPHONE_SYSTEM_NAME       [[UIDevice currentDevice] systemName]             //设备名称
#define IPHONE_SYSTEM_VERSION    [[UIDevice currentDevice] systemVersion]          //手机系统版本
#define IPHONE_MODEL             [[UIDevice currentDevice] model]                 //手机型号
#define IPHONE_LOCALIZED_MODEL   [[UIDevice currentDevice] localizedModel]        //地方型号（国际化区域名称）
