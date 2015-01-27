//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ALUserStateChangedEvent : NSObject
{
    _Bool _isConnected;
    _Bool _audioPublished;
    _Bool _videoPublished;
    _Bool _screenPublished;
    NSString *_scopeId;
    NSString *_mediaType;
    NSString *_videoSinkId;
    NSString *_screenSinkId;
    long long _userId;
}

@property(copy, nonatomic) NSString *screenSinkId; // @synthesize screenSinkId=_screenSinkId;
@property(nonatomic) _Bool screenPublished; // @synthesize screenPublished=_screenPublished;
@property(copy, nonatomic) NSString *videoSinkId; // @synthesize videoSinkId=_videoSinkId;
@property(nonatomic) _Bool videoPublished; // @synthesize videoPublished=_videoPublished;
@property(nonatomic) _Bool audioPublished; // @synthesize audioPublished=_audioPublished;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
- (id)description;
- (void)dealloc;
- (id)initWithDict:(id)arg1;

@end

