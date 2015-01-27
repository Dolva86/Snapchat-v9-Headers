//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSString, SCLocationController;

@interface SCLocationDataFetcher : NSObject
{
    BOOL _fetching;
    SCLocationController *_locationController;
    NSMutableDictionary *_locationData;
    NSDate *_retryTimestamp;
    NSString *_username;
}

+ (id)path;
+ (id)locationControllerClassNames;
+ (id)shared;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSDate *retryTimestamp; // @synthesize retryTimestamp=_retryTimestamp;
@property(retain, nonatomic) NSMutableDictionary *locationData; // @synthesize locationData=_locationData;
@property(retain, nonatomic) SCLocationController *locationController; // @synthesize locationController=_locationController;
@property(nonatomic) BOOL fetching; // @synthesize fetching=_fetching;
- (void).cxx_destruct;
- (void)clearSavedState;
- (void)saveState;
- (void)retryFetchDataMaybeForLocation:(id)arg1 delegate:(id)arg2 delay:(float)arg3 queue:(id)arg4;
- (void)fetchDataForLocation:(id)arg1 delegate:(id)arg2;
- (void)fetchLocationDataIfNecessaryWithDelegate:(id)arg1;
- (void)configureLocationData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

