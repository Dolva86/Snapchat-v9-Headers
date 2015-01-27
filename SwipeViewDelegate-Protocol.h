//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SwipeView;

@protocol SwipeViewDelegate <NSObject>

@optional
- (void)swipeView:(SwipeView *)arg1 didSelectItemAtIndex:(int)arg2;
- (BOOL)swipeView:(SwipeView *)arg1 shouldSelectItemAtIndex:(int)arg2;
- (void)swipeViewDidEndScrollingAnimation:(SwipeView *)arg1;
- (void)swipeViewDidEndDecelerating:(SwipeView *)arg1;
- (void)swipeViewWillBeginDecelerating:(SwipeView *)arg1;
- (void)swipeViewDidEndDragging:(SwipeView *)arg1 willDecelerate:(BOOL)arg2;
- (void)swipeViewWillBeginDragging:(SwipeView *)arg1;
- (void)swipeViewCurrentItemIndexDidChange:(SwipeView *)arg1 previousIndex:(int)arg2;
- (void)swipeViewDidScroll:(SwipeView *)arg1;
- (struct CGSize)swipeViewItemSize:(SwipeView *)arg1;
@end

