//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCOVPlaybackSession.h"

@class BCOV_RACSignal;

@protocol BCOVPlaybackSessionPrivate <BCOVPlaybackSession>
- (void)begin;
- (BOOL)didReceiveTerminateNotification;
- (BCOV_RACSignal *)progress;
- (BCOV_RACSignal *)lifecycle;
- (BCOV_RACSignal *)isExternalPlaybackActive;
- (BCOV_RACSignal *)durationChanges;
- (BCOV_RACSignal *)cuePoints;
@end

