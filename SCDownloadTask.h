//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, SCDownloadRequest;

@interface SCDownloadTask : NSObject
{
    SCDownloadRequest *_request;
    NSObject<OS_dispatch_queue> *_successCallbackQueue;
    NSObject<OS_dispatch_queue> *_failureCallbackQueue;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _managerSuccessBlock;
    CDUnknownBlockType _managerFailureBlock;
}

+ (id)createTask:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5 managerSuccessBlock:(CDUnknownBlockType)arg6 managerFailureBlock:(CDUnknownBlockType)arg7;
@property(copy, nonatomic) CDUnknownBlockType managerFailureBlock; // @synthesize managerFailureBlock=_managerFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType managerSuccessBlock; // @synthesize managerSuccessBlock=_managerSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) NSObject<OS_dispatch_queue> *failureCallbackQueue; // @synthesize failureCallbackQueue=_failureCallbackQueue;
@property(nonatomic) NSObject<OS_dispatch_queue> *successCallbackQueue; // @synthesize successCallbackQueue=_successCallbackQueue;
@property(retain, nonatomic) SCDownloadRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5 managerSuccessBlock:(CDUnknownBlockType)arg6 managerFailureBlock:(CDUnknownBlockType)arg7;
- (void)run;

@end

