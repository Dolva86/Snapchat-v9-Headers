//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCCaptchaViewDelegate.h"
#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, SCButton, SCCaptchaView, SCHeader, UIScrollView;

@interface SCRegisterCaptchaViewController : UIViewController <SCCaptchaViewDelegate, UIAlertViewDelegate, SCHeaderDataSource, SCHeaderDelegate>
{
    BOOL _didVerifyPhoneNumber;
    NSString *_prompt;
    SCHeader *_header;
    SCCaptchaView *_captchaView;
    UIScrollView *_scrollView;
    SCButton *_verifyButton;
}

@property(retain, nonatomic) SCButton *verifyButton; // @synthesize verifyButton=_verifyButton;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) SCCaptchaView *captchaView; // @synthesize captchaView=_captchaView;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(nonatomic) BOOL didVerifyPhoneNumber; // @synthesize didVerifyPhoneNumber=_didVerifyPhoneNumber;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)captchaViewDidDeselectAllImages:(id)arg1;
- (void)captchaViewDidSelectAnImage:(id)arg1;
- (void)captchaView:(id)arg1 didVerifyWithResult:(int)arg2;
- (void)captchaView:(id)arg1 didFinishLoadingCaptcha:(BOOL)arg2;
- (id)imageForRightButtonInState:(unsigned int)arg1;
- (id)imageForLeftButtonInState:(unsigned int)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)verifyButtonPressed;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldPopToRootViewController;
- (void)presentNextViewController;
- (void)finishRegistration;
- (void)viewDidLoad;
- (void)initHeaderAndScrollView;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
