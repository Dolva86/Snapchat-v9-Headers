//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UIActivityIndicatorView, UIButton, UILabel, UISwitch, UITextField;

@interface SCDeveloperToolsViewController : GenericSettingsViewController <UITextFieldDelegate>
{
    UIActivityIndicatorView *_saveButtonActivity;
    UITextField *_textField;
    UIButton *_saveButtonBar;
    UISwitch *_cashSandboxSwitch;
    UILabel *_naughtyBehaviourLabel;
}

@property(retain, nonatomic) UILabel *naughtyBehaviourLabel; // @synthesize naughtyBehaviourLabel=_naughtyBehaviourLabel;
@property(retain, nonatomic) UISwitch *cashSandboxSwitch; // @synthesize cashSandboxSwitch=_cashSandboxSwitch;
@property(retain, nonatomic) UIButton *saveButtonBar; // @synthesize saveButtonBar=_saveButtonBar;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIActivityIndicatorView *saveButtonActivity; // @synthesize saveButtonActivity=_saveButtonActivity;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)arg1;
- (void)unregisterForKeyboardNotifications;
- (void)registerForKeyboardNotifications;
- (unsigned int)supportedInterfaceOrientations;
- (void)crashLabelPressed;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setSaveButtonTitle:(id)arg1;
- (void)saveButtonBarPressed;
- (void)switchChanged:(id)arg1;
- (void)createSaveButtonBar;
- (void)loadView;
- (void)dealloc;
- (id)getTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

