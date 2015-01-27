//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatMessageVisibilityPolicy.h"

@class NSString;

@interface SCChatMessageVisibilityPolicyStaticReleases : NSObject <SCChatMessageVisibilityPolicy>
{
    unsigned long long _recipientReleasedChatSequence;
    unsigned long long _userReleasedChatSequence;
}

@property(readonly, nonatomic) unsigned long long userReleasedChatSequence; // @synthesize userReleasedChatSequence=_userReleasedChatSequence;
@property(readonly, nonatomic) unsigned long long recipientReleasedChatSequence; // @synthesize recipientReleasedChatSequence=_recipientReleasedChatSequence;
- (id)updateForChat:(id)arg1;
- (BOOL)chatMessageIsVisible:(id)arg1 forChat:(id)arg2;
- (id)initWithReleaseSequencesFromChat:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

