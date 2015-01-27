//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface SCLoadingFeedTableViewCell : UITableViewCell
{
    BOOL _boxHidden;
    UILabel *_label;
    unsigned int _labelConstraintsType;
    UIImageView *_rotatingSnapBox;
}

+ (id)textColor;
@property(nonatomic) BOOL boxHidden; // @synthesize boxHidden=_boxHidden;
@property(retain, nonatomic) UIImageView *rotatingSnapBox; // @synthesize rotatingSnapBox=_rotatingSnapBox;
@property(nonatomic) unsigned int labelConstraintsType; // @synthesize labelConstraintsType=_labelConstraintsType;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setRotatingSnapBoxHidden:(BOOL)arg1;
- (void)updateLabelConstraintsWithType:(unsigned int)arg1;
- (void)updateWithChats:(id)arg1;
- (void)initRotatingSnapBox;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

