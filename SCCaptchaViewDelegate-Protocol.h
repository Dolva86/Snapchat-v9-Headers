//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCCaptchaView;

@protocol SCCaptchaViewDelegate <NSObject>
- (void)captchaViewDidDeselectAllImages:(SCCaptchaView *)arg1;
- (void)captchaViewDidSelectAnImage:(SCCaptchaView *)arg1;
- (void)captchaView:(SCCaptchaView *)arg1 didFinishLoadingCaptcha:(BOOL)arg2;
- (void)captchaView:(SCCaptchaView *)arg1 didVerifyWithResult:(int)arg2;
@end

