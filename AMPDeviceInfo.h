//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AMPDeviceInfo : NSObject
{
    NSObject *networkInfo;
    NSString *_versionName;
    NSString *_buildVersionRelease;
    NSString *_phoneModel;
    NSString *_phoneCarrier;
    NSString *_country;
    NSString *_language;
    NSString *_advertiserID;
    NSString *_vendorID;
}

+ (id)getPhoneModel;
+ (id)getPlatformString;
+ (id)getVendorID:(int)arg1;
+ (id)getAdvertiserID:(int)arg1;
- (void).cxx_destruct;
- (id)generateUUID;
@property(readonly) NSString *vendorID; // @synthesize vendorID=_vendorID;
@property(readonly) NSString *advertiserID; // @synthesize advertiserID=_advertiserID;
@property(readonly) NSString *language; // @synthesize language=_language;
@property(readonly) NSString *country; // @synthesize country=_country;
@property(readonly) NSString *phoneCarrier; // @synthesize phoneCarrier=_phoneCarrier;
@property(readonly) NSString *phoneModel; // @synthesize phoneModel=_phoneModel;
@property(readonly) NSString *phoneManufacturer;
@property(readonly) NSString *buildVersionRelease; // @synthesize buildVersionRelease=_buildVersionRelease;
@property(readonly) NSString *versionName; // @synthesize versionName=_versionName;
- (id)init;

@end

