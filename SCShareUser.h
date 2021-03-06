//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString, NSUserDefaults;

@interface SCShareUser : NSObject <NSCoding>
{
    BOOL _shouldDisplayCaptionHelp;
    NSString *_username;
    NSString *_authToken;
    NSArray *_keyedFriendsArray;
    NSUserDefaults *_sharedDefaults;
}

@property(retain, nonatomic) NSUserDefaults *sharedDefaults; // @synthesize sharedDefaults=_sharedDefaults;
@property(nonatomic) BOOL shouldDisplayCaptionHelp; // @synthesize shouldDisplayCaptionHelp=_shouldDisplayCaptionHelp;
@property(retain, nonatomic) NSArray *keyedFriendsArray; // @synthesize keyedFriendsArray=_keyedFriendsArray;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)setDidSendMessageRecentlyToRecipients:(id)arg1;
- (BOOL)isKid;
- (BOOL)hasSentMessageRecentlyToRecipient:(id)arg1;
- (BOOL)hasLoggedOut;
- (BOOL)hasLoggedIntoAnotherAccount;
- (void)refreshFromSharedDefaults;
- (id)initWithUsername:(id)arg1 authToken:(id)arg2 keyedFriendsArray:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

