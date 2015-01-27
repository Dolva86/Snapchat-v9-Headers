//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCVideoCaptureChannel.h"

@class AVAssetWriter, AVAssetWriterInput, FBKVOController, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface SCVideoRecordCaptureChannel : NSObject <SCVideoCaptureChannel>
{
    struct opaqueCMBufferQueue *_videoBufferQueue;
    struct opaqueCMBufferQueue *_audioBufferQueue;
    BOOL _hasWritten;
    NSURL *_outputURL;
    id <SCVideoRecordCaptureChannelDelegate> _delegate;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInput *_audioWriterInput;
    NSObject<OS_dispatch_queue> *_outputQueue;
    NSString *_sessionPreset;
    FBKVOController *_observeController;
    unsigned int _status;
    CDStruct_1b6d18a9 _endSessionTime;
}

@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) FBKVOController *observeController; // @synthesize observeController=_observeController;
@property(copy, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputQueue; // @synthesize outputQueue=_outputQueue;
@property(nonatomic) CDStruct_1b6d18a9 endSessionTime; // @synthesize endSessionTime=_endSessionTime;
@property(nonatomic) BOOL hasWritten; // @synthesize hasWritten=_hasWritten;
@property(retain, nonatomic) AVAssetWriterInput *audioWriterInput; // @synthesize audioWriterInput=_audioWriterInput;
@property(retain, nonatomic) AVAssetWriterInput *videoWriterInput; // @synthesize videoWriterInput=_videoWriterInput;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(nonatomic) __weak id <SCVideoRecordCaptureChannelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
- (void).cxx_destruct;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (BOOL)desiresAnAudioStream;
- (void)finishRecordingAsynchronously;
- (void)drainOneAudioVideoBufferQueueWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)assetWriterStatusChanged:(id)arg1;
- (void)beginRecordingAsynchronouslyToURL:(id)arg1 withOrientation:(int)arg2;
- (BOOL)addInputWithError:(id)arg1;
- (struct CGSize)defaultSizeForSessionPreset:(id)arg1;
- (BOOL)deviceMeetsMinimumRequirementsForHighQualityVideo;
- (void)dealloc;
- (id)initWithPreset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

