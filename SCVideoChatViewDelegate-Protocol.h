//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIGestureRecognizer, UIView;

@protocol SCVideoChatViewDelegate <NSObject>
- (void)shrinkLocalVideoFinished;
- (void)shrinkLocalVideoStarted;
- (void)growLocalVideoFinished;
- (void)growLocalVideoStarted;
- (void)doubleTapGesture:(UIGestureRecognizer *)arg1 withLocalView:(UIView *)arg2;
@end

