//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (GADNSURLUtilities)
- (BOOL)gad_isSchemeEqualToString:(id)arg1 caseSensitive:(BOOL)arg2;
- (BOOL)gad_isHostEqualToString:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)gad_absoluteStringWithoutFragmentComponent;
- (id)gad_impressionTicket;
- (id)gad_dictionaryFromQueryParametersAndConvertKeysToLowercase:(BOOL)arg1;
- (id)gad_parameterValueForKey:(id)arg1;
- (id)gad_appendQueryParameters:(id)arg1;
- (id)gad_appendQueryValue:(id)arg1 forKey:(id)arg2;
- (BOOL)gad_isXFPURL;
- (BOOL)gad_isSDKJavaScriptURL;
- (BOOL)gad_isMediationURL;
@end

