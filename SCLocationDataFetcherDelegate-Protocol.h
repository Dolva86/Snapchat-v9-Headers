//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSError, NSString;

@protocol SCLocationDataFetcherDelegate <NSObject>
- (void)locationUpdated:(CLLocation *)arg1;
- (void)failedToFetchLocationDataForKey:(NSString *)arg1 error:(NSError *)arg2;
- (void)fetchedLocationData:(id)arg1 forKey:(NSString *)arg2;
@end

