//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCFilterViewFactory : NSObject
{
}

+ (id)overlayFilterViewForFilter:(id)arg1 config:(id)arg2;
+ (id)videoFilterViewWithFrame:(struct CGRect)arg1 config:(id)arg2 filter:(id)arg3;
+ (id)imageFilterViewForImage:(id)arg1 filter:(id)arg2 config:(id)arg3;
+ (int)filterTypeForName:(id)arg1 config:(id)arg2;

@end
