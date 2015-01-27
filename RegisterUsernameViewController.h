//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCTextFieldDelegate.h"

@class NSString, SCButton, SCTextField;

@interface RegisterUsernameViewController : UIViewController <SCTextFieldDelegate, SCHeaderDataSource, SCHeaderDelegate>
{
    BOOL _isRegistering;
    SCButton *_enterButton;
    SCTextField *_usernameTextField;
}

@property(nonatomic) BOOL isRegistering; // @synthesize isRegistering=_isRegistering;
@property(retain, nonatomic) SCTextField *usernameTextField; // @synthesize usernameTextField=_usernameTextField;
@property(retain, nonatomic) SCButton *enterButton; // @synthesize enterButton=_enterButton;
- (void).cxx_destruct;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidMakeFirstEdit:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)displayOrHideEnterButton;
- (void)textFieldDidChange:(id)arg1;
- (void)setRegisteringUsername:(BOOL)arg1;
- (void)enterButtonTapped;
- (void)registerUsernameDidFail:(id)arg1;
- (void)registerUsernameDidSucceed:(id)arg1;
- (id)imageForRightButtonInState:(unsigned int)arg1;
- (id)imageForLeftButtonInState:(unsigned int)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)keyboardWillShow:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldPopToRootViewController;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)initHeader;
- (void)loadView;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

