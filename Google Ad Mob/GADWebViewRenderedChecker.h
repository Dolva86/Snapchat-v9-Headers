//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADWebView;

@interface GADWebViewRenderedChecker : NSObject
{
    GADWebView *_webView;
    id <GADWebViewRenderedCheckerDelegate> _delegate;
}

@property(nonatomic) __weak id <GADWebViewRenderedCheckerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GADWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (float)percentOfImage:(id)arg1 ofColor:(id)arg2;
- (void)checkIsContentRenderedInWebView;

@end

