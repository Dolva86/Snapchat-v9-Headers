//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADGMSGHandler.h"

@interface GADSDKCoreGMSGHandler : GADGMSGHandler
{
    id <GADSDKCoreGMSGHandlerDelegate> _delegate;
}

+ (id)actionSelectorDictionary;
@property(nonatomic) __weak id <GADSDKCoreGMSGHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveLoadAdAction:(id)arg1;
- (void)didReceiveloadSDKConstantsAction:(id)arg1;
- (void)didReceiveInvalidAdRequestAction:(id)arg1;
- (void)didReceiveloadAdURLAction:(id)arg1;
- (id)init;

@end

