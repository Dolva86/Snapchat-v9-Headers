//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCChunkSection.h"

@interface SCChunkAutoAdvancingSection : SCChunkSection
{
    BOOL _isSkippable;
    unsigned int _autoAdvanceMillisTime;
}

@property(nonatomic) BOOL isSkippable; // @synthesize isSkippable=_isSkippable;
@property(nonatomic) unsigned int autoAdvanceMillisTime; // @synthesize autoAdvanceMillisTime=_autoAdvanceMillisTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;

@end

