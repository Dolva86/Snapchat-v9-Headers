//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface AddedFriend : NSObject
{
    BOOL _newLink;
    BOOL _ignored;
    BOOL _hidden;
    BOOL _removed;
    BOOL _blocking;
    BOOL _reporting;
    NSString *_display;
    NSString *_name;
    unsigned int _pendingSnapCount;
    NSNumber *_timestamp;
    NSNumber *_type;
    NSString *_addSource;
    NSString *_addSourceType;
}

@property(retain, nonatomic, getter=getAddSourceType) NSString *addSourceType; // @synthesize addSourceType=_addSourceType;
@property(retain, nonatomic, getter=getAddSource) NSString *addSource; // @synthesize addSource=_addSource;
@property(nonatomic, getter=isReporting) BOOL reporting; // @synthesize reporting=_reporting;
@property(nonatomic, getter=isBlocking) BOOL blocking; // @synthesize blocking=_blocking;
@property(nonatomic, getter=isRemoved) BOOL removed; // @synthesize removed=_removed;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) BOOL ignored; // @synthesize ignored=_ignored;
@property(nonatomic) BOOL newLink; // @synthesize newLink=_newLink;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int pendingSnapCount; // @synthesize pendingSnapCount=_pendingSnapCount;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *display; // @synthesize display=_display;
- (void).cxx_destruct;
- (void)updateWithAddedFriend:(id)arg1;
- (BOOL)isDeletedOrBlocked;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

