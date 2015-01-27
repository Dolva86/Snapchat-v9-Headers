//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SWTableViewCell;

@protocol SWTableViewCellDelegate <NSObject>

@optional
- (void)swipeableTableViewCellDidEndScrolling:(SWTableViewCell *)arg1;
- (BOOL)swipeableTableViewCell:(SWTableViewCell *)arg1 canSwipeToState:(int)arg2;
- (BOOL)swipeableTableViewCellShouldHideUtilityButtonsOnSwipe:(SWTableViewCell *)arg1;
- (void)swipeableTableViewCell:(SWTableViewCell *)arg1 scrollingToState:(int)arg2;
- (void)swipeableTableViewCell:(SWTableViewCell *)arg1 didTriggerRightUtilityButtonWithIndex:(int)arg2;
- (void)swipeableTableViewCell:(SWTableViewCell *)arg1 didTriggerLeftUtilityButtonWithIndex:(int)arg2;
@end

