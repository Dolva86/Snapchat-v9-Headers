//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIActivityIndicatorView, UIButton, UIFont;

@interface AddFriendByNameCell : UITableViewCell
{
    BOOL _longText;
    id <AddFriendByNameCellDelegate> _delegate;
    NSString *_username;
    UIButton *_addFriendButton;
    UIFont *_oldFont;
    UIActivityIndicatorView *_loadingIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIFont *oldFont; // @synthesize oldFont=_oldFont;
@property(nonatomic) BOOL longText; // @synthesize longText=_longText;
@property(retain, nonatomic) UIButton *addFriendButton; // @synthesize addFriendButton=_addFriendButton;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) __weak id <AddFriendByNameCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addFriendPressed;
- (void)setBlockedForUsername:(id)arg1;
- (void)setInvalidUsername:(id)arg1;
- (void)setNameText:(id)arg1 isLoading:(BOOL)arg2 usernameExists:(BOOL)arg3 alreadyAdded:(BOOL)arg4 inPage:(id)arg5;
- (void)updateConstraints;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 key:(id)arg3 page:(id)arg4;

@end

