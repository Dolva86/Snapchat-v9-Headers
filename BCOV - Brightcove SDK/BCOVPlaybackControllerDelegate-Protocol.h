//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BCOVPlaybackSessionLifecycleEvent, NSDictionary;

@protocol BCOVPlaybackControllerDelegate <NSObject>

@optional
- (void)playbackController:(id <BCOVPlaybackController>)arg1 playbackSession:(id <BCOVPlaybackSession>)arg2 didReceiveLifecycleEvent:(BCOVPlaybackSessionLifecycleEvent *)arg3;
- (void)playbackController:(id <BCOVPlaybackController>)arg1 playbackSession:(id <BCOVPlaybackSession>)arg2 didProgressTo:(double)arg3;
- (void)playbackController:(id <BCOVPlaybackController>)arg1 playbackSession:(id <BCOVPlaybackSession>)arg2 didPassCuePoints:(NSDictionary *)arg3;
- (void)playbackController:(id <BCOVPlaybackController>)arg1 playbackSession:(id <BCOVPlaybackSession>)arg2 didChangeExternalPlaybackActive:(BOOL)arg3;
- (void)playbackController:(id <BCOVPlaybackController>)arg1 playbackSession:(id <BCOVPlaybackSession>)arg2 didChangeDuration:(double)arg3;
- (void)playbackController:(id <BCOVPlaybackController>)arg1 didAdvanceToPlaybackSession:(id <BCOVPlaybackSession>)arg2;
@end

