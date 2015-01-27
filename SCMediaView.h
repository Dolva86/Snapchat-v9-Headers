//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSArray, NSMutableDictionary, SCCounterLabel, SCHeadset, TapToSkipTutorialView, UILabel;

@interface SCMediaView : UIImageView
{
    BOOL _playerAPlaying;
    BOOL _playerBPlaying;
    UILabel *_captionLabel;
    UIImageView *_imageView;
    TapToSkipTutorialView *_tapToSkipTutorialView;
    NSMutableDictionary *_activeVideos;
    SCHeadset *_headset;
    NSArray *_overlayImageViews;
    NSArray *_playerViews;
    float _yOffset;
    SCCounterLabel *_counter;
}

+ (id)cancellationErrorWithDescription:(id)arg1;
+ (id)errorWithDescription:(id)arg1;
@property(retain, nonatomic) SCCounterLabel *counter; // @synthesize counter=_counter;
@property(nonatomic) float yOffset; // @synthesize yOffset=_yOffset;
@property(retain, nonatomic) NSArray *playerViews; // @synthesize playerViews=_playerViews;
@property(nonatomic) BOOL playerBPlaying; // @synthesize playerBPlaying=_playerBPlaying;
@property(nonatomic) BOOL playerAPlaying; // @synthesize playerAPlaying=_playerAPlaying;
@property(retain, nonatomic) NSArray *overlayImageViews; // @synthesize overlayImageViews=_overlayImageViews;
@property(retain, nonatomic) SCHeadset *headset; // @synthesize headset=_headset;
@property(retain, nonatomic) NSMutableDictionary *activeVideos; // @synthesize activeVideos=_activeVideos;
@property(retain, nonatomic) TapToSkipTutorialView *tapToSkipTutorialView; // @synthesize tapToSkipTutorialView=_tapToSkipTutorialView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
- (void).cxx_destruct;
- (void)completedSettingImageMedia:(BOOL)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)completedSettingVideoMedia:(BOOL)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pausePlayer:(id)arg1;
- (void)playPlayer:(id)arg1;
- (id)playerForSlot:(int)arg1;
- (void)cleanUpAllActiveVideosWaitUntilLoaded:(BOOL)arg1;
- (void)cleanUpActiveVideo:(id)arg1 waitUntilLoaded:(BOOL)arg2;
- (void)cleanUpActiveVideoForMedia:(id)arg1;
- (id)activeVideoMediaForMediaId:(id)arg1;
- (id)activeVideoInSlot:(int)arg1;
- (id)activeVideoForPlayerItem:(id)arg1;
- (int)availableSlot;
- (void)hidePlayerViews;
- (void)pauseMedia:(id)arg1;
- (void)hideActiveVideo:(id)arg1;
- (void)hideMedia;
- (void)updateTime:(float)arg1 snapTime:(float)arg2 snapTimeLeft:(float)arg3 counterShape:(int)arg4;
- (void)configureCaptionForMedia:(id)arg1;
- (void)resetAllPlayers;
- (void)setupCentralPlayersKVO;
- (void)willDeallocateCentralPlayers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareOverlayForMedia:(id)arg1;
- (void)showPlayerLayerForMedia:(id)arg1;
- (void)playerItemReadyForMedia:(id)arg1;
- (void)setMedia:(id)arg1 withCounter:(BOOL)arg2 timeLeft:(float)arg3 videoTimeSoFar:(double)arg4 playWhenLoaded:(BOOL)arg5 counterShape:(int)arg6 completion:(CDUnknownBlockType)arg7;
- (void)setMedia:(id)arg1 withCounter:(BOOL)arg2 timeLeft:(float)arg3 counterShape:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setMedia:(id)arg1 withCounter:(BOOL)arg2 counterShape:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removePlayerViews;
- (void)dealloc;
- (void)removeTapToSkipTutorial;
- (void)startTapToSkipTutorial;
- (void)createPlayerViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

