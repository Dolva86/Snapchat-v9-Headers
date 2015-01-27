//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, NSTimer, SCVideoChatPulseView, UIImageView, UILabel;

@interface SCVideoChatView : UIView
{
    BOOL _mediaIssueActive;
    BOOL _microphoneDisabled;
    BOOL _showLocalView;
    BOOL _showRemoteView;
    BOOL _recipientReceivingVideo;
    BOOL _unlockAnimationRunning;
    BOOL _videoIsLocking;
    BOOL _videoIsLocked;
    BOOL _videoIsLockedUpperSide;
    BOOL _animatingFadeOut;
    BOOL _animatingLocalView;
    BOOL _topToBottomFlip;
    BOOL _localShrinkingToZero;
    BOOL _localVideoViewAdded;
    BOOL _remoteVideoViewAdded;
    UIView *_toggleCameraHelperView;
    UIView *_remoteVideoView;
    UIView *_localSCVideoPreview;
    UIView *_localALVideoView;
    UIView *_localVideoViewContainer;
    float _currentSmallViewRadius;
    id <SCVideoChatViewDelegate> _delegate;
    CDUnknownBlockType _completion;
    UIView *_visibleVideoPreview;
    NSTimer *_localViewFadeOutTimer;
    UIView *_messageView;
    UILabel *_poorConnectionLabel;
    NSTimer *_poorConnectionTimer;
    float _shrinkToRadius;
    float _shrinkStartTime;
    CADisplayLink *_smallViewShrinkDisplayLink;
    CADisplayLink *_smallViewGrowDisplayLink;
    SCVideoChatPulseView *_pulseView;
    UIImageView *_localViewScreenShot;
    struct CGPoint _focusPoint;
    struct CGPoint _originalPoint;
    double _lastDisplayTime;
}

+ (struct CGPoint)xyForFocusPoint:(struct CGPoint)arg1 inView:(id)arg2 radius:(float)arg3;
@property(nonatomic) BOOL remoteVideoViewAdded; // @synthesize remoteVideoViewAdded=_remoteVideoViewAdded;
@property(nonatomic) BOOL localVideoViewAdded; // @synthesize localVideoViewAdded=_localVideoViewAdded;
@property(nonatomic) BOOL localShrinkingToZero; // @synthesize localShrinkingToZero=_localShrinkingToZero;
@property(nonatomic) BOOL topToBottomFlip; // @synthesize topToBottomFlip=_topToBottomFlip;
@property(retain, nonatomic) UIImageView *localViewScreenShot; // @synthesize localViewScreenShot=_localViewScreenShot;
@property(retain, nonatomic) SCVideoChatPulseView *pulseView; // @synthesize pulseView=_pulseView;
@property(nonatomic) double lastDisplayTime; // @synthesize lastDisplayTime=_lastDisplayTime;
@property(retain, nonatomic) CADisplayLink *smallViewGrowDisplayLink; // @synthesize smallViewGrowDisplayLink=_smallViewGrowDisplayLink;
@property(retain, nonatomic) CADisplayLink *smallViewShrinkDisplayLink; // @synthesize smallViewShrinkDisplayLink=_smallViewShrinkDisplayLink;
@property(nonatomic) float shrinkStartTime; // @synthesize shrinkStartTime=_shrinkStartTime;
@property(nonatomic) float shrinkToRadius; // @synthesize shrinkToRadius=_shrinkToRadius;
@property(retain, nonatomic) NSTimer *poorConnectionTimer; // @synthesize poorConnectionTimer=_poorConnectionTimer;
@property(retain, nonatomic) UILabel *poorConnectionLabel; // @synthesize poorConnectionLabel=_poorConnectionLabel;
@property(nonatomic) struct CGPoint originalPoint; // @synthesize originalPoint=_originalPoint;
@property(retain, nonatomic) UIView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) NSTimer *localViewFadeOutTimer; // @synthesize localViewFadeOutTimer=_localViewFadeOutTimer;
@property(retain, nonatomic) UIView *visibleVideoPreview; // @synthesize visibleVideoPreview=_visibleVideoPreview;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) BOOL animatingLocalView; // @synthesize animatingLocalView=_animatingLocalView;
@property(nonatomic) BOOL animatingFadeOut; // @synthesize animatingFadeOut=_animatingFadeOut;
@property(nonatomic) __weak id <SCVideoChatViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float currentSmallViewRadius; // @synthesize currentSmallViewRadius=_currentSmallViewRadius;
@property(nonatomic) BOOL videoIsLockedUpperSide; // @synthesize videoIsLockedUpperSide=_videoIsLockedUpperSide;
@property(nonatomic) BOOL videoIsLocked; // @synthesize videoIsLocked=_videoIsLocked;
@property(nonatomic) BOOL videoIsLocking; // @synthesize videoIsLocking=_videoIsLocking;
@property(nonatomic) BOOL unlockAnimationRunning; // @synthesize unlockAnimationRunning=_unlockAnimationRunning;
@property(retain, nonatomic) UIView *localVideoViewContainer; // @synthesize localVideoViewContainer=_localVideoViewContainer;
@property(retain, nonatomic) UIView *localALVideoView; // @synthesize localALVideoView=_localALVideoView;
@property(retain, nonatomic) UIView *localSCVideoPreview; // @synthesize localSCVideoPreview=_localSCVideoPreview;
@property(nonatomic) BOOL recipientReceivingVideo; // @synthesize recipientReceivingVideo=_recipientReceivingVideo;
@property(nonatomic) BOOL showRemoteView; // @synthesize showRemoteView=_showRemoteView;
@property(nonatomic) BOOL showLocalView; // @synthesize showLocalView=_showLocalView;
@property(retain, nonatomic) UIView *remoteVideoView; // @synthesize remoteVideoView=_remoteVideoView;
@property(nonatomic) BOOL microphoneDisabled; // @synthesize microphoneDisabled=_microphoneDisabled;
@property(nonatomic) BOOL mediaIssueActive; // @synthesize mediaIssueActive=_mediaIssueActive;
@property(retain, nonatomic) UIView *toggleCameraHelperView; // @synthesize toggleCameraHelperView=_toggleCameraHelperView;
@property(nonatomic) struct CGPoint focusPoint; // @synthesize focusPoint=_focusPoint;
- (void).cxx_destruct;
- (void)removeLocalViewScreenshot;
- (void)flipLocalViewAnimation;
- (void)prepareForLocalViewFlip:(BOOL)arg1 withLastFrame:(id)arg2;
- (void)fadeInLocalView;
- (void)fadeOutLocalViewTimerFired:(id)arg1;
- (void)restartLocalViewFadeOutTimer;
- (void)localViewFinalShrinkWithCompletion:(CDUnknownBlockType)arg1;
- (void)growLocalViewDisplayLinkFired:(id)arg1;
- (void)shrinkLocalViewDisplayLinkFired:(id)arg1;
- (void)startLocalViewGrowDisplayLink;
- (void)resetLocalViewGrowDisplayLink;
- (void)startLocalViewShrinkDisplayLink:(float)arg1;
- (void)resetLocalViewShrinkDisplayLink;
- (void)animateFocusPoint:(struct CGPoint)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)getTranslationAnimationForPoint:(struct CGPoint)arg1;
- (void)poorConnectionTimerFired:(id)arg1;
- (id)subtitleMessageForIssue:(int)arg1;
- (id)titleMessageForIssue:(int)arg1 currentMessage:(id)arg2;
- (void)layoutMessageView;
- (void)updateLocalViewFrame:(struct CGRect)arg1;
- (void)layoutVideoViews;
- (void)layoutSubviews;
- (id)commonPreviewRenderSetting:(id)arg1;
- (void)setLocalVideoViewOrigin:(struct CGPoint)arg1;
- (void)setLocalVideoView:(id)arg1;
- (void)dealloc;
- (id)initWithLocalVideoView:(id)arg1 remoteVideoView:(id)arg2;

@end
