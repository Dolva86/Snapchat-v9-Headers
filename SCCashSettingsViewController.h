//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCCardLinkingDelegate.h"
#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCUnlinkCardTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SCFeatureSettings, SCHeader, UITableView;

@interface SCCashSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SCHeaderDataSource, SCHeaderDelegate, SCUnlinkCardTableViewCellDelegate, SCCardLinkingDelegate>
{
    SCFeatureSettings *_featureSettings;
    SCHeader *_header;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) SCFeatureSettings *featureSettings; // @synthesize featureSettings=_featureSettings;
- (void).cxx_destruct;
- (void)cardLinkingCancelled;
- (void)cardLinkingSuccessful;
- (void)unlinkCardButtonPressedForCell:(id)arg1;
- (void)switchChanged:(id)arg1;
- (BOOL)isSwitchOnForIndexPath:(id)arg1;
- (void)updateFeatureSettingsIfNecessary;
- (id)securityCodeIndexPath;
- (BOOL)shouldEnableCellAtIndexPath:(id)arg1;
- (BOOL)isSupportIndexPath:(id)arg1;
- (BOOL)isTransactionsIndexPath:(id)arg1;
- (BOOL)isSecurityCodeIndexPath:(id)arg1;
- (BOOL)isDebitCardIndexPath:(id)arg1;
- (BOOL)isSupportSection:(int)arg1;
- (BOOL)isTransactionsSection:(int)arg1;
- (BOOL)isGeneralCashSettingsSection:(int)arg1;
- (BOOL)isCardSection:(int)arg1;
- (void)presentCashSupportVC;
- (void)presentTransactionsVC;
- (void)presentCardLinkingVC;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)labelTextColorForIndexPath:(id)arg1;
- (id)newSwitchViewForIndexPath:(id)arg1;
- (void)setTextForCell:(id)arg1 indexPath:(id)arg2;
- (id)navigationCellForIndexPath:(id)arg1;
- (id)toggleCellForIndexPath:(id)arg1;
- (id)unlinkDebitCardCell;
- (id)debitCardCellForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned int)arg1;
- (id)imageForLeftButtonInState:(unsigned int)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)resetView;
- (void)cashStatusUpdated;
- (void)viewWillResignActive;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initHeader;
- (void)loadView;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
