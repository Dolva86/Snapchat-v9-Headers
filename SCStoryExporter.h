//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface SCStoryExporter : NSObject
{
    BOOL _processing;
    BOOL _paused;
    BOOL _exportNextStoryOnResume;
    id <SCStoryExporterDelegate> _delegate;
    NSArray *_stories;
    NSMutableArray *_urls;
    int _nextIndexToProcessOnResume;
}

@property(nonatomic) int nextIndexToProcessOnResume; // @synthesize nextIndexToProcessOnResume=_nextIndexToProcessOnResume;
@property(nonatomic) BOOL exportNextStoryOnResume; // @synthesize exportNextStoryOnResume=_exportNextStoryOnResume;
@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) BOOL processing; // @synthesize processing=_processing;
@property(retain, nonatomic) NSMutableArray *urls; // @synthesize urls=_urls;
@property(retain, nonatomic) NSArray *stories; // @synthesize stories=_stories;
@property(nonatomic) __weak id <SCStoryExporterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)compositeVideos;
- (void)exportStoryAtIndex:(int)arg1;
- (void)exportStories:(id)arg1;
- (id)generateOutputMovieURL;
- (void)resume;
- (void)pause;
- (BOOL)isProcessing;

@end
