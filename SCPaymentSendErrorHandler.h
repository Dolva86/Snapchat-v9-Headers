//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCPaymentSendErrorHandler : NSObject
{
    BOOL _swipeToResolve;
}

@property(nonatomic) BOOL swipeToResolve; // @synthesize swipeToResolve=_swipeToResolve;
- (void)handleError:(id)arg1 sendingPaymentMessage:(id)arg2;
- (id)initWithSwipeToResolve:(BOOL)arg1;

@end

