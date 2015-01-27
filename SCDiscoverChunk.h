//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCChunkProtocol.h"

@class NSArray, NSError, NSString, SCDiscoverEdition, UIColor;

@interface SCDiscoverChunk : NSObject <NSCoding, SCChunkProtocol>
{
    BOOL _didAdTransformFail;
    BOOL _ignoresAd;
    BOOL _isLoading;
    NSString *_endpoint;
    NSString *_adKey;
    unsigned int _adType;
    UIColor *_color;
    NSString *_dSnapId;
    SCDiscoverEdition *_edition;
    int _index;
    NSString *_logEndpoint;
    NSString *_logChannelName;
    NSString *_chunkHash;
    NSArray *_loadedSections;
    NSError *_loadingError;
}

+ (unsigned int)adTypeForInteger:(int)arg1;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSError *loadingError; // @synthesize loadingError=_loadingError;
@property(retain, nonatomic) NSArray *loadedSections; // @synthesize loadedSections=_loadedSections;
@property(copy, nonatomic) NSString *chunkHash; // @synthesize chunkHash=_chunkHash;
@property(copy, nonatomic) NSString *logChannelName; // @synthesize logChannelName=_logChannelName;
@property(copy, nonatomic) NSString *logEndpoint; // @synthesize logEndpoint=_logEndpoint;
@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) BOOL ignoresAd; // @synthesize ignoresAd=_ignoresAd;
@property(nonatomic) __weak SCDiscoverEdition *edition; // @synthesize edition=_edition;
@property(copy, nonatomic) NSString *dSnapId; // @synthesize dSnapId=_dSnapId;
@property(nonatomic) BOOL didAdTransformFail; // @synthesize didAdTransformFail=_didAdTransformFail;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned int adType; // @synthesize adType=_adType;
@property(copy, nonatomic) NSString *adKey; // @synthesize adKey=_adKey;
@property(copy, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isViewed;
- (void)didFinishLoadingSectionsWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)didLoadSections:(id)arg1;
- (void)willStartLoadingSections;
- (void)clearLoadedSections;
- (BOOL)hasLoadedSections;
- (BOOL)isLoadedIncludingDependencies:(BOOL)arg1;
- (BOOL)isLoaded;
- (id)parseAdKeyFromEndpoint;
- (void)clearAdTransform;
- (BOOL)isAdTransformComplete;
- (void)transformAdPlaceholderWithEndpoint:(id)arg1;
- (BOOL)isAd;
- (void)ensureNonNilObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
