//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAShapeLayer, SCDiscoverFullStackViewController, UIImageView, UIPanGestureRecognizer, UIScrollView, UIView;

@interface SCDiscoverDismissEffectHandler : NSObject
{
    BOOL _shouldDismissEdition;
    BOOL _inFastDismissMode;
    unsigned int _dismissRegion;
    UIScrollView *_editionView;
    UIView *_overlay;
    SCDiscoverFullStackViewController *_visibleFullStackVC;
    UIImageView *_channelIconView;
    CAShapeLayer *_maskLayer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    float _contentWidth;
    struct CGPoint _initialTouchPoint;
    struct CGRect _maskRect;
    struct CGRect _circleFrame;
}

+ (unsigned int)swipeDirectionForPanGesture:(id)arg1 inView:(id)arg2;
@property(nonatomic) BOOL inFastDismissMode; // @synthesize inFastDismissMode=_inFastDismissMode;
@property(nonatomic) float contentWidth; // @synthesize contentWidth=_contentWidth;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIImageView *channelIconView; // @synthesize channelIconView=_channelIconView;
@property(nonatomic) struct CGRect circleFrame; // @synthesize circleFrame=_circleFrame;
@property(retain, nonatomic) SCDiscoverFullStackViewController *visibleFullStackVC; // @synthesize visibleFullStackVC=_visibleFullStackVC;
@property(nonatomic) struct CGPoint initialTouchPoint; // @synthesize initialTouchPoint=_initialTouchPoint;
@property(retain, nonatomic) UIView *overlay; // @synthesize overlay=_overlay;
@property(retain, nonatomic) UIScrollView *editionView; // @synthesize editionView=_editionView;
@property(nonatomic) unsigned int dismissRegion; // @synthesize dismissRegion=_dismissRegion;
@property(nonatomic) struct CGRect maskRect; // @synthesize maskRect=_maskRect;
@property(nonatomic) BOOL shouldDismissEdition; // @synthesize shouldDismissEdition=_shouldDismissEdition;
- (void).cxx_destruct;
- (BOOL)isPullToDismissInFastModeWithRecognizer:(id)arg1 inView:(id)arg2;
- (float)rubberBandedTranslate:(float)arg1 withScreenScale:(float)arg2;
- (void)setupMaskWithXOrigin:(float)arg1 withYOigin:(float)arg2 withRadius:(float)arg3;
- (void)setupPullLeftToDismissEffect;
- (void)setupPullRightToDismissEffect;
- (void)setupPullDownToDismissEffect;
- (void)handleDismissEffectForSwipeDirection:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithPanGestureRecognizer:(id)arg1 editionView:(id)arg2 initialTouchPoint:(struct CGPoint)arg3 overlay:(id)arg4 visibleFullStackVC:(id)arg5 finalCircleFrame:(struct CGRect)arg6 currentChannelIcon:(id)arg7;

@end
