//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (Helpers)
+ (id)hexToData:(id)arg1;
+ (id)generateRandomStringOfLength:(int)arg1;
+ (struct CGSize)text:(id)arg1 sizeWithFont:(id)arg2 constrainedToSize:(struct CGSize)arg3;
+ (BOOL)resizeFontOfTextView:(id)arg1 toFitText:(id)arg2 constrainedSize:(struct CGSize)arg3 minFontSize:(int)arg4 maxFontSize:(int)arg5;
+ (int)maxFontSizeInWidthForText:(id)arg1 fontName:(id)arg2 withMinFontSize:(int)arg3 withMaxFontSize:(int)arg4 maxWidth:(float)arg5;
+ (float)widthSingleLineText:(id)arg1 forFont:(id)arg2;
+ (id)scrambleWord:(id)arg1;
+ (id)scramble:(id)arg1;
+ (id)hexadecimalString:(id)arg1;
+ (id)sha2:(id)arg1;
+ (BOOL)isValidEmail:(id)arg1;
+ (id)hashString:(id)arg1;
+ (id)shortDateFromDate:(id)arg1;
+ (id)timeFromDate:(id)arg1;
+ (id)formatDate:(id)arg1 referenceDate:(id)arg2 maxHours:(unsigned int)arg3;
+ (id)formatDate:(id)arg1 referenceDate:(id)arg2;
+ (id)formatNumber:(id)arg1;
+ (id)formatPhoneNumberForCalling:(id)arg1;
+ (id)urlEncodeString:(id)arg1;
+ (BOOL)isNilOrEmpty:(id)arg1;
+ (id)nilToEmpty:(id)arg1;
- (BOOL)sc_onlyContainsOccurrencesOfCharacter:(id)arg1;
- (id)sc_commonSuffixWithString:(id)arg1 options:(unsigned int)arg2;
- (id)sc_reversedString;
- (id)alphanumericCharsOnly;
- (id)kvoEscaped;
- (BOOL)matches:(id)arg1;
@end

