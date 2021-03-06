//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class Friend, UIActivityIndicatorView, UIButton, UILabel;

@interface SCAddFriendCellView : UIView
{
    BOOL _tappable;
    BOOL _alreadyAdded;
    id <SCAddFriendCellViewDelegate> _addDelegate;
    Friend *_friend;
    int _addFriendCellType;
    unsigned int _pendingSnapsCount;
    UILabel *_nameLabel;
    UILabel *_subLabel;
    UIButton *_addFriendButton;
    UIButton *_infoButton;
    UIButton *_settingsGearButton;
    UIActivityIndicatorView *_loadingIndicator;
}

+ (id)calculateTappableSubLabelTextForFriend:(id)arg1 alreadyAdded:(BOOL)arg2 whenSelected:(BOOL)arg3;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIButton *settingsGearButton; // @synthesize settingsGearButton=_settingsGearButton;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UIButton *addFriendButton; // @synthesize addFriendButton=_addFriendButton;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) BOOL alreadyAdded; // @synthesize alreadyAdded=_alreadyAdded;
@property(nonatomic) unsigned int pendingSnapsCount; // @synthesize pendingSnapsCount=_pendingSnapsCount;
@property(nonatomic) int addFriendCellType; // @synthesize addFriendCellType=_addFriendCellType;
@property(retain, nonatomic) Friend *friend; // @synthesize friend=_friend;
@property(nonatomic) __weak id <SCAddFriendCellViewDelegate> addDelegate; // @synthesize addDelegate=_addDelegate;
@property(nonatomic) BOOL tappable; // @synthesize tappable=_tappable;
- (void).cxx_destruct;
- (void)switchToSettingsButton:(BOOL)arg1;
- (void)setAddFriendButtonHidden:(BOOL)arg1;
- (id)getTableView;
- (void)settingsGearPressed;
- (void)addFriendPressed;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlightedState:(BOOL)arg1;
- (void)setAlreadyAdded:(BOOL)arg1 addFriendCellType:(int)arg2;
- (void)setNameLabelText:(id)arg1;
- (void)setNeedsInfoButton:(BOOL)arg1;
- (void)setLoadingIndicatorWith:(int)arg1;
- (void)setFriend:(id)arg1 alreadyAdded:(BOOL)arg2;
- (void)setFriend:(id)arg1 alreadyAdded:(BOOL)arg2 pendingSnapsCount:(unsigned int)arg3 key:(id)arg4 inPage:(id)arg5 isSearched:(BOOL)arg6;
- (void)setFriend:(id)arg1 alreadyAdded:(BOOL)arg2 pendingSnapsCount:(unsigned int)arg3 key:(id)arg4 inPage:(id)arg5;
- (void)setLabelFramesForKey:(id)arg1 inPage:(id)arg2;
- (void)toggleRightOffset:(BOOL)arg1;
- (void)infoButtonPressed;
- (id)initWithStyleKey:(id)arg1 page:(id)arg2;

@end

