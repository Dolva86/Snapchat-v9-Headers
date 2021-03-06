//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface GADSearchRequest : NSObject
{
    NSString *_query;
    UIColor *_backgroundColor;
    UIColor *_gradientFrom;
    UIColor *_gradientTo;
    UIColor *_headerColor;
    UIColor *_descriptionTextColor;
    UIColor *_anchorTextColor;
    NSString *_fontFamily;
    unsigned int _headerTextSize;
    UIColor *_borderColor;
    unsigned int _borderType;
    unsigned int _borderThickness;
    NSString *_customChannels;
    unsigned int _callButtonColor;
}

+ (id)alloc;
@property(nonatomic) unsigned int callButtonColor; // @synthesize callButtonColor=_callButtonColor;
@property(copy, nonatomic) NSString *customChannels; // @synthesize customChannels=_customChannels;
@property(nonatomic) unsigned int borderThickness; // @synthesize borderThickness=_borderThickness;
@property(nonatomic) unsigned int borderType; // @synthesize borderType=_borderType;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) unsigned int headerTextSize; // @synthesize headerTextSize=_headerTextSize;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(retain, nonatomic) UIColor *anchorTextColor; // @synthesize anchorTextColor=_anchorTextColor;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property(retain, nonatomic) UIColor *headerColor; // @synthesize headerColor=_headerColor;
@property(retain, nonatomic) UIColor *gradientTo; // @synthesize gradientTo=_gradientTo;
@property(retain, nonatomic) UIColor *gradientFrom; // @synthesize gradientFrom=_gradientFrom;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)setBackgroundGradientFrom:(id)arg1 toColor:(id)arg2;
- (void)setBackgroundSolid:(id)arg1;
- (id)request;
- (id)getCallButtonTypeString:(unsigned int)arg1;
- (id)getBorderTypeString:(unsigned int)arg1;
- (id)hexStringFromColor:(id)arg1;

@end

