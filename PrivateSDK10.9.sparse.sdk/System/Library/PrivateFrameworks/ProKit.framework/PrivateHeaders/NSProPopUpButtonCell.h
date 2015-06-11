//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButtonCell.h"

@interface NSProPopUpButtonCell : NSPopUpButtonCell
{
    long long _nibVersion;
    void *_reserved2;
    void *_reserved3;
}

+ (Class)_proTextCellClass;
+ (void)initialize;
- (void)setControlSize:(unsigned long long)arg1;
- (BOOL)isValidControlSize:(unsigned long long)arg1;
- (void)setThemeVariant:(long long)arg1;
- (long long)_menuThemeVariant;
- (void)setBezelStyle:(unsigned long long)arg1;
- (double)imageWidth;
- (struct CGPoint)baselineOriginForBounds:(struct CGRect)arg1;
- (struct CGRect)menuRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (double)_pullDownTitleWidth;
- (double)_extraWidthForCellHeight:(double)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)drawTitleWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_textColor;
- (id)_highlightTextColor;
- (id)_highlightColor;
- (id)_sharedTextCellHUD;
- (id)_sharedTextCell;
- (long long)interiorBackgroundStyle;
- (void)drawBorderAndBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (BOOL)_supportsClassicLargeMetrics;
- (BOOL)_proDrawsArrowOnly;
- (void)drawImageWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawIconRef:(struct OpaqueIconRef *)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)setMenu:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1 pullsDown:(BOOL)arg2;
- (void)_initVariantFromBezelStyle;
- (id)_assetMetrics;
- (id)_baseFacet;
- (BOOL)_useAssetMetrics;
- (void)_setNibVersion:(long long)arg1;
- (long long)_nibVersion;
- (int)elementID;
- (long long)themeStateInView:(id)arg1;
- (BOOL)_needRedrawOnWindowChangedKeyState;

@end

