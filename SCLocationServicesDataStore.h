//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLocationDataFetcherDelegate.h"
#import "SCSpeedControllerDelegate.h"

@class CLLocation, NSMutableDictionary, NSString, SCSpeedController;

@interface SCLocationServicesDataStore : NSObject <SCSpeedControllerDelegate, SCLocationDataFetcherDelegate>
{
    CLLocation *_location;
    NSMutableDictionary *_data;
    SCSpeedController *_speedController;
}

+ (id)shared;
@property(retain, nonatomic) SCSpeedController *speedController; // @synthesize speedController=_speedController;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)willResignActive:(id)arg1;
- (void)failedToTrackSpeed:(id)arg1;
- (void)speedChanged:(id)arg1 location:(id)arg2;
- (void)locationUpdated:(id)arg1;
- (void)failedToFetchLocationDataForKey:(id)arg1 error:(id)arg2;
- (void)fetchedLocationData:(id)arg1 forKey:(id)arg2;
- (void)fetchLocationData;
- (void)captureSpeed;
- (void)captureTime;
- (void)captureData;
- (void)clear;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

