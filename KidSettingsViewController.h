//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SCHeader, UILabel, UILongPressGestureRecognizer, UITableView;

@interface KidSettingsViewController : UIViewController <SCHeaderDataSource, SCHeaderDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, UIGestureRecognizerDelegate>
{
    int _alertViewType;
    UILongPressGestureRecognizer *_press;
    SCHeader *_header;
    UITableView *_tableView;
    UILabel *_madeLabel;
}

@property(retain, nonatomic) UILabel *madeLabel; // @synthesize madeLabel=_madeLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) UILongPressGestureRecognizer *press; // @synthesize press=_press;
@property(nonatomic) int alertViewType; // @synthesize alertViewType=_alertViewType;
- (void).cxx_destruct;
- (void)didSelectCellInAccountSectionAtRow:(unsigned int)arg1;
- (id)textForCellInAccountSectionAtRow:(unsigned int)arg1;
- (void)handleDeleteAccountAlertView:(id)arg1 buttonClickedWithIndex:(int)arg2;
- (void)handleLogoutAlertView:(id)arg1 buttonClickedWithIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)presentDeleteAccount;
- (void)presentLogout;
- (void)presentUpgrade;
- (void)presentTermsOfUse;
- (void)presentPrivacyPolicy;
- (void)presentWhatIsSnapkidz;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned int)arg1;
- (id)imageForLeftButtonInState:(unsigned int)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
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

