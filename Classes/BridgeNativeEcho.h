//
//  BridgeNativeEcho.h
//  YJWebView
//
//  Created by Jury on 15/7/23.
//  Copyright (c) 2015年 Tinydust Technonogy Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YJHybridBridge.h"

@interface BridgeNativeEcho : NSObject <YJBridgeNative>

@property (strong, nonatomic, readonly) NSString *receiverName;
@property (strong, nonatomic) NSString *javaScriptCode;
@property (weak, nonatomic) id<YJBridgeNativeDelegate> delegate;

- (void)say:(NSString *)string;
- (void)say:(NSString *)string :(NSString *)callbackId;

@end
