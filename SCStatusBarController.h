//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber, SCMaskedStatusBarWindow;

@interface SCStatusBarController : NSObject
{
    BOOL _maskingEnabled;
    BOOL _scrolling;
    NSMutableDictionary *_indexSettings;
    SCMaskedStatusBarWindow *_maskedStatusBarWindow;
    NSNumber *_startPartialIndex;
    NSNumber *_startVisibleIndex;
}

@property(retain, nonatomic) NSNumber *startVisibleIndex; // @synthesize startVisibleIndex=_startVisibleIndex;
@property(retain, nonatomic) NSNumber *startPartialIndex; // @synthesize startPartialIndex=_startPartialIndex;
@property(nonatomic) BOOL scrolling; // @synthesize scrolling=_scrolling;
@property(retain, nonatomic) SCMaskedStatusBarWindow *maskedStatusBarWindow; // @synthesize maskedStatusBarWindow=_maskedStatusBarWindow;
@property(nonatomic) BOOL maskingEnabled; // @synthesize maskingEnabled=_maskingEnabled;
@property(retain, nonatomic) NSMutableDictionary *indexSettings; // @synthesize indexSettings=_indexSettings;
- (void).cxx_destruct;
- (void)hideMaskedStatusBar;
- (void)didEndScrolling;
- (void)handleNewScrollViewContentOffset:(struct CGPoint)arg1 visibleIndex:(id)arg2 partiallyVisbileIndex:(id)arg3;
- (void)setStatusBarHiddenBlock:(CDUnknownBlockType)arg1 withAnimation:(int)arg2 index:(int)arg3;
- (void)setStatusBarHidden:(BOOL)arg1 withAnimation:(int)arg2 index:(int)arg3;
- (void)setIndex:(int)arg1 visibleStatusBarBlock:(CDUnknownBlockType)arg2 statusBarStyle:(int)arg3;
- (void)setIndex:(int)arg1 visibleStatusBar:(BOOL)arg2 statusBarStyle:(int)arg3;
- (void)setIndex:(int)arg1 statusBarStyle:(int)arg2;
- (id)init;

@end

