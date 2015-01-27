//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RACChannel.h"

@class NSObject, NSString, RACKVOChannelData;

@interface RACKVOChannel : RACChannel
{
    NSObject *_target;
    NSString *_keyPath;
}

@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property NSObject *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)destroyCurrentThreadData;
- (void)createCurrentThreadData;
- (id)initWithTarget:(id)arg1 keyPath:(id)arg2 nilValue:(id)arg3;
@property(readonly, nonatomic) RACKVOChannelData *currentThreadData;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;

@end

