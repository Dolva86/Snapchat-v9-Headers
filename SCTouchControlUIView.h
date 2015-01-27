//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SCTouchControlUIView : UIView
{
    BOOL _useTouchCenterAsPivot;
    float _scale;
    float _rotation;
    float _lastRotation;
    float _lastScale;
    struct CGPoint _lastTranslation;
    struct CGAffineTransform _rotationTransform;
    struct CGAffineTransform _scaleTransform;
}

@property(nonatomic) struct CGPoint lastTranslation; // @synthesize lastTranslation=_lastTranslation;
@property(nonatomic) float lastScale; // @synthesize lastScale=_lastScale;
@property(nonatomic) float lastRotation; // @synthesize lastRotation=_lastRotation;
@property(nonatomic) struct CGAffineTransform scaleTransform; // @synthesize scaleTransform=_scaleTransform;
@property(nonatomic) struct CGAffineTransform rotationTransform; // @synthesize rotationTransform=_rotationTransform;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic, getter=isUseTouchCenterAsPivot) BOOL useTouchCenterAsPivot; // @synthesize useTouchCenterAsPivot=_useTouchCenterAsPivot;
- (void)pinch:(id)arg1;
- (void)rotation:(id)arg1;
- (void)pan:(id)arg1;
- (void)recomputeTransform;
@property(nonatomic) struct CGRect originalFrame;
@property(nonatomic) struct CGPoint translation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

