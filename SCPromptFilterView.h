//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOverlayFilterView.h"

@class UIButton, UIView;

@interface SCPromptFilterView : SCOverlayFilterView
{
    id <SCPromptFilterViewDelegate> _delegate;
    UIView *_promptOverlayContainerView;
    UIButton *_turnOnFiltersButton;
}

+ (int)type;
@property(retain, nonatomic) UIButton *turnOnFiltersButton; // @synthesize turnOnFiltersButton=_turnOnFiltersButton;
@property(retain, nonatomic) UIView *promptOverlayContainerView; // @synthesize promptOverlayContainerView=_promptOverlayContainerView;
@property(nonatomic) __weak id <SCPromptFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)turnOnFiltersButtonPressed;
- (BOOL)shouldRespondToTap:(id)arg1;
- (void)tap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

