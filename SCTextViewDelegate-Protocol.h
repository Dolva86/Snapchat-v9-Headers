//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCTextView;

@protocol SCTextViewDelegate <NSObject>
- (void)textViewDidChange:(SCTextView *)arg1;

@optional
- (void)textViewDidMakeFirstEdit:(SCTextView *)arg1;
- (void)textViewDidBeginEditing:(SCTextView *)arg1;
- (BOOL)textViewShouldBeginEditing:(SCTextView *)arg1;
- (BOOL)textViewShouldReturn:(SCTextView *)arg1;
@end

