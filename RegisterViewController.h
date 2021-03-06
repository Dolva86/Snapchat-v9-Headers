//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCHeaderDelegate.h"
#import "SCRegisterViewDelegate.h"

@class NSDate, NSString, SCRegisterView;

@interface RegisterViewController : UIViewController <SCHeaderDelegate, SCRegisterViewDelegate>
{
    BOOL _fieldIsFirstResponder;
    BOOL _isRegistering;
    BOOL _agePickerJustShowed;
    BOOL _agePickerVisible;
    BOOL _enterButtonVisible;
    BOOL _keyboardVisible;
    SCRegisterView *_registerView;
    NSDate *_initialBirthday;
}

@property(nonatomic) BOOL keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(nonatomic) BOOL enterButtonVisible; // @synthesize enterButtonVisible=_enterButtonVisible;
@property(nonatomic) BOOL agePickerVisible; // @synthesize agePickerVisible=_agePickerVisible;
@property(nonatomic) BOOL agePickerJustShowed; // @synthesize agePickerJustShowed=_agePickerJustShowed;
@property(nonatomic) NSDate *initialBirthday; // @synthesize initialBirthday=_initialBirthday;
@property(retain, nonatomic) SCRegisterView *registerView; // @synthesize registerView=_registerView;
@property(nonatomic) BOOL isRegistering; // @synthesize isRegistering=_isRegistering;
@property(nonatomic) BOOL fieldIsFirstResponder; // @synthesize fieldIsFirstResponder=_fieldIsFirstResponder;
- (void).cxx_destruct;
- (void)hideEnterButton;
- (void)enterButtonTapped;
- (void)kidRegisterDidFail:(id)arg1;
- (void)registerDidFail:(id)arg1;
- (void)kidRegisterDidSucceed;
- (void)registerDidSucceed:(id)arg1;
- (void)setRegistering:(BOOL)arg1;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)birthdayDidChange;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)keyboardWillShow:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidBecomeActive:(id)arg1;
- (void)textViewDidChange;
- (BOOL)shouldBeginEditingForInputType:(unsigned int)arg1;
- (void)leftButtonPressed;
- (void)presentWebViewWithUrl:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (BOOL)shouldPopToRootViewController;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)getPageViewName;
- (id)initWithBirthday:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

