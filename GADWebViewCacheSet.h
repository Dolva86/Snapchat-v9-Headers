//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADCacheSet.h"

#import "UIWebViewDelegate.h"

@class NSMutableSet;

@interface GADWebViewCacheSet : GADCacheSet <UIWebViewDelegate>
{
    NSMutableSet *_clearingWebViews;
}

- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)clearWebView:(id)arg1;
- (id)anyObject;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)initWithMaxCapacity:(unsigned int)arg1;

@end

