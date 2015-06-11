/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProKit/NSProPathComponentCell.h>

#import "NSProPaneCapProtocol-Protocol.h"

@interface NSProPaneCapPathComponentCell : NSProPathComponentCell <NSProPaneCapProtocol>
{
    CDStruct_ae8b4f33 _paneCapFlags;
    void *_paneCapReserved1;
    void *_paneCapReserved2;
    void *_paneCapReserved3;
}

+ (id)_dividerArrowFacet;
+ (double)_textRightMarginOffsetForItemIndex:(long long)arg1 controlSize:(unsigned long long)arg2;
+ (id)_navBarFacet;
+ (void)initialize;
- (long long)backgroundStyle;
- (long long)interiorBackgroundStyle;
- (void)_proDrawTitle:(id)arg1 inRect:(struct CGRect)arg2 ofControlView:(id)arg3;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (double)_fullWidth;
- (double)_titleYOffset;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initTextCell:(id)arg1;
- (void)proTextColor:(id *)arg1 backgroundColor:(id *)arg2;
- (id)_proLabelFont;
- (long long)proInteriorBackgroundStyleFromBackgroundStyle:(long long)arg1;
- (void)_commonPaneCapTextCellInit;
- (void)_paneCapSetFont;
- (void)_decodePaneCapWithCoder:(id)arg1;
- (void)_encodePaneCapWithCoder:(id)arg1;
@property int paneCapTint; // @dynamic paneCapTint;
@property int paneCapStyle; // @dynamic paneCapStyle;

@end

