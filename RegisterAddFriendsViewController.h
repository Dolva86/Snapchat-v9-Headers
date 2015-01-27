//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AddContactsViewControllerDelegate.h"
#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SendTextControllerDelegate.h"

@class AddContactsViewController, AddFriendsDelegateObject, NSString, SCButton, SCHeader;

@interface RegisterAddFriendsViewController : UIViewController <SendTextControllerDelegate, SCHeaderDataSource, SCHeaderDelegate, AddContactsViewControllerDelegate>
{
    AddContactsViewController *_addContactsVC;
    AddFriendsDelegateObject *_addFriendsDelegate;
    SCButton *_continueButton;
    SCHeader *_header;
}

@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) SCButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) AddFriendsDelegateObject *addFriendsDelegate; // @synthesize addFriendsDelegate=_addFriendsDelegate;
@property(retain, nonatomic) AddContactsViewController *addContactsVC; // @synthesize addContactsVC=_addContactsVC;
- (void).cxx_destruct;
- (void)sendTextController:(id)arg1 compeletedWithStatus:(int)arg2;
- (void)addContactsViewControllerAlreadyDeniedAccess;
- (void)addContactsViewControllerDidAllowAccess:(int)arg1;
- (void)didTapContinue;
- (void)sendInvitesToFriends:(id)arg1;
- (void)finishRegistration;
- (void)didFindFriend:(id)arg1;
- (void)logNumberOfFriends:(id)arg1 count:(unsigned int)arg2;
- (id)histogramBucket:(unsigned int)arg1;
- (void)rightButtonPressed;
- (id)imageForRightButtonInState:(unsigned int)arg1;
- (id)imageForLeftButtonInState:(unsigned int)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldPopToRootViewController;
- (void)enableHeaderRightButton;
- (void)initHeader;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
