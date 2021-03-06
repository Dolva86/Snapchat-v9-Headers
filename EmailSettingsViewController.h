//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UIActivityIndicatorView, UIButton, UITextField;

@interface EmailSettingsViewController : GenericSettingsViewController <UITextFieldDelegate>
{
    UITextField *_textField;
    UIActivityIndicatorView *_saveButtonActivity;
    UIButton *_saveButtonBar;
}

@property(retain, nonatomic) UIButton *saveButtonBar; // @synthesize saveButtonBar=_saveButtonBar;
@property(retain, nonatomic) UIActivityIndicatorView *saveButtonActivity; // @synthesize saveButtonActivity=_saveButtonActivity;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)inputKeyboardWillChangeFrame:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setSaveButtonTitle:(id)arg1;
- (void)updateSaveButtonState;
- (void)saveButtonBarPressed;
- (unsigned int)supportedInterfaceOrientations;
- (id)getTitle;
- (void)viewWillAppear:(BOOL)arg1;
- (void)createSaveButtonBar;
- (void)dealloc;
- (void)loadView;
- (id)init;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

