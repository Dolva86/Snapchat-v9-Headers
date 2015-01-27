//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCache, NSDictionary, NSString;

@interface SCTheme : NSObject
{
    NSString *_name;
    NSCache *_colorCache;
    NSCache *_fontCache;
    NSArray *_dancingGhostColors;
    NSDictionary *_pagesDictionary;
}

@property(retain, nonatomic) NSDictionary *pagesDictionary; // @synthesize pagesDictionary=_pagesDictionary;
@property(retain, nonatomic) NSArray *dancingGhostColors; // @synthesize dancingGhostColors=_dancingGhostColors;
@property(retain, nonatomic) NSCache *fontCache; // @synthesize fontCache=_fontCache;
@property(retain, nonatomic) NSCache *colorCache; // @synthesize colorCache=_colorCache;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (struct CGRect)rectForKey:(id)arg1 inPage:(id)arg2;
- (struct CGSize)sizeForKey:(id)arg1 inPage:(id)arg2;
- (struct CGPoint)pointForKey:(id)arg1 inPage:(id)arg2;
- (void)loadDiscoLightColors;
- (id)discoLightColors;
- (id)fontForKey:(id)arg1 inPage:(id)arg2;
- (id)colorForKey:(id)arg1 inPage:(id)arg2;
- (id)imageForKey:(id)arg1 inPage:(id)arg2;
- (float)floatForKey:(id)arg1 inPage:(id)arg2;
- (int)integerForKey:(id)arg1 inPage:(id)arg2;
- (id)stringForKey:(id)arg1 inPage:(id)arg2;
- (BOOL)boolForKey:(id)arg1 inPage:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

