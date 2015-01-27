//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCameraBackgroundViewController.h"

#import "TTTAttributedLabelDelegate.h"

@class NSString, SCButton, SCTipBalloon, TTTAttributedLabel, UIImage, UIImageView;

@interface SCServiceTermsViewController : SCCameraBackgroundViewController <TTTAttributedLabelDelegate>
{
    BOOL _isAnimating;
    UIImageView *_ghostIconImageView;
    UIImageView *_ghostFaceImageView;
    UIImageView *_wavingGhostImageView;
    UIImageView *_glowImageView;
    UIImage *_sparkleImage;
    UIImageView *_wandImageView;
    SCTipBalloon *_tipBalloon;
    TTTAttributedLabel *_termsLabel;
    float _termTopY;
    float _termBottomY;
    SCButton *_agreeButton;
}

@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) SCButton *agreeButton; // @synthesize agreeButton=_agreeButton;
@property(nonatomic) float termBottomY; // @synthesize termBottomY=_termBottomY;
@property(nonatomic) float termTopY; // @synthesize termTopY=_termTopY;
@property(retain, nonatomic) TTTAttributedLabel *termsLabel; // @synthesize termsLabel=_termsLabel;
@property(retain, nonatomic) SCTipBalloon *tipBalloon; // @synthesize tipBalloon=_tipBalloon;
@property(retain, nonatomic) UIImageView *wandImageView; // @synthesize wandImageView=_wandImageView;
@property(retain, nonatomic) UIImage *sparkleImage; // @synthesize sparkleImage=_sparkleImage;
@property(retain, nonatomic) UIImageView *glowImageView; // @synthesize glowImageView=_glowImageView;
@property(retain, nonatomic) UIImageView *wavingGhostImageView; // @synthesize wavingGhostImageView=_wavingGhostImageView;
@property(retain, nonatomic) UIImageView *ghostFaceImageView; // @synthesize ghostFaceImageView=_ghostFaceImageView;
@property(retain, nonatomic) UIImageView *ghostIconImageView; // @synthesize ghostIconImageView=_ghostIconImageView;
- (void).cxx_destruct;
- (id)getPageViewName;
- (void)agreeButtonPressed;
- (void)removeObservers;
- (void)addObservers;
- (void)presentWebViewWithUrl:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithAddress:(id)arg2;
- (struct CGAffineTransform)sparkleTransformForNthSparkle:(int)arg1;
- (void)startSparkleAnimationWithDuration:(float)arg1;
- (void)startBottomAnimation;
- (void)startGhostRollInAnimation;
- (void)startDialogAnimation;
- (void)startFadingText;
- (void)startGhostJumpingAnimation;
- (void)startAnimations;
- (void)loadAgreeButton;
- (void)loadBottomImages;
- (void)loadTerms;
- (void)loadTipBalloon;
- (void)loadTopImages;
- (BOOL)shouldPopToRootViewController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

