//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatMessageVisibilityPolicy.h"

@class NSString, SCChatMessageVisibilityPolicyTrustChat;

@interface SCChatMessageVisibilityPolicyStaticReleasesOfFirstUpdate : NSObject <SCChatMessageVisibilityPolicy>
{
    SCChatMessageVisibilityPolicyTrustChat *_delegate;
}

@property(readonly, nonatomic) SCChatMessageVisibilityPolicyTrustChat *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)updateForChat:(id)arg1;
- (BOOL)chatMessageIsVisible:(id)arg1 forChat:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

