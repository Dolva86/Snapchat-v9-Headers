//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface SCDiscoverEditionMediaLoadingRecord : NSObject
{
    BOOL _needsLoading;
    BOOL _finishedLoading;
    BOOL _loadingSuccess;
    NSError *_loadingError;
}

@property(retain, nonatomic) NSError *loadingError; // @synthesize loadingError=_loadingError;
@property(nonatomic) BOOL loadingSuccess; // @synthesize loadingSuccess=_loadingSuccess;
@property(nonatomic) BOOL finishedLoading; // @synthesize finishedLoading=_finishedLoading;
@property(nonatomic) BOOL needsLoading; // @synthesize needsLoading=_needsLoading;
- (void).cxx_destruct;

@end

