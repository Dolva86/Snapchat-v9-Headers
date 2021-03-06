//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCOV_RACSubject.h"

@class NSError, NSMutableArray;

@interface BCOV_RACReplaySubject : BCOV_RACSubject
{
    BOOL _hasCompleted;
    BOOL _hasError;
    unsigned int _capacity;
    NSMutableArray *_valuesReceived;
    NSError *_error;
}

+ (id)replaySubjectWithCapacity:(unsigned int)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL hasError; // @synthesize hasError=_hasError;
@property(nonatomic) BOOL hasCompleted; // @synthesize hasCompleted=_hasCompleted;
@property(readonly, nonatomic) NSMutableArray *valuesReceived; // @synthesize valuesReceived=_valuesReceived;
@property(readonly, nonatomic) unsigned int capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (void)sendError:(id)arg1;
- (void)sendCompleted;
- (void)sendNext:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)init;

@end

