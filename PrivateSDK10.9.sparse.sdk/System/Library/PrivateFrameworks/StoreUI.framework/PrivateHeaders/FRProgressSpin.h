//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage, NSLock;

@interface FRProgressSpin : NSView
{
    BOOL animating;
    BOOL delayedStartup;
    unsigned int lastImageIndex;
    NSLock *_cachedBackgroundLock;
    NSImage *_cachedBackgroundImage;
    BOOL _drawSpinnerInLayer;
}

@property BOOL drawSpinnerInLayer; // @synthesize drawSpinnerInLayer=_drawSpinnerInLayer;
- (void).cxx_destruct;
- (void)invalidateBackgroundCacheDueToNoficiation:(id)arg1;
- (void)heartBeat:(void *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)isAnimating;
- (void)stopAnimation:(id)arg1;
- (void)startAnimation:(id)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)_setupSurfaceAndStartSpinning;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityValueAttribute;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;

@end

