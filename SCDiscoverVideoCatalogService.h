//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface SCDiscoverVideoCatalogService : NSObject
{
    NSMutableSet *_loadingCatalogs;
    NSMutableDictionary *_videoIDMap;
}

+ (id)shared;
@property(retain, nonatomic) NSMutableDictionary *videoIDMap; // @synthesize videoIDMap=_videoIDMap;
@property(retain, nonatomic) NSMutableSet *loadingCatalogs; // @synthesize loadingCatalogs=_loadingCatalogs;
- (void).cxx_destruct;
- (void)clearCatalogForEditionID:(id)arg1;
- (id)videoURLsForID:(id)arg1 editionID:(id)arg2;
- (void)fetchCatalogForEditionId:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

