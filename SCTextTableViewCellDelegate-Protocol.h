//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, SCLinkAttribute, SCTextTableViewCell;

@protocol SCTextTableViewCellDelegate <NSObject>
- (void)textTableViewCellDidSelectCashLabelWithCell:(SCTextTableViewCell *)arg1;
- (void)textTableViewCell:(SCTextTableViewCell *)arg1 didSelectLinkWithPhoneNumber:(NSString *)arg2;
- (void)textTableViewCell:(SCTextTableViewCell *)arg1 didSelectLinkWithAddress:(NSDictionary *)arg2;
- (void)textTableViewCell:(SCTextTableViewCell *)arg1 didSelectLinkWithURL:(NSURL *)arg2 linkAttribute:(SCLinkAttribute *)arg3;
@end

