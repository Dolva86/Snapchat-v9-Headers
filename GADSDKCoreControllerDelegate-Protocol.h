//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADAd, NSDictionary, NSString;

@protocol GADSDKCoreControllerDelegate <NSObject>
- (void)failedJavaScriptFile;
- (void)invalidJavaScriptRequest;
- (void)loadAd:(GADAd *)arg1 headers:(NSDictionary *)arg2;
- (void)loadAdURLWithParameters:(NSDictionary *)arg1;
- (void)setRequestID:(NSString *)arg1;
- (NSDictionary *)requestParameters;
@end

