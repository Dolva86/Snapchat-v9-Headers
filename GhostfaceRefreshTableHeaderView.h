//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer;

@interface GhostfaceRefreshTableHeaderView : UIView
{
    BOOL _animating;
    id <GhostfaceDelegate> _delegate;
    CAShapeLayer *_ghostLayer;
    float _scale;
    struct CGPoint _ghostOrigin;
}

@property(nonatomic) struct CGPoint ghostOrigin; // @synthesize ghostOrigin=_ghostOrigin;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(retain, nonatomic) CAShapeLayer *ghostLayer; // @synthesize ghostLayer=_ghostLayer;
@property(nonatomic) BOOL animating; // @synthesize animating=_animating;
@property(nonatomic) __weak id <GhostfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGPath *)newPathForGhost:(struct CGPoint)arg1 scale:(float)arg2 phase:(float)arg3;
- (void)setPhase:(float)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animateBack;
- (id)initWithFrame:(struct CGRect)arg1;

@end

