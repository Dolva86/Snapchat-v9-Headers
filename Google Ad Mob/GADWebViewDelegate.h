//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADWebViewDelegate.h"

@class GADOpener, GADOpenerGMSGHandler, NSMutableArray;

@interface GADWebViewDelegate : NSObject <GADWebViewDelegate>
{
    BOOL _hasLoadedAtLeastOnce;
    BOOL _fileAccessAllowed;
    GADOpener *_opener;
    NSMutableArray *_gmsgHandlers;
    GADOpenerGMSGHandler *_openerGMSGHandler;
}

@property(retain, nonatomic) GADOpenerGMSGHandler *openerGMSGHandler; // @synthesize openerGMSGHandler=_openerGMSGHandler;
@property(readonly, nonatomic) NSMutableArray *gmsgHandlers; // @synthesize gmsgHandlers=_gmsgHandlers;
@property(nonatomic, getter=isFileAccessAllowed) BOOL fileAccessAllowed; // @synthesize fileAccessAllowed=_fileAccessAllowed;
@property(nonatomic) BOOL hasLoadedAtLeastOnce; // @synthesize hasLoadedAtLeastOnce=_hasLoadedAtLeastOnce;
@property(retain, nonatomic) GADOpener *opener; // @synthesize opener=_opener;
- (void).cxx_destruct;
- (void)loadedFirstPage:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)handleGMSGRequest:(id)arg1 webView:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)viewControllerForPresentingFromWebView:(id)arg1;
- (void)addGMSGHandler:(id)arg1;

@end

