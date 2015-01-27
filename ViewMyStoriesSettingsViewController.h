//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "CustomStoryViewersViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView;

@interface ViewMyStoriesSettingsViewController : GenericSettingsViewController <CustomStoryViewersViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    int _viewMyStoriesSetting;
    UITableView *_table;
}

@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
@property(nonatomic) int viewMyStoriesSetting; // @synthesize viewMyStoriesSetting=_viewMyStoriesSetting;
- (void).cxx_destruct;
- (BOOL)shouldPopToRootViewControllerLater;
- (BOOL)shouldPopToRootViewController;
- (void)updatedStoryPrivacyWithFriendsToBlock:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)saveSetting;
- (void)dealloc;
- (id)getTitle;
- (void)viewDidLoad;
- (void)loadView;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
