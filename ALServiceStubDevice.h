//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALServiceStub.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSNotificationCenter;

@interface ALServiceStubDevice : NSObject <ALServiceStub>
{
    NSMutableDictionary *_responders;
    void *_serviceOpaque;
    int _reqIdGenerator;
    NSDictionary *_dispatchers;
    NSMutableArray *_listeners;
    NSDictionary *_eventClasses;
    NSDictionary *_eventHandlers;
    BOOL _logInteractions;
    NSNotificationCenter *_notificationCenter;
    NSMutableDictionary *activeConnections;
}

@property(retain, nonatomic) NSMutableDictionary *activeConnections; // @synthesize activeConnections;
- (void)injectFrame:(id)arg1;
- (void)handleConnectionLostEvent:(id)arg1;
- (void)handleMediaStreamEvent:(id)arg1;
- (void)handleUserEvent:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)draw:(id)arg1;
- (void)stopRender:(id)arg1;
- (void)renderSink:(id)arg1 withResponder:(id)arg2;
- (void)invokeWithResponder:(id)arg1 andRequest:(id)arg2;
- (void)dealloc;
- (void)removeServiceListener:(id)arg1;
- (void)addServiceListener:(id)arg1;
- (void)disposeInternal;
- (void)dispose;
- (id)initWithOptions:(id)arg1;

@end

