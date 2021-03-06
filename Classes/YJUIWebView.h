//
//  YJUIWebView.h
//  YJWebView
//
//  Created by Jury on 15/7/20.
//  Copyright (c) 2015年 Tinydust Technonogy Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YJWebViewProvider.h"
#import "UIWebView+TS_JavaScriptContext.h"
@import JavaScriptCore;

@interface YJUIWebView : UIWebView <YJWebViewProvider, UIWebViewDelegate, TSWebViewDelegate, UIActionSheetDelegate>

@property (nonatomic, assign) id <YJWebViewDelegate> webViewDelegate;

@property (nonatomic, strong, readonly) NSURL *URL;
@property (nonatomic, strong, readonly) NSString *title;
@property (nonatomic) BOOL loaded;

- (void)insertCSS:(NSString *)css withIdentifier:(NSString *)identifier;
- (void)insertCSS:(NSString *)css withIdentifier:(NSString *)identifier complectionBlock:(void (^)(void))complectionBlock;
- (void)removeCSSWithIdentifier:(NSString *)identifier;
- (void)removeCSSWithIdentifier:(NSString *)identifier complectionBlock:(void (^)(void))complectionBlock;
- (void)executeJavaScript:(NSString *)js completionHandler:(void (^)(id, NSError *)) completionHandler;
- (void)bindNativeReceiver:(NSObject<YJBridgeNative> *)obj;

@end
