/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSProxy.h"

@class NSFont;

// Not exported
@interface NSProSegmentedScrubberFontProxy : NSProxy
{
    double ascenderDelta;
    NSFont *font;
}

+ (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (struct CGFont *)_backingCGSFont;
- (double)_ascenderDeltaForBehavior:(long long)arg1;
- (void)setAscenderDelta:(double)arg1;
- (void)dealloc;
- (id)initWithFont:(id)arg1;

@end

