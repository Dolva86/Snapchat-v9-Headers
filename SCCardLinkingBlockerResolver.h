//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBlockerResolver.h"
#import "SCCardLinkingDelegate.h"

@class NSNumber, NSString, SCCardLinkingViewController, SCPaymentBlocker, SCPaymentMessage;

@interface SCCardLinkingBlockerResolver : NSObject <SCBlockerResolver, SCCardLinkingDelegate>
{
    SCPaymentBlocker *_blocker;
    SCPaymentMessage *_paymentMessage;
    SCCardLinkingViewController *_viewController;
    NSNumber *_cardLinkResult;
    id <SCBlockerResolutionResultDelegate> _resultDelegate;
}

@property(nonatomic) __weak id <SCBlockerResolutionResultDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
@property(retain, nonatomic) NSNumber *cardLinkResult; // @synthesize cardLinkResult=_cardLinkResult;
@property(retain, nonatomic) SCCardLinkingViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) SCPaymentMessage *paymentMessage; // @synthesize paymentMessage=_paymentMessage;
@property(retain, nonatomic) SCPaymentBlocker *blocker; // @synthesize blocker=_blocker;
- (void).cxx_destruct;
- (void)cardLinkingCancelled;
- (void)cardLinkingSuccessful;
- (int)blockerType;
- (void)resolveBlockerWithDelegate:(id)arg1;
- (id)getViewController;
- (id)initWithBlocker:(id)arg1 paymentMessage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

