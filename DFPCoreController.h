//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADJSContainer;

@interface DFPCoreController : NSObject
{
    GADJSContainer *_container;
}

+ (id)sharedInstance;
@property(retain, nonatomic) GADJSContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (void)reportActivityWithMetadata:(id)arg1 request:(id)arg2;
- (id)initWithURLString:(id)arg1 fallbackString:(id)arg2;
- (id)init;

@end

