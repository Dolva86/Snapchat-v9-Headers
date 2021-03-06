//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCGrowingButton, UIActivityIndicatorView, UILabel, UITextField;

@interface SCCardPasscodeView : UIView
{
    BOOL _inErrorMode;
    UIActivityIndicatorView *_activityIndicator;
    UIView *_cardCutout;
    UITextField *_cvvField;
    UILabel *_instructionsLabel;
    SCGrowingButton *_xButton;
}

@property(nonatomic) BOOL inErrorMode; // @synthesize inErrorMode=_inErrorMode;
@property(retain, nonatomic) SCGrowingButton *xButton; // @synthesize xButton=_xButton;
@property(retain, nonatomic) UILabel *instructionsLabel; // @synthesize instructionsLabel=_instructionsLabel;
@property(retain, nonatomic) UITextField *cvvField; // @synthesize cvvField=_cvvField;
@property(retain, nonatomic) UIView *cardCutout; // @synthesize cardCutout=_cardCutout;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void).cxx_destruct;
- (void)setErrorMode:(id)arg1 terminal:(BOOL)arg2;
- (BOOL)isInErrorMode;
- (void)setInstructionText:(id)arg1;
- (id)setupInputField:(id)arg1;
- (void)setupInputFields;
- (void)setupCardCutout;
- (void)setupInstructionsLabel;
- (void)setupXButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

