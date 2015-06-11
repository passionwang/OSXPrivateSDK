/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/SidebarTableCellView.h>

@class NSArray, NSImageView, NSString, NSTextField;

// Not exported
@interface ReadingListTableCellView : SidebarTableCellView
{
    NSTextField *_titleTextField;
    NSTextField *_previewTextField;
    NSTextField *_domainTextField;
    NSImageView *_thumbnailImageView;
    NSArray *_extraConstraintsWhenShowingThumbnail;
    NSArray *_extraConstraintsWhenNotShowingThumbnail;
    NSArray *_constraints;
}

+ (double)fixedHeightOfRow;
- (void).cxx_destruct;
- (id)_labelTextFieldOfClass:(Class)arg1;
- (id)_readingListItem;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (void)_updateCloseButtonImages;
@property(readonly, nonatomic) NSString *itemPreviewTextString;
@property(readonly, nonatomic) NSString *itemDomainString;
@property(readonly, nonatomic) NSString *itemTitleString;
- (void)updateConstraints;
- (void)setObjectValue:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

