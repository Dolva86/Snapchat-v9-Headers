//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCOV_RACSequence.h"

@interface BCOV_RACUnarySequence : BCOV_RACSequence
{
    id _head;
}

+ (id)return:(id)arg1;
@property(retain, nonatomic) id head; // @synthesize head=_head;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)bind:(CDUnknownBlockType)arg1;
- (id)tail;

@end

