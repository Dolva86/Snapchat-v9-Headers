//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AddedFriend, Friend, NSDictionary, NSString;

@protocol AddFriendsDelegate <NSObject>
- (BOOL)isFriendWhoAddedYou:(Friend *)arg1;
- (BOOL)isFriendAutoAdded:(Friend *)arg1;
- (BOOL)isFriendInvited:(Friend *)arg1;
- (BOOL)isFriend:(Friend *)arg1;
- (BOOL)isFriendOrInvited:(Friend *)arg1;
- (void)inviteOrUninviteFriend:(Friend *)arg1 context:(NSDictionary *)arg2;
- (void)addOrRemoveFriend:(Friend *)arg1 context:(NSDictionary *)arg2 sourceType:(NSString *)arg3;
- (void)addRemoveInviteUninviteFriend:(Friend *)arg1 context:(NSDictionary *)arg2 sourceType:(NSString *)arg3;
- (void)acceptOrUndoFriendRequest:(AddedFriend *)arg1 context:(NSDictionary *)arg2;
@end

