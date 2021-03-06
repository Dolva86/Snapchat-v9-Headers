//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCArchiveItem : NSObject
{
    BOOL _memory;
    unsigned int _format;
    id _object;
    unsigned int _action;
}

+ (id)createItemWithObject:(id)arg1 action:(unsigned int)arg2 format:(unsigned int)arg3 memory:(BOOL)arg4;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) BOOL memory; // @synthesize memory=_memory;
@property(nonatomic) unsigned int format; // @synthesize format=_format;
- (void).cxx_destruct;
- (id)executeWithError:(id *)arg1;
- (void)executeWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (id)initWithObject:(id)arg1 action:(unsigned int)arg2 format:(unsigned int)arg3 memory:(BOOL)arg4;

@end

