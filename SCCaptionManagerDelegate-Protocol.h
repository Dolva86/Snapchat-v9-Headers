//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCCaptionManagerDelegate <NSObject>
- (BOOL)canStartEditingCaption;

@optional
- (void)captionTextColorChangeEnabled:(BOOL)arg1;
- (void)captionTextChanged;
- (void)startedEditingCaption;
- (void)stoppedEditingCaption;
@end

