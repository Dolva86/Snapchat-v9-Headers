//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@protocol SwipeViewParentDelegate <NSObject>
- (BOOL)isVisibleViewControllerAndCapableOfPlayingSnaps;
- (BOOL)isRightOfViewController:(UIViewController *)arg1;
- (BOOL)isLeftOfViewController:(UIViewController *)arg1;
- (BOOL)isAnimatingScroll;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)cancelScroll;
- (BOOL)isFullyVisible:(UIViewController *)arg1;
- (BOOL)isPartiallyVisible:(UIViewController *)arg1;
@end

