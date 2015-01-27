//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALError, ALMediaIssueEvent, NSDictionary, NSString;

@protocol SCVideoChatServiceListenerDelegate <NSObject>
- (void)handleWarningWithMsg:(NSString *)arg1;
- (BOOL)handleError:(ALError *)arg1 forApi:(NSString *)arg2;
- (void)onMessage:(NSDictionary *)arg1;
- (void)recipientDidPublishVideo;
- (BOOL)shouldPlayRemoteVideoStream;
- (void)localVideoFrameSizeChanged;
- (void)videoFrameSizeChanged;
- (void)remoteVideoStopped;
- (void)remoteVideoStarted;
- (void)mediaIssue:(ALMediaIssueEvent *)arg1;
- (void)recipientDidDisconnect;
- (void)recipientDidConnectWithId:(long long)arg1;
- (void)connectionLost;
- (void)reconnected;
@end

