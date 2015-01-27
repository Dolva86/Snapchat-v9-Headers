//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALService, ALUser, NSDictionary, NSString;

@protocol ALPrivateAPI <NSObject>

@optional
- (id)initWithInfo:(NSDictionary *)arg1;
- (ALUser *)getUser:(long long)arg1;
- (void)removeUser:(long long)arg1;
- (void)addUser:(long long)arg1 withInfo:(ALUser *)arg2;
- (id)initWithService:(ALService *)arg1 andScope:(NSString *)arg2;
@end

