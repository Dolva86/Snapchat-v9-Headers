//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCPaymentSwipeSenderBillViewDelegate.h"

@class NSDate, NSMutableArray, NSString, NSTimer, SCPaymentSwipeSenderBillView, SCPaymentSwipeSenderSparkleView, UILabel;

@interface SCPaymentSwipeSenderViewController : UIViewController <SCPaymentSwipeSenderBillViewDelegate>
{
    BOOL _interacted;
    BOOL _isAnimatingCloseHint;
    id <SCPaymentSwipeSenderDelegate> _delegate;
    NSString *_recipient;
    NSDate *_lastSwipeTime;
    float _swipeInterval;
    UILabel *_counterLabel;
    NSMutableArray *_swipes;
    SCPaymentSwipeSenderSparkleView *_sparkleView;
    SCPaymentSwipeSenderBillView *_billView;
    NSTimer *_completionTimer;
    NSTimer *_closeHintTimer;
    float _keyboardY;
}

@property(nonatomic) float keyboardY; // @synthesize keyboardY=_keyboardY;
@property(retain, nonatomic) NSTimer *closeHintTimer; // @synthesize closeHintTimer=_closeHintTimer;
@property(retain, nonatomic) NSTimer *completionTimer; // @synthesize completionTimer=_completionTimer;
@property(retain, nonatomic) SCPaymentSwipeSenderBillView *billView; // @synthesize billView=_billView;
@property(retain, nonatomic) SCPaymentSwipeSenderSparkleView *sparkleView; // @synthesize sparkleView=_sparkleView;
@property(retain, nonatomic) NSMutableArray *swipes; // @synthesize swipes=_swipes;
@property(retain, nonatomic) UILabel *counterLabel; // @synthesize counterLabel=_counterLabel;
@property(nonatomic) float swipeInterval; // @synthesize swipeInterval=_swipeInterval;
@property(retain, nonatomic) NSDate *lastSwipeTime; // @synthesize lastSwipeTime=_lastSwipeTime;
@property(nonatomic) BOOL isAnimatingCloseHint; // @synthesize isAnimatingCloseHint=_isAnimatingCloseHint;
@property(nonatomic) BOOL interacted; // @synthesize interacted=_interacted;
@property(copy, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
@property(nonatomic) __weak id <SCPaymentSwipeSenderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)willResignActive:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)stopBlingtone;
- (void)playBlingtone;
- (id)previousSwipeTimestamp;
- (float)previousSwipeInterval;
- (void)didFinishBillAnimation;
- (void)startCompletionTimerWithDelay:(float)arg1;
- (void)startCloseHintTimer;
- (void)updateBillColor;
- (void)loadBillView;
- (void)loadSparkleView;
- (void)loadCountView;
- (void)updateSwipeInterval;
- (unsigned int)numberOfSwipes;
- (void)sendSwipe;
- (void)swipeFailed;
- (void)swipeDownEnded;
- (void)swipeUpEnded;
- (void)swipeBegan;
- (void)handlePan:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)didFinishSwipeToSendWithSuccess:(BOOL)arg1;
- (void)completionTimerFired:(id)arg1;
- (void)exitWithoutActivityAfterDelay:(float)arg1;
- (void)presentCloseHint;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithKeyboardY:(float)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

