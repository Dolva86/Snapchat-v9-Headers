//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SCPayment : NSObject
{
    BOOL _sentByUser;
    id <SCPaymentMessageDelegate> _messageDelegate;
    NSString *__id;
    int _status;
    NSArray *_blockers;
    unsigned int _amount;
    NSString *_currencyCode;
    NSString *_senderUsername;
    NSString *_recipientUsername;
    NSString *_senderID;
    NSString *_recipientID;
    NSString *_cvv;
}

+ (id)amountForDisplay:(unsigned int)arg1;
+ (int)paymentStatusFromSQDictionary:(id)arg1;
@property(copy, nonatomic) NSString *cvv; // @synthesize cvv=_cvv;
@property(nonatomic) BOOL sentByUser; // @synthesize sentByUser=_sentByUser;
@property(copy, nonatomic) NSString *recipientID; // @synthesize recipientID=_recipientID;
@property(copy, nonatomic) NSString *senderID; // @synthesize senderID=_senderID;
@property(copy, nonatomic) NSString *recipientUsername; // @synthesize recipientUsername=_recipientUsername;
@property(copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic) unsigned int amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSArray *blockers; // @synthesize blockers=_blockers;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *_id; // @synthesize _id=__id;
@property(nonatomic) __weak id <SCPaymentMessageDelegate> messageDelegate; // @synthesize messageDelegate=_messageDelegate;
- (void).cxx_destruct;
- (id)amountForDisplay;
- (id)getRecipientStatementDescription;
- (id)getSenderStatementDescription;
- (BOOL)shouldSaveCVVForSquareForwarding;
- (BOOL)shouldNotifyDelegateOfBlockersChangeWithNewBlockers:(id)arg1;
- (void)updateWithSquareBlockerResponseDictionary:(id)arg1;
- (void)updateWithSquarePaymentResponseDictionary:(id)arg1;
- (void)updateWithValidateTransactionDictionary:(id)arg1;
- (void)updateWithPayment:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;
- (id)initWithSender:(id)arg1 recipient:(id)arg2 amount:(unsigned int)arg3 initialBlockers:(id)arg4;
- (id)init;

@end

