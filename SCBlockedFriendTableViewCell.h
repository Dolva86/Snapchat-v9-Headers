//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton;

@interface SCBlockedFriendTableViewCell : UITableViewCell
{
    id <SCBlockedFriendTableViewCellDelegate> _delegate;
    UIButton *_xButton;
}

@property(retain, nonatomic) UIButton *xButton; // @synthesize xButton=_xButton;
@property(nonatomic) __weak id <SCBlockedFriendTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSubText:(id)arg1;
- (void)setText:(id)arg1;
- (void)xButtonPressed;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

