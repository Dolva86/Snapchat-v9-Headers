//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_KFSpecItem.h"

@class UISwitch;

@interface _KFSwitchSpecItem : _KFSpecItem
{
    UISwitch *_uiSwitch;
}

+ (id)propertiesForJSONRepresentation;
@property(retain) UISwitch *uiSwitch; // @synthesize uiSwitch=_uiSwitch;
- (void).cxx_destruct;
- (void)setSwitchValue:(id)arg1;
- (id)switchValue;
- (void)takeSwitchValue:(id)arg1;
- (id)tuningView;
- (id)initWithJSONRepresentation:(id)arg1;

@end

