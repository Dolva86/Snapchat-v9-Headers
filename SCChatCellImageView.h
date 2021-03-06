//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UIActivityIndicatorView, UILabel, UIView;

@interface SCChatCellImageView : UIImageView
{
    UIActivityIndicatorView *_activity;
    UIView *_overlayView;
    UILabel *_stateLabel;
}

@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIActivityIndicatorView *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (void)alignActivityIndicatorAndStateLabel;
- (void)setOverlayDisplayAlphaForInlineChatContent:(id)arg1;
- (void)setDisplayWithInlineChatContentMessage:(id)arg1;
- (void)setChatId:(id)arg1 inlineChatContentMessage:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

