//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCMediaOwnerProtocol.h"

@class NSArray, NSString, UIColor;

@interface SCChunkSection : NSObject <NSCoding, SCMediaOwnerProtocol>
{
    BOOL _viewed;
    NSArray *_channels;
    NSString *__id;
    NSString *_name;
    unsigned int _type;
    UIColor *_color;
}

+ (unsigned int)sectionTypeForString:(id)arg1;
@property(nonatomic) BOOL viewed; // @synthesize viewed=_viewed;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *_id; // @synthesize _id=__id;
@property(copy, nonatomic) NSArray *channels; // @synthesize channels=_channels;
- (void).cxx_destruct;
- (id)description;
- (id)mediaFileNames;
- (BOOL)mediaExistsInCache;
- (id)cacheMediaIds;
- (BOOL)hasLongformContent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)setUpChunkChannelsArray:(id)arg1 chunkDictionary:(id)arg2;
- (id)copyWithIdModifier:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;

@end
