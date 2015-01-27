//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAttribute.h"

#import "NSCoding.h"

@class NSNumber, NSString, NSURL;

@interface SCLinkAttribute : SCAttribute <NSCoding>
{
    NSString *_itunesAffiliateToken;
    NSString *_itunesCampaignTracker;
    NSNumber *_itunesProductIdNumber;
    NSURL *_url;
}

+ (id)updateAppLinkAttribute;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *itunesProductIdNumber; // @synthesize itunesProductIdNumber=_itunesProductIdNumber;
@property(copy, nonatomic) NSString *itunesCampaignTracker; // @synthesize itunesCampaignTracker=_itunesCampaignTracker;
@property(copy, nonatomic) NSString *itunesAffiliateToken; // @synthesize itunesAffiliateToken=_itunesAffiliateToken;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

