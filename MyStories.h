//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSMutableDictionary;

@interface MyStories : NSObject <NSCoding>
{
    BOOL _hasUserStartedViewingStories;
    BOOL _hasDisplayedTapToSkipTutorial;
    BOOL _viewingStories;
    int _batchState;
    int _thumbnailsBatchState;
    int _indexOfStoryBeingViewed;
    NSMutableArray *_stories;
    NSMutableArray *_sponsoredImpressionsNotYetReported;
    NSMutableDictionary *_storiesBeingViewedDictionary;
    NSMutableArray *_storiesWithActiveThumbnails;
}

+ (unsigned int)batchDepth;
+ (unsigned int)firstBatchSize;
@property(retain, nonatomic) NSMutableArray *storiesWithActiveThumbnails; // @synthesize storiesWithActiveThumbnails=_storiesWithActiveThumbnails;
@property(retain, nonatomic) NSMutableDictionary *storiesBeingViewedDictionary; // @synthesize storiesBeingViewedDictionary=_storiesBeingViewedDictionary;
@property(retain, nonatomic) NSMutableArray *sponsoredImpressionsNotYetReported; // @synthesize sponsoredImpressionsNotYetReported=_sponsoredImpressionsNotYetReported;
@property(nonatomic, getter=isViewingStories) BOOL viewingStories; // @synthesize viewingStories=_viewingStories;
@property(nonatomic) BOOL hasDisplayedTapToSkipTutorial; // @synthesize hasDisplayedTapToSkipTutorial=_hasDisplayedTapToSkipTutorial;
@property(retain, nonatomic) NSMutableArray *stories; // @synthesize stories=_stories;
@property(nonatomic) int indexOfStoryBeingViewed; // @synthesize indexOfStoryBeingViewed=_indexOfStoryBeingViewed;
@property(nonatomic) BOOL hasUserStartedViewingStories; // @synthesize hasUserStartedViewingStories=_hasUserStartedViewingStories;
@property(nonatomic) int thumbnailsBatchState; // @synthesize thumbnailsBatchState=_thumbnailsBatchState;
@property(nonatomic) int batchState; // @synthesize batchState=_batchState;
- (void).cxx_destruct;
- (void)removeExpiredStories;
- (void)addToSponsoredImpressionsNotYetReported:(id)arg1;
- (id)getAndClearUnreportedSponsoredImpressions;
- (unsigned int)numberOfFailedStories;
- (unsigned int)numberOfPostingStories;
- (id)myNextVideoStory;
- (void)markMyStoryViewed:(id)arg1;
- (id)storiesBeingViewed;
- (void)removeViewingStory:(id)arg1;
- (void)addViewingStory:(id)arg1;
- (void)removeStory:(id)arg1;
- (void)addNewStory:(id)arg1;
- (unsigned int)numberOfLoadedStoryMediaNeededForLoadedState;
- (BOOL)hasStories;
- (id)thumbnailId;
- (id)displayNameForCell;
- (void)fetchThumbnailMedia:(id)arg1;
- (void)fetchMedia:(id)arg1;
- (void)verifyMediaState:(int)arg1 forMedia:(id)arg2 type:(id)arg3;
- (void)fetchThumbnailMediaForStories:(id)arg1;
- (void)fetchThumbnailMedia;
- (void)resetStoriesWithActiveThumbnails;
- (id)storiesWithThumbnailToDisplay;
- (void)fetchMediaForBatch:(unsigned int)arg1 loadContext:(int)arg2;
- (void)fetchMediaForBatch:(unsigned int)arg1;
- (float)totalTimeLeft;
- (void)clearExpiredStories;
- (void)updateWithMyStories:(id)arg1;
- (void)rearrangeMyStoriesArray;
- (void)beginViewingStories;
- (void)resetUserStartedViewingStoriesState;
- (void)resetMyStoriesState;
- (void)handleKeyChange:(id)arg1 toStory:(id)arg2;
- (void)resetIndexOfStoryBeingViewedWithChange:(id)arg1;
- (void)handleChangetoStories:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeIndividualStoriesObservers:(id)arg1;
- (void)removeStoriesObservers;
- (void)addIndividualStoriesObservers:(id)arg1;
- (void)addStoriesObservers;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
