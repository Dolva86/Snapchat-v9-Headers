//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BCOVMutableAnalytics.h"
#import "BCOVPlaybackSessionConsumer.h"

@class BCOVAnalyticsSession, BCOVAnalyticsSessionDigester, NSString;

@interface BCOVAnalytics : NSObject <BCOVPlaybackSessionConsumer, BCOVMutableAnalytics>
{
    BOOL _uniqueIdentifierEnabled;
    NSString *_destination;
    NSString *_source;
    NSString *_account;
    id <BCOVPlaybackSessionPrivate> _currentPlaybackSession;
    BCOVAnalyticsSession *_currentAnalyticsSession;
    BCOVAnalyticsSessionDigester *_sessionDigester;
}

+ (id)stockPropertiesForSession:(id)arg1;
@property(retain, nonatomic) BCOVAnalyticsSessionDigester *sessionDigester; // @synthesize sessionDigester=_sessionDigester;
@property(retain, nonatomic) BCOVAnalyticsSession *currentAnalyticsSession; // @synthesize currentAnalyticsSession=_currentAnalyticsSession;
@property(retain, nonatomic) id <BCOVPlaybackSessionPrivate> currentPlaybackSession; // @synthesize currentPlaybackSession=_currentPlaybackSession;
@property(nonatomic, getter=isUniqueIdentifierEnabled) BOOL uniqueIdentifierEnabled; // @synthesize uniqueIdentifierEnabled=_uniqueIdentifierEnabled;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (id)addSessionSpecificAnalyticsPropertiesForSession:(id)arg1;
- (void)didAdvanceToPlaybackSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
