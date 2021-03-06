//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCBackspaceTextFieldDelegate.h"
#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCTextFieldDelegate.h"

@class NSString, SCButton, SCCardTextField, SCHeader, SCPayment, UIImageView, UILabel, UIScrollView;

@interface SCCardLinkingViewController : UIViewController <SCTextFieldDelegate, SCBackspaceTextFieldDelegate, SCHeaderDataSource, SCHeaderDelegate>
{
    BOOL _selfDismiss;
    BOOL _isCardNumberValid;
    BOOL _isExpiryValid;
    BOOL _isCvvValid;
    BOOL _isZipValid;
    BOOL _isForSettings;
    id <SCCardLinkingDelegate> _cardLinkingDelegate;
    SCPayment *_payment;
    SCHeader *_header;
    SCCardTextField *_cardNumberField;
    SCCardTextField *_cvvField;
    SCCardTextField *_expirationDateField;
    SCCardTextField *_zipField;
    SCButton *_continueButton;
    UILabel *_disclaimerLabel;
    UIImageView *_lockIcon;
    UIScrollView *_scrollView;
}

@property(nonatomic) BOOL isForSettings; // @synthesize isForSettings=_isForSettings;
@property(nonatomic) BOOL isZipValid; // @synthesize isZipValid=_isZipValid;
@property(nonatomic) BOOL isCvvValid; // @synthesize isCvvValid=_isCvvValid;
@property(nonatomic) BOOL isExpiryValid; // @synthesize isExpiryValid=_isExpiryValid;
@property(nonatomic) BOOL isCardNumberValid; // @synthesize isCardNumberValid=_isCardNumberValid;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *lockIcon; // @synthesize lockIcon=_lockIcon;
@property(retain, nonatomic) UILabel *disclaimerLabel; // @synthesize disclaimerLabel=_disclaimerLabel;
@property(retain, nonatomic) SCButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) SCCardTextField *zipField; // @synthesize zipField=_zipField;
@property(retain, nonatomic) SCCardTextField *expirationDateField; // @synthesize expirationDateField=_expirationDateField;
@property(retain, nonatomic) SCCardTextField *cvvField; // @synthesize cvvField=_cvvField;
@property(retain, nonatomic) SCCardTextField *cardNumberField; // @synthesize cardNumberField=_cardNumberField;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(nonatomic) BOOL selfDismiss; // @synthesize selfDismiss=_selfDismiss;
@property(retain, nonatomic) SCPayment *payment; // @synthesize payment=_payment;
@property(nonatomic) __weak id <SCCardLinkingDelegate> cardLinkingDelegate; // @synthesize cardLinkingDelegate=_cardLinkingDelegate;
- (void).cxx_destruct;
- (void)backspaceTextFieldDidDeleteEmptyField:(id)arg1;
- (void)textFieldDidClearText:(id)arg1;
- (void)adjustContentOffsetForiPhone5:(BOOL)arg1;
- (void)clearExpirationDateFieldError;
- (void)clearCVVFieldError;
- (BOOL)allFieldsValid;
- (void)textFieldEditingDidBegin:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)expirationDateShouldChangeToString:(id)arg1 afterReplacement:(id)arg2;
- (BOOL)cardNumberShouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)handleCardLinkingError:(id)arg1;
- (void)continueButtonPressed;
- (void)linkCard;
- (void)keyboardWillShow:(id)arg1;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned int)arg1;
- (id)imageForLeftButtonInState:(unsigned int)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (BOOL)isDisplayingBecauseOfMissingCardProofToken;
- (void)configureForSelfDismiss;
- (void)dismissViewIfSelfDismissing;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initHeader;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initForSettings;
- (id)initWithPayment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

