//
//  HotFixTool.h
//  HotFixDemo
//
//  Created by super on 2018/5/27.
//  Copyright © 2018年 super. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Aspects.h"
#import <objc/runtime.h>
#import <JavaScriptCore/JavaScriptCore.h>

@interface HotFixTool : NSObject

+ (void)regist;
+ (void)evalString:(NSString *)javascriptString;

@end
