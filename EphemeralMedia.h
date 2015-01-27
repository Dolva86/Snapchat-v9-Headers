//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MediaDataSource.h"
#import "MediaDelegate.h"
#import "MediaImageProcessingDelegate.h"
#import "MediaUploadDelegate.h"
#import "NSCoding.h"
#import "SnapVideoFilterDelegate.h"

@class CLLocation, Media, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, SnapVideoFilter;

@interface EphemeralMedia : NSObject <SnapVideoFilterDelegate, MediaDataSource, MediaDelegate, MediaUploadDelegate, MediaImageProcessingDelegate, NSCoding>
{
    BOOL _geoFilterUsed;
    BOOL _cameraFrontFacing;
    Media *_media;
    NSString *__id;
    NSString *_captionText;
    NSString *_clientId;
    EphemeralMedia *_doublePostParent;
    int _ephemeralMediaState;
    NSDate *_firstPostDate;
    NSString *_geoFilterId;
    NSArray *_allGeoFilterIds;
    int _geoFilterImpressions;
    CLLocation *_location;
    unsigned int _numberOfTimesReloaded;
    Media *_thumbnailMedia;
    float _time;
    float _timeLeft;
    int _type;
    SnapVideoFilter *_videoFilter;
    float _videoTimeSoFar;
    NSDate *_viewedTimestamp;
    NSMutableDictionary *_secretShareLoggingParams;
    NSMutableDictionary *_shareLoggingParams;
    NSMutableDictionary *_eventLoggingParams;
    NSMutableArray *_targets;
    NSMutableArray *_viewingTimestamps;
    double _timeStartedViewing;
}

@property(retain, nonatomic) NSMutableArray *viewingTimestamps; // @synthesize viewingTimestamps=_viewingTimestamps;
@property(retain, nonatomic) NSMutableArray *targets; // @synthesize targets=_targets;
@property(retain, nonatomic) NSMutableDictionary *eventLoggingParams; // @synthesize eventLoggingParams=_eventLoggingParams;
@property(retain, nonatomic) NSMutableDictionary *shareLoggingParams; // @synthesize shareLoggingParams=_shareLoggingParams;
@property(retain, nonatomic) NSMutableDictionary *secretShareLoggingParams; // @synthesize secretShareLoggingParams=_secretShareLoggingParams;
@property(nonatomic) BOOL cameraFrontFacing; // @synthesize cameraFrontFacing=_cameraFrontFacing;
@property(retain, nonatomic) NSDate *viewedTimestamp; // @synthesize viewedTimestamp=_viewedTimestamp;
@property(nonatomic) float videoTimeSoFar; // @synthesize videoTimeSoFar=_videoTimeSoFar;
@property(retain, nonatomic) SnapVideoFilter *videoFilter; // @synthesize videoFilter=_videoFilter;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double timeStartedViewing; // @synthesize timeStartedViewing=_timeStartedViewing;
@property(nonatomic) float timeLeft; // @synthesize timeLeft=_timeLeft;
@property(nonatomic) float time; // @synthesize time=_time;
@property(retain, nonatomic) Media *thumbnailMedia; // @synthesize thumbnailMedia=_thumbnailMedia;
@property(nonatomic) unsigned int numberOfTimesReloaded; // @synthesize numberOfTimesReloaded=_numberOfTimesReloaded;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) BOOL geoFilterUsed; // @synthesize geoFilterUsed=_geoFilterUsed;
@property(nonatomic) int geoFilterImpressions; // @synthesize geoFilterImpressions=_geoFilterImpressions;
@property(retain, nonatomic) NSArray *allGeoFilterIds; // @synthesize allGeoFilterIds=_allGeoFilterIds;
@property(retain, nonatomic) NSString *geoFilterId; // @synthesize geoFilterId=_geoFilterId;
@property(retain, nonatomic) NSDate *firstPostDate; // @synthesize firstPostDate=_firstPostDate;
@property(nonatomic) int ephemeralMediaState; // @synthesize ephemeralMediaState=_ephemeralMediaState;
@property(retain, nonatomic) EphemeralMedia *doublePostParent; // @synthesize doublePostParent=_doublePostParent;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *captionText; // @synthesize captionText=_captionText;
@property(retain, nonatomic) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;
- (void)markViewingTimestamp;
- (id)logId;
- (void)reprocessVideo;
- (BOOL)timeToSendHasExpired;
- (CDUnknownBlockType)uploadFailureBlock;
- (CDUnknownBlockType)uploadSuccessBlock;
- (id)uploadParameters;
- (void)setUploading;
- (void)doublePost;
- (void)addTarget:(id)arg1;
- (void)imageProcessingDidSucceedForMedia:(id)arg1;
- (void)uploadMedia;
- (id)username;
- (void)imageProcessingDone;
- (void)mediaUploadDidFailForMedia:(id)arg1;
- (void)mediaUploadDidSucceedForMedia:(id)arg1;
- (int)uploadMediaTypeForMedia:(id)arg1;
- (id)uploadMediaIdForMedia:(id)arg1;
- (BOOL)isImage;
- (BOOL)isVideoWithSound;
- (BOOL)isVideoWithNoSound;
- (BOOL)isVideo;
- (BOOL)encrypt;
- (BOOL)persist;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (id)mediaIdForMedia:(id)arg1;
- (id)endpointParamsForMedia:(id)arg1;
- (id)endpointForMedia:(id)arg1;
- (void)targetSetVideoFilter:(id)arg1;
- (void)targetSetMedia:(id)arg1;
@property(retain, nonatomic) Media *media; // @synthesize media=_media;
- (void)copyDataFromEphemeralMedia:(id)arg1;
- (void)setupThumbnailMedia;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loggingParametersForEvent:(id)arg1;
- (void)setLoggingParameters:(id)arg1 forEvent:(id)arg2;
- (void)logEvent:(id)arg1;
- (void)addEventLoggingParameters:(id)arg1;
- (id)eventLoggingParameters;
- (id)secretShareLoggingParameters;
- (void)addSecretShareLoggingParameters:(id)arg1;
- (id)shareLoggingParameters;
- (void)addShareLoggingParameters:(id)arg1;
- (id)typeParams;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithClientId;
- (id)init;
- (void)videoProcessingDidFailForSnapVideoFilter:(id)arg1 error:(id)arg2;
- (void)videoProcessingDidSucceedForSnapVideoFilter:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

