/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSBox.h"

@class NSColor;

@interface NSProBox : NSBox
{
    NSColor *_backgroundColor;
    struct _pbflags {
        unsigned int boxType:4;
        unsigned int inspectorRow:1;
        unsigned int _proReserved:27;
    } _pbFlags;
    void *_proReserved1;
    void *_proReserved2;
}

+ (struct _NSProBoxMetrics)metricsForType:(int)arg1;
+ (void)initialize;
- (BOOL)isVertical;
- (BOOL)isTitled;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (double)titleMargin;
- (id)defaultTitleFont;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setTitleCell:(id)arg1;
- (void)_setInspectorRow:(BOOL)arg1;
- (BOOL)_isInspectorRow;
- (void)setBoxType:(int)arg1;
- (int)boxType;
- (void)mouseDown:(id)arg1;
- (BOOL)isOpaque;
- (long long)themeState;
- (void)_drawInspectorRow:(struct CGRect)arg1;
- (void)drawCustomBox:(struct CGRect)arg1;
- (void)drawSeparator:(struct CGRect)arg1;
- (void)drawInsetBox:(struct CGRect)arg1;
- (void)drawRaisedBox:(struct CGRect)arg1;
- (void)drawMatteWellBox:(struct CGRect)arg1;
- (void)drawWellBox:(struct CGRect)arg1;
- (void)drawMetalBox:(struct CGRect)arg1;
- (void)drawSecondaryBox:(struct CGRect)arg1;
- (void)drawPrimaryBox:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_setUpTitleRectMargin;
- (void)_drawBoxWithPartID:(int)arg1;
- (void)_drawBox;
- (id)_baseFacet;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (id)_tile:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameFromContentFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

