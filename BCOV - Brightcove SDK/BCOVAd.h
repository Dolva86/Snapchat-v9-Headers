//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface BCOVAd : NSObject
{
    NSDictionary *_properties;
    CDStruct_1b6d18a9 _beginTime;
    CDStruct_1b6d18a9 _duration;
}

@property(readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 beginTime; // @synthesize beginTime=_beginTime;
- (void).cxx_destruct;
- (id)initWithBeginTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 properties:(id)arg3;

@end

