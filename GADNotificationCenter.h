//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNotificationCenter.h"

@interface GADNotificationCenter : NSNotificationCenter
{
}

+ (id)defaultCenter;
- (id)JSCommandForNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)postJSNotification:(id)arg1 userInfo:(id)arg2 webView:(id)arg3;
- (void)postNotificationFromURL:(id)arg1 object:(id)arg2 withDelay:(double)arg3;
- (void)postNotificationFromURL:(id)arg1 object:(id)arg2;

@end

