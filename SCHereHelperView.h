//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface SCHereHelperView : UIView
{
    BOOL _animating;
    BOOL _forCash;
    BOOL _shouldDisplay;
    UIImageView *_bubbleImageView;
    UILabel *_instructionsLabel;
}

@property(nonatomic) BOOL shouldDisplay; // @synthesize shouldDisplay=_shouldDisplay;
@property(retain, nonatomic) UILabel *instructionsLabel; // @synthesize instructionsLabel=_instructionsLabel;
@property(retain, nonatomic) UIImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(nonatomic) BOOL forCash; // @synthesize forCash=_forCash;
@property(nonatomic) BOOL animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (void)hide;
- (void)showAnimation;
- (void)showWithoutDelay;
- (void)show:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1 prompt:(id)arg2 cash:(BOOL)arg3;

@end
