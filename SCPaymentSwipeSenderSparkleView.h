//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage;

@interface SCPaymentSwipeSenderSparkleView : UIView
{
    BOOL _isSparkling;
    UIImage *_sparkleImage;
}

@property(nonatomic) BOOL isSparkling; // @synthesize isSparkling=_isSparkling;
@property(retain, nonatomic) UIImage *sparkleImage; // @synthesize sparkleImage=_sparkleImage;
- (void).cxx_destruct;
- (void)animateSparklesWithMaxCount:(int)arg1;
- (struct CGPoint)generateRandomOriginWithPositionRatio:(float)arg1;
- (float)powerRandom;
- (void)loadSenderSparkles;
- (id)initWithFrame:(struct CGRect)arg1;

@end

