//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCAPI : NSObject
{
}

+ (void)requestFailedWithPath:(id)arg1 startTime:(double)arg2 reachability:(int)arg3 operation:(id)arg4 requestSize:(int)arg5 responseSize:(int)arg6 error:(id)arg7 response:(id)arg8 failureBlock:(CDUnknownBlockType)arg9;
+ (void)requestSucceededWithPath:(id)arg1 startTime:(double)arg2 reachability:(int)arg3 operation:(id)arg4 requestSize:(int)arg5 responseSize:(int)arg6 response:(id)arg7 successBlock:(CDUnknownBlockType)arg8;
+ (void)requestSucceededWithPath:(id)arg1 startTime:(double)arg2 reachability:(int)arg3 operation:(id)arg4 requestSize:(int)arg5 responseSize:(int)arg6 dictionary:(id)arg7 response:(id)arg8 successBlock:(CDUnknownBlockType)arg9;
+ (id)stringForMethod:(int)arg1;
+ (void)clearRequests;
+ (void)requests:(id)arg1 withEndpoint:(id)arg2 shouldDependOn:(id)arg3 withEndpoint:(id)arg4;
+ (void)makeRequestWithEndpoint:(id)arg1 baseURL:(id)arg2 parameters:(id)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)makePostRequestWithURL:(id)arg1 parameters:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
+ (void)makeDeleteRequestWithEndpoint:(id)arg1 client:(id)arg2 parameters:(id)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)makeGetRequestWithEndpoint:(id)arg1 client:(id)arg2 parameters:(id)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)makePostRequestWithEndpoint:(id)arg1 client:(id)arg2 parameters:(id)arg3 multipleData:(id)arg4 successQueue:(id)arg5 failureQueue:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
+ (void)makePostRequestWithEndpoint:(id)arg1 client:(id)arg2 parameters:(id)arg3 data:(id)arg4 successQueue:(id)arg5 failureQueue:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
+ (void)makePostRequestWithEndpoint:(id)arg1 client:(id)arg2 parameters:(id)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)makeRequestWithoutParsingWithURL:(id)arg1 method:(int)arg2 authenticated:(BOOL)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)makeGetRequestWithEndpointWithoutParsing:(id)arg1 parameters:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
+ (void)makeRequestWithoutParsingWithURL:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (void)makeRequestWithEndpointWithoutParsing:(id)arg1 parameters:(id)arg2 method:(int)arg3 authenticated:(BOOL)arg4 successQueue:(id)arg5 failureQueue:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
+ (void)makeRequestWithEndpointWithoutParsing:(id)arg1 parameters:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
+ (void)makeGetRequestWithEndpoint:(id)arg1 parameters:(id)arg2 authenticated:(BOOL)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)makeGetRequestWithEndpoint:(id)arg1 parameters:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
+ (void)makeRequestWithEndpoint:(id)arg1 parameters:(id)arg2 multipleData:(id)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)makeRequestWithEndpoint:(id)arg1 parameters:(id)arg2 data:(id)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)makeRequestWithEndpoint:(id)arg1 parameters:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
+ (id)requestErrorInfoWithRequestDictionary:(id)arg1;
+ (id)requestErrorInfoWithMessage:(id)arg1 status:(int)arg2;
+ (id)requestSomethingWentWrongErrorDictionary;
+ (id)requestCouldNotConnectErrorDictionary;
+ (id)errorMessageForResponseDictionary:(id)arg1;
+ (BOOL)isErrorResponse:(id)arg1;

@end

