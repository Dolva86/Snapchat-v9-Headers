//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCTheme;

@interface SCThemeManager : NSObject
{
    SCTheme *_currentTheme;
    NSArray *_themes;
}

+ (id)shared;
@property(retain, nonatomic) NSArray *themes; // @synthesize themes=_themes;
@property(retain, nonatomic) SCTheme *currentTheme; // @synthesize currentTheme=_currentTheme;
- (void).cxx_destruct;
- (id)themeAtIndex:(int)arg1;
- (id)themeNamed:(id)arg1;
- (id)init;

@end
