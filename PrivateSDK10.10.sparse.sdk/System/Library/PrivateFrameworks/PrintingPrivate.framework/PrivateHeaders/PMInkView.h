/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSImage;

@interface PMInkView : NSView
{
    NSImage *cautionIconImage;
    struct OpaquePMPrinter *_printer;
}

@property struct OpaquePMPrinter *printer; // @synthesize printer=_printer;
- (void)setSuppliesInfo:(id)arg1;
- (id)getWarningToolTip:(id)arg1;
- (id)markerChangeTimeString:(id)arg1;
- (double)addConsumablesDict:(id)arg1 at:(struct CGPoint)arg2 withAttrs:(id)arg3 titleWidth:(double)arg4 warning:(id)arg5;
- (double)addSRGBColor:(id)arg1 at:(struct CGPoint)arg2 withLevel:(float)arg3 low:(float)arg4 warning:(id)arg5;
- (double)addColor:(id)arg1 at:(struct CGPoint)arg2 withLevel:(float)arg3 low:(float)arg4 warning:(id)arg5;
- (void)addLowInkBadgeAt:(struct CGPoint)arg1 withTooltip:(id)arg2;
- (id)addAirPrintSuppliesButtonAt:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (void)airprintButtonSelected:(id)arg1;
- (id)addTextViewForString:(id)arg1 at:(struct CGPoint)arg2 withAttrs:(id)arg3 width:(double)arg4 maxLines:(int)arg5;
- (id)addStaticText:(id)arg1 withFrame:(struct CGRect)arg2 alignment:(unsigned long long)arg3 tooltip:(id)arg4;
- (void)finalize;
- (void)dealloc;

@end

