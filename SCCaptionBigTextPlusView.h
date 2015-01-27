//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCaption.h"
#import "UITextViewDelegate.h"

@class NSString, SCCaptionTouchControlUIView, UITextView, UIToolbar, UIView;

@interface SCCaptionBigTextPlusView : NSObject <UITextViewDelegate, SCCaption>
{
    BOOL _isCaptionBackgroundViewAnimating;
    BOOL _editing;
    BOOL _colorChanged;
    id <SCCaptionDelegate> _delegate;
    id <SCCaptionConfigDelegate> _configDelegate;
    UIView *_containerView;
    UIToolbar *_blurToolbar;
    SCCaptionTouchControlUIView *_textContainerView;
    UITextView *_textView;
    int _characterLimit;
    float _lastTranslationX;
    float _lastTranslationY;
    float _lastRotation;
    float _lastScale;
    float _fontSize;
    int _mode;
    float _keyboardHeight;
    int _currentOrientation;
    float _tempLinePaddings;
    struct UIEdgeInsets _tempTextInsets;
}

@property(nonatomic) BOOL colorChanged; // @synthesize colorChanged=_colorChanged;
@property(nonatomic) struct UIEdgeInsets tempTextInsets; // @synthesize tempTextInsets=_tempTextInsets;
@property(nonatomic) float tempLinePaddings; // @synthesize tempLinePaddings=_tempLinePaddings;
@property(nonatomic) int currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) float keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) float lastScale; // @synthesize lastScale=_lastScale;
@property(nonatomic) float lastRotation; // @synthesize lastRotation=_lastRotation;
@property(nonatomic) float lastTranslationY; // @synthesize lastTranslationY=_lastTranslationY;
@property(nonatomic) float lastTranslationX; // @synthesize lastTranslationX=_lastTranslationX;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) int characterLimit; // @synthesize characterLimit=_characterLimit;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) SCCaptionTouchControlUIView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(retain, nonatomic) UIToolbar *blurToolbar; // @synthesize blurToolbar=_blurToolbar;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) BOOL isCaptionBackgroundViewAnimating; // @synthesize isCaptionBackgroundViewAnimating=_isCaptionBackgroundViewAnimating;
@property(nonatomic) __weak id <SCCaptionConfigDelegate> configDelegate; // @synthesize configDelegate=_configDelegate;
@property(nonatomic) __weak id <SCCaptionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)shareLoggingParameters;
- (void)colorChanged:(id)arg1;
- (void)rotateFromOrientation:(int)arg1 toOrientation:(int)arg2;
- (float)rotationFromOrientation:(int)arg1;
- (void)viewDidLayoutSubviews:(int)arg1;
- (float)findRightFontSize:(id)arg1;
- (void)resizeWithScreenWidthInEditingMode:(BOOL)arg1;
- (void)resize;
- (BOOL)textFrameContainsGesture:(id)arg1;
- (void)rotation:(id)arg1;
- (void)pinch:(id)arg1;
- (void)pan:(id)arg1;
- (void)tapOrPress:(id)arg1;
- (void)press:(id)arg1;
- (void)tap:(id)arg1;
- (void)didStopEditingAnimated:(BOOL)arg1;
- (void)prepareToStopEditing;
- (void)didStartEditingAnimated:(BOOL)arg1;
- (void)prepareToStartEditing;
- (void)stopEditingAnimated:(BOOL)arg1;
- (void)startEditingAnimated:(BOOL)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (float)initialTranslationX;
- (float)height;
- (float)width;
- (int)contentMargin;
- (int)contentHeight;
- (int)contentWidth;
- (int)maxTextWidth;
- (void)updateLastTranslation;
- (void)changeScaleBasedOnFontSize;
- (void)changeFontSizeBasedOnScale;
- (void)setText:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (BOOL)isFullscreen;
- (float)lastVertical;
- (id)attributedText;
- (id)text;
- (BOOL)isEditing;
- (BOOL)isHidden;
- (void)inputKeyboardWillChangeFrame:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)setTopAlphaGradientEnabled:(BOOL)arg1;
- (void)removeBlurViewToBackground;
- (void)addBlurViewToBackground;
- (void)configureTextViewBasedOnEditModeAnimated:(BOOL)arg1;
- (id)view;
- (void)tearDownAndRemoveFromSuperview;
- (void)dealloc;
- (void)initializeViewsWithSuperviewBounds:(struct CGRect)arg1;
- (id)initWithSuperviewBounds:(struct CGRect)arg1 delegate:(id)arg2 mode:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
