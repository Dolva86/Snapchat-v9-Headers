//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCCardValidator : NSObject
{
}

+ (BOOL)passesLuhnCheck:(id)arg1;
+ (BOOL)isPartiallyValidZipCode:(id)arg1;
+ (BOOL)isValidZipCode:(id)arg1;
+ (BOOL)isPartiallyValidCVV:(id)arg1;
+ (BOOL)isValidCVV:(id)arg1;
+ (id)unformatCardExpiryString:(id)arg1;
+ (id)formatCardExpiryDate:(id)arg1 withTrailingSlash:(BOOL)arg2;
+ (id)unformatCardNumberString:(id)arg1;
+ (id)formatCardNumberString:(id)arg1 changedAt:(struct _NSRange)arg2 withString:(id)arg3 updateCursor:(unsigned int *)arg4;
+ (BOOL)isValidCardExpiryDate:(unsigned int)arg1 year:(unsigned int)arg2 maybeIncomplete:(BOOL)arg3;
+ (BOOL)isValidCardExpiryDate:(id)arg1;
+ (BOOL)isValidCardNumber:(id)arg1;
+ (void)initialize;

@end

