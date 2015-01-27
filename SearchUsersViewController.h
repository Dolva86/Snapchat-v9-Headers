//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AddFriendByNameCellDelegate.h"
#import "AddFriendCellDelegate.h"
#import "SCFriendSearcherDelegate.h"
#import "SCSearchBarDelegate.h"
#import "Subview.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class Friend, NSArray, NSString, SCAlertView, SCFriendFilter, SCFriendSearcher, SCSearchBar, UITableView;

@interface SearchUsersViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, SCSearchBarDelegate, AddFriendCellDelegate, AddFriendByNameCellDelegate, SCFriendSearcherDelegate, Subview>
{
    BOOL _searchedFriendUsernameExisted;
    BOOL _isSearching;
    BOOL _shouldHideAddFriendByNameCell;
    id <AddFriendsDelegate> _delegate;
    NSArray *_filteredFriends;
    UITableView *_searchResultsTableView;
    SCSearchBar *_searchBar;
    SCFriendSearcher *_friendSearcher;
    SCFriendFilter *_friendFilter;
    SCAlertView *_presentedAlertView;
    Friend *_friendToPromptToAdd;
    NSString *_latestFriendSearchString;
}

@property(nonatomic) BOOL shouldHideAddFriendByNameCell; // @synthesize shouldHideAddFriendByNameCell=_shouldHideAddFriendByNameCell;
@property(nonatomic) BOOL isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) NSString *latestFriendSearchString; // @synthesize latestFriendSearchString=_latestFriendSearchString;
@property(nonatomic) BOOL searchedFriendUsernameExisted; // @synthesize searchedFriendUsernameExisted=_searchedFriendUsernameExisted;
@property(retain, nonatomic) Friend *friendToPromptToAdd; // @synthesize friendToPromptToAdd=_friendToPromptToAdd;
@property(retain, nonatomic) SCAlertView *presentedAlertView; // @synthesize presentedAlertView=_presentedAlertView;
@property(retain, nonatomic) SCFriendFilter *friendFilter; // @synthesize friendFilter=_friendFilter;
@property(retain, nonatomic) SCFriendSearcher *friendSearcher; // @synthesize friendSearcher=_friendSearcher;
@property(retain, nonatomic) SCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITableView *searchResultsTableView; // @synthesize searchResultsTableView=_searchResultsTableView;
@property(retain, nonatomic) NSArray *filteredFriends; // @synthesize filteredFriends=_filteredFriends;
@property(nonatomic) __weak id <AddFriendsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)didSelectAddFriendByNameCell:(id)arg1;
- (void)infoButtonPressed:(id)arg1;
- (void)didSelectAddFriendCell:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)friendForIndexPath:(id)arg1;
- (void)searchBarKeyboardWillHide:(id)arg1;
- (void)searchBarDidBeginSearch:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBar:(id)arg1 didSearch:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)isSearchTextValidFriend;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)friendSearcherDidUpdateResultsForQuery:(id)arg1;
- (void)filterSearch:(id)arg1;
- (void)checkExistenceOfUsername:(id)arg1;
- (void)filterResults:(id)arg1;
- (void)resetFriendFilter;
- (void)searchWithSearchText:(id)arg1 promptToAdd:(BOOL)arg2;
- (void)clearCache;
- (void)dismissPresentedAlertView;
- (void)presentAlertView:(id)arg1 type:(int)arg2;
- (void)subviewWillDisappear;
- (void)subviewDidAppear;
- (void)subviewWillAppear;
- (void)friendsDidChange;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)logOnViewDidAppear;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

