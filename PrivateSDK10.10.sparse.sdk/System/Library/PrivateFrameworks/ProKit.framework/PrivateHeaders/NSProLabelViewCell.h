/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSLabelViewCell.h"

@class NSImage;

// Not exported
@interface NSProLabelViewCell : NSLabelViewCell
{
    NSImage *_proSelectedImageBackground;
    NSImage *_proHoveredImageBackground;
}

- (void)dealloc;
- (void)_drawPart:(long long)arg1 withFrame:(struct CGRect)arg2;
- (id)_labelAttributes;
- (void)_ensureHoveredImaged;
- (void)_ensureSelectedImage;
- (id)_imageForLabelCellPart:(int)arg1 withDim1:(BOOL)arg2 withTint:(long long)arg3;

@end

