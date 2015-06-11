/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProKit/NSProSliderCell.h>

#import "NSAnimationDelegate-Protocol.h"

@class NSAnimation, NSGradient, NSString;

@interface NSProColorSliderCell : NSProSliderCell <NSAnimationDelegate>
{
    NSGradient *_gradient;
    NSAnimation *_fadeAnimation;
    struct {
        unsigned int showFullGradient:1;
        unsigned int reserved:31;
    } _pcscFlags;
    void *_pcscReserved1;
    void *_pcscReserved2;
    void *_pcscReserved3;
}

+ (void)initialize;
+ (id)_knobFacetForCell:(id)arg1;
- (BOOL)_supportsClassicLargeMetrics;
- (void)animationDidEnd:(id)arg1;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
- (void)_startAnimation;
- (void)drawKnob:(struct CGRect)arg1;
- (void)_drawProKitKnob:(struct CGRect)arg1;
- (void)_drawCustomKnob:(struct CGRect)arg1;
- (id)_maskFromImage:(id)arg1;
- (BOOL)_useCustomDrawing;
- (BOOL)_shouldDrawWarmKnob;
- (BOOL)_shouldDrawHotKnob;
- (BOOL)_shouldAnimateHotKnob;
- (void)_drawTrackInRect:(struct CGRect)arg1;
- (void)setShowsFullGradient:(BOOL)arg1;
- (BOOL)showsFullGradient;
- (void)setGradient:(id)arg1;
- (id)gradient;
- (void)setEndColor:(id)arg1;
- (id)endColor;
- (void)setStartColor:(id)arg1;
- (id)startColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)init;
- (long long)_geometricKnobDirection;
- (id)_baseFacet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

