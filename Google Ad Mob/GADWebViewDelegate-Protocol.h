//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADWebView, NSError, NSURLRequest;

@protocol GADWebViewDelegate <NSObject>

@optional
- (void)webView:(GADWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewDidFinishLoad:(GADWebView *)arg1;
- (void)webViewDidStartLoad:(GADWebView *)arg1;
- (BOOL)webView:(GADWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(int)arg3;
@end

