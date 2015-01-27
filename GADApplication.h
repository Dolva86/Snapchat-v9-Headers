//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADStatisticDictionaryDelegate.h"

@class GADAd, GADSession, GADStatisticDictionary, NSCache, NSMutableDictionary, NSMutableSet;

@interface GADApplication : NSObject <GADStatisticDictionaryDelegate>
{
    GADAd *_backgroundingAd;
    id <NSObject> _appBecameActiveObserver;
    BOOL _appFinishedLaunching;
    GADSession *_currentSession;
    GADStatisticDictionary *_statistics;
    struct dispatch_queue_s *_notificationSerialQueue;
    struct dispatch_queue_s *_statisticsSerialQueue;
    struct dispatch_queue_s *_lockQueue;
    NSMutableSet *_adStatistics;
    NSMutableDictionary *_slotStatistics;
    NSCache *_discardableStoreProductViewControllerAppCache;
    unsigned long long _sequenceNumber;
}

+ (BOOL)verifyCategoryMethodAvailability;
+ (id)sharedApplication;
+ (void)load;
@property(retain, nonatomic) NSCache *discardableStoreProductViewControllerAppCache; // @synthesize discardableStoreProductViewControllerAppCache=_discardableStoreProductViewControllerAppCache;
@property(readonly, nonatomic) NSMutableDictionary *slotStatistics; // @synthesize slotStatistics=_slotStatistics;
@property(readonly, nonatomic) NSMutableSet *adStatistics; // @synthesize adStatistics=_adStatistics;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) BOOL appFinishedLaunching; // @synthesize appFinishedLaunching=_appFinishedLaunching;
@property(nonatomic) struct dispatch_queue_s *lockQueue; // @synthesize lockQueue=_lockQueue;
@property(nonatomic) struct dispatch_queue_s *statisticsSerialQueue; // @synthesize statisticsSerialQueue=_statisticsSerialQueue;
@property(nonatomic) struct dispatch_queue_s *notificationSerialQueue; // @synthesize notificationSerialQueue=_notificationSerialQueue;
@property(retain, nonatomic) GADStatisticDictionary *statistics; // @synthesize statistics=_statistics;
@property(retain, nonatomic) GADSession *currentSession; // @synthesize currentSession=_currentSession;
- (void).cxx_destruct;
- (id)normalizedWebViewNavigationSchemes:(id)arg1;
- (void)didUpdateStatisticDictionary:(id)arg1;
- (struct dispatch_queue_s *)notificationQueue;
- (id)pendingAdStatistics;
- (id)iTunesMetadata;
- (id)iTunesMetadataPath;
- (BOOL)isAppActive;
- (void)runEarlyActivities;
- (void)dealloc;
- (id)init;
- (void)finishedUsingStoreProductViewController:(id)arg1 forProductID:(id)arg2;
- (id)cachedStoreProductViewControllerForProductID:(id)arg1;
- (void)setDiscardableStoreProductViewControllerAppCacheMaxSize:(unsigned int)arg1;
- (id)nextRequestStatisticsDictionaryForSlot:(id)arg1;
- (id)timeSinceFirstAdRequestInMilliseconds;
- (id)nextSequenceNumberAsString;
- (void)incrementSequenceNumber;
- (void)incrementTotalAdClickCount;
- (void)decrementTotalAdRequestCount;
- (void)incrementTotalAdRequestCount;
- (void)didNotSendAdStatistics:(id)arg1;
- (void)didBecomeActive;
- (void)willLeaveApplicationDueToClickOnAd:(id)arg1;
- (id)slotStatisticsDictionary;
- (id)slotStatisticsForSlotID:(id)arg1;

@end

