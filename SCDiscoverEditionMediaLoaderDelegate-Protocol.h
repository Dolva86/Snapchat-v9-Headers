//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SCDiscoverChunk, SCDiscoverEditionMediaLoader;

@protocol SCDiscoverEditionMediaLoaderDelegate <NSObject>
- (void)editionMediaLoader:(SCDiscoverEditionMediaLoader *)arg1 didSkipLoadingChunk:(SCDiscoverChunk *)arg2;
- (void)editionMediaLoader:(SCDiscoverEditionMediaLoader *)arg1 didFinishLoadingChunk:(SCDiscoverChunk *)arg2 success:(BOOL)arg3 error:(NSError *)arg4;
- (void)editionMediaLoader:(SCDiscoverEditionMediaLoader *)arg1 didStartLoadingChunk:(SCDiscoverChunk *)arg2;
@end

