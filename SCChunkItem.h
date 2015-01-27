//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCMediaOwnerProtocol.h"

@class NSString;

@interface SCChunkItem : NSObject <NSCoding, SCMediaOwnerProtocol>
{
    NSString *__id;
    NSString *_name;
    unsigned int _type;
}

+ (unsigned int)itemTypeForString:(id)arg1;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;
- (id)mediaFileNames;
- (BOOL)mediaExistsInCache;
- (id)cacheMediaIds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;

@end

