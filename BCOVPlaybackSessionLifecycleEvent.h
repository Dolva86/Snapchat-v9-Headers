//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface BCOVPlaybackSessionLifecycleEvent : NSObject <NSCopying>
{
    NSString *_eventType;
    NSDictionary *_properties;
}

+ (id)eventWithType:(id)arg1;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPlaybackSessionLifecycleEvent:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithEventType:(id)arg1 properties:(id)arg2;

@end

