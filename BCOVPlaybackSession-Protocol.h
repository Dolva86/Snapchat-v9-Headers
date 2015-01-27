//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, AVPlayerLayer, BCOVSource, BCOVVideo;

@protocol BCOVPlaybackSession <NSObject>
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
@property(readonly, nonatomic) AVPlayer *player;
@property(readonly, copy, nonatomic) BCOVSource *source;
@property(readonly, copy, nonatomic) BCOVVideo *video;
- (void)terminate;
@end

