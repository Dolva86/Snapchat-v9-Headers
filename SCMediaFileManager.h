//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCMediaFileManager : NSObject
{
}

+ (id)fileURLPathForFilename:(id)arg1;
+ (void)createDirectory:(id)arg1;
+ (void)clear;
+ (void)removeExpiredMediaForOwner:(id)arg1;
+ (BOOL)removeDataWithFilename:(id)arg1 error:(id *)arg2;
+ (BOOL)moveItemAtPath:(id)arg1 toMediaDirectoryWithFilename:(id)arg2 error:(id *)arg3;
+ (BOOL)saveData:(id)arg1 toMediaDirectoryWithFilename:(id)arg2 error:(id *)arg3;

@end

