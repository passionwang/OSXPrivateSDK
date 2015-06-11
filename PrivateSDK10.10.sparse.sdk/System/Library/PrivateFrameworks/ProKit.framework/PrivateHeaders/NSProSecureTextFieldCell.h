/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSSecureTextFieldCell.h"

@interface NSProSecureTextFieldCell : NSSecureTextFieldCell
{
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (double)_cellHeightForControlSize:(unsigned long long)arg1;
- (id)setUpProFieldEditorAttributes:(id)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)initTextCell:(id)arg1;
- (id)_textAttributes;
- (id)setUpFieldEditorAttributes:(id)arg1;
- (void)proTextColor:(id *)arg1 backgroundColor:(id *)arg2;
- (void)_setNeedsHighlightedTextHint:(BOOL)arg1;
- (long long)_typesetterBehavior;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawFocusRingWithFrame:(struct CGRect)arg1;
- (struct CGRect)_focusRingBoundsWithFrame:(struct CGRect)arg1;
- (void)_drawProThemeBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2 showFocus:(BOOL)arg3;
- (id)_baseFacet;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (BOOL)isValidControlSize:(unsigned long long)arg1;
- (BOOL)_supportsClassicLargeMetrics;
- (long long)_currentThemeStateInView:(id)arg1;
- (BOOL)isOpaque;
- (BOOL)_needsHandDrawnFocusRing;
- (BOOL)drawsBackground;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;

@end

