//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AddFriendByNameCellDelegate.h"
#import "FriendsTableIndexDelegate.h"
#import "SCSearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class Friend, FriendsTableIndex, NSArray, NSMutableArray, NSString, SCFriendFilter, SCLayoutView, SCSearchBar, SCSelectRecipientsViewLayout, SCSharedStorySponsor, UILabel, UITableView;

@interface SCSelectRecipientsViewController : UIViewController <SCSearchBarDelegate, AddFriendByNameCellDelegate, UITableViewDataSource, UITableViewDelegate, FriendsTableIndexDelegate>
{
    BOOL _addToMyStory;
    BOOL _addToSharedStory;
    BOOL _disallowAddFriend;
    BOOL _friendsIncluded;
    BOOL _recentsIncluded;
    BOOL _searchable;
    BOOL _storiesIncluded;
    BOOL _searching;
    BOOL _showingSearchBar;
    FriendsTableIndex *_tableIndex;
    UITableView *_tableView;
    id <SCSelectGroupRecipientsDelegate> _groupRecipientsDelegate;
    Friend *_replyFriend;
    SCSharedStorySponsor *_sharedStorySponsor;
    id <SCSelectSingleRecipientDelegate> _singleRecipientDelegate;
    SCFriendFilter *_friendFilter;
    NSArray *_filteredFriends;
    NSArray *_friendKeys;
    NSArray *_friends;
    NSMutableArray *_mutableRecipients;
    NSMutableArray *_mutableJustAdded;
    UILabel *_noSearchResultsLabel;
    SCSearchBar *_searchBar;
    SCSelectRecipientsViewLayout *_viewLayout;
    SCLayoutView *_viewToSet;
}

@property(retain, nonatomic) SCLayoutView *viewToSet; // @synthesize viewToSet=_viewToSet;
@property(retain, nonatomic) SCSelectRecipientsViewLayout *viewLayout; // @synthesize viewLayout=_viewLayout;
@property(nonatomic) BOOL showingSearchBar; // @synthesize showingSearchBar=_showingSearchBar;
@property(nonatomic) BOOL searching; // @synthesize searching=_searching;
@property(retain, nonatomic) SCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UILabel *noSearchResultsLabel; // @synthesize noSearchResultsLabel=_noSearchResultsLabel;
@property(retain, nonatomic) NSMutableArray *mutableJustAdded; // @synthesize mutableJustAdded=_mutableJustAdded;
@property(retain, nonatomic) NSMutableArray *mutableRecipients; // @synthesize mutableRecipients=_mutableRecipients;
@property(retain, nonatomic) NSArray *friends; // @synthesize friends=_friends;
@property(retain, nonatomic) NSArray *friendKeys; // @synthesize friendKeys=_friendKeys;
@property(retain, nonatomic) NSArray *filteredFriends; // @synthesize filteredFriends=_filteredFriends;
@property(retain, nonatomic) SCFriendFilter *friendFilter; // @synthesize friendFilter=_friendFilter;
@property(nonatomic) __weak id <SCSelectSingleRecipientDelegate> singleRecipientDelegate; // @synthesize singleRecipientDelegate=_singleRecipientDelegate;
@property(retain, nonatomic) SCSharedStorySponsor *sharedStorySponsor; // @synthesize sharedStorySponsor=_sharedStorySponsor;
@property(retain, nonatomic) Friend *replyFriend; // @synthesize replyFriend=_replyFriend;
@property(nonatomic) __weak id <SCSelectGroupRecipientsDelegate> groupRecipientsDelegate; // @synthesize groupRecipientsDelegate=_groupRecipientsDelegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) FriendsTableIndex *tableIndex; // @synthesize tableIndex=_tableIndex;
@property(nonatomic) BOOL storiesIncluded; // @synthesize storiesIncluded=_storiesIncluded;
@property(nonatomic) BOOL searchable; // @synthesize searchable=_searchable;
@property(nonatomic) BOOL recentsIncluded; // @synthesize recentsIncluded=_recentsIncluded;
@property(nonatomic) BOOL friendsIncluded; // @synthesize friendsIncluded=_friendsIncluded;
@property(nonatomic) BOOL disallowAddFriend; // @synthesize disallowAddFriend=_disallowAddFriend;
@property(nonatomic) BOOL addToSharedStory; // @synthesize addToSharedStory=_addToSharedStory;
@property(nonatomic) BOOL addToMyStory; // @synthesize addToMyStory=_addToMyStory;
- (void).cxx_destruct;
- (void)showKeyboard:(BOOL)arg1;
- (void)updateActionCounters:(id)arg1;
- (void)scrollToIndex:(BOOL)arg1;
- (id)justAdded;
- (id)recipients;
- (void)addedFriends:(id)arg1 removedFriends:(id)arg2 invitedFriends:(id)arg3;
- (void)searchBarKeyboardWillHide:(id)arg1;
- (void)searchBarDidBeginSearch:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBar:(id)arg1 didSearch:(id)arg2;
- (void)updateNoSearchResultsLabel;
- (void)filterSearch:(id)arg1;
- (void)resetFriendFilter;
- (void)filterResults:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)didSelectAddFriendByNameCell:(id)arg1;
- (void)populateCellDisplayTextForFriend:(id)arg1 cell:(id)arg2;
- (id)selectRecipientCellForIndexPath:(id)arg1;
- (unsigned int)sectionTypeOfSection:(unsigned int)arg1;
- (unsigned int)friendsSectionStartIndex;
- (BOOL)shouldIncludeJustAddedSection;
- (id)getFriendAtIndexPath:(id)arg1;
- (void)removeFriendFromGroupSend:(id)arg1;
- (void)addFriendToGroupSend:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)didSelectPostSharedStoryCell;
- (void)didSelectPostSharedLocalStoryCell;
- (void)didSelectPostMyStoryCell;
- (void)didSelectPostStoryCellAtRow:(int)arg1;
- (void)didSelectCellAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (unsigned int)numberOfSectionsInFullTable;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)reloadFriends;
- (void)friendsDidChange;
- (void)updateSharedStorySponsor;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

