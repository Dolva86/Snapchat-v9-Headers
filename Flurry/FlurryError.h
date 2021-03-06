//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSDate, NSString;

@interface FlurryError : NSObject <NSCoding>
{
    int errorID;
    NSDate *date;
    NSString *errorString;
    NSString *errorMessage;
    NSString *exceptionString;
    int errorType;
    NSData *reportData;
}

+ (id)errorWithString:(id)arg1 message:(id)arg2 exceptionString:(id)arg3 errorType:(int)arg4 reportData:(id)arg5;
@property(retain, nonatomic) NSData *reportData; // @synthesize reportData;
@property(nonatomic) int errorType; // @synthesize errorType;
@property(retain, nonatomic) NSString *exceptionString; // @synthesize exceptionString;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage;
@property(retain, nonatomic) NSString *errorString; // @synthesize errorString;
@property(retain, nonatomic) NSDate *date; // @synthesize date;
@property(nonatomic) int errorID; // @synthesize errorID;
- (void)dealloc;
- (id)description;
- (void)appendToData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

