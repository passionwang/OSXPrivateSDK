/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSScroller.h"

@class NSTrackingArea;

@interface NSProScroller : NSScroller
{
    NSTrackingArea *_knobTrackingArea;
    struct _PSFlags _psFlags;
    void *_proReserved3;
}

+ (double)_smallScrollerWidth;
+ (double)scrollerWidthForControlSize:(unsigned long long)arg1;
+ (void)drawKnobSlotInRect:(struct CGRect)arg1 scroller:(id)arg2 view:(id)arg3;
+ (BOOL)isCompatibleWithOverlayScrollers;
+ (id)_findProScrollerToAutoLiveScrollInWindow:(id)arg1;
- (void)trackPagingArea:(id)arg1;
- (void)trackScrollButtons:(id)arg1;
- (void)trackKnob:(id)arg1;
- (void)updateTrackingAreas;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)isHorizontal;
- (void)_windowChangedKeyState;
- (void)setControlSize:(unsigned long long)arg1;
- (unsigned long long)controlSize;
- (BOOL)isOpaque;
- (void)setControlTint:(unsigned long long)arg1;
- (void)setArrowsPosition:(unsigned long long)arg1;
- (void)setThemeVariant:(long long)arg1;
- (long long)themeVariant;
- (long long)tintIndex;
- (void)setTintIndex:(long long)arg1;
- (struct CGRect)_drawingRectForPart:(unsigned long long)arg1;
- (struct CGRect)rectForPart:(unsigned long long)arg1;
- (unsigned long long)testPart:(struct CGPoint)arg1;
- (double)width;
- (void)_setKnobLit:(BOOL)arg1;
- (BOOL)_isKnobLit;
- (id)cornerImageWithDirection:(BOOL)arg1;
- (id)_cornerFacet;
- (void)drawKnob;
- (id)_thumbFacet;
- (void)drawArrow:(unsigned long long)arg1 highlightPart:(unsigned long long)arg2;
- (id)_arrowFacetForArrowPosition:(unsigned long long)arg1 configuration:(int)arg2;
- (void)drawKnobSlotInRect:(struct CGRect)arg1 highlight:(BOOL)arg2;
- (id)_slotFacet;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (BOOL)_shouldDrawTrackEndcaps;
- (BOOL)_isLionOverlayScroller;
- (BOOL)_useTigerMetrics;
- (void)mouseDown:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_proAutomateLiveScroll;
- (long long)themeState;
- (long long)themeDirection;
- (long long)themeSize;

@end

