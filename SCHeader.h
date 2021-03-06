//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCBottomBorderedView, UIButton, UIColor, UIImageView, UILabel;

@interface SCHeader : UIView
{
    id <SCHeaderDataSource> _dataSource;
    id <SCHeaderDelegate> _delegate;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIColor *_borderColor;
    UIImageView *_headerImageView;
    UIView *_leftOverlayView;
    UIView *_rightOverlayView;
    UILabel *_headerLabel;
    SCBottomBorderedView *_bottomBorderedView;
}

@property(retain, nonatomic) SCBottomBorderedView *bottomBorderedView; // @synthesize bottomBorderedView=_bottomBorderedView;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIView *rightOverlayView; // @synthesize rightOverlayView=_rightOverlayView;
@property(retain, nonatomic) UIView *leftOverlayView; // @synthesize leftOverlayView=_leftOverlayView;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) __weak id <SCHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCHeaderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)adjustConstraintsIfNecessary;
- (void)rightButtonPressed;
- (void)leftButtonPressed;
- (void)fadeImageInHeader:(BOOL)arg1;
- (void)addImageInHeaderIfNecessary;
- (void)adjustFontIfNecessary;
- (void)willMoveToWindow:(id)arg1;
- (void)setupTapGestureForRightOverlay;
- (void)reloadRightButtonOverlay;
- (void)setupTapGestureForLeftOverlay;
- (void)reloadLeftButtonOverlay;
- (void)reloadData;
- (void)setupAutoLayoutConstraints;
- (struct CGSize)intrinsicContentSize;
- (id)initWithBottomBorder;
- (void)setupRightButton;
- (void)setupLeftButton;
- (void)setupHeaderLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

