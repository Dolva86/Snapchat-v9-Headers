//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString;

@interface StoryNote : NSObject <NSCoding>
{
    BOOL _screenshotted;
    NSString *_viewer;
    NSDate *_timestamp;
}

@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) BOOL screenshotted; // @synthesize screenshotted=_screenshotted;
@property(retain, nonatomic) NSString *viewer; // @synthesize viewer=_viewer;
- (void).cxx_destruct;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

