/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSScrollView.h"

@class NSTimer, NSTrackingArea;

@interface SSPanningScrollView : NSScrollView
{
    NSTrackingArea *mTrackingArea;
    long long mPanningMode;
    NSTimer *mPanningTimer;
    BOOL _leftPanActive;
    BOOL _rightPanActive;
    BOOL _topPanActive;
    BOOL _bottomPanActive;
    struct CGRect leftRect;
    struct CGRect rightRect;
    struct CGRect topRect;
    struct CGRect bottomRect;
    BOOL mDisablePanningEvents;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
@property BOOL disablePanningEvents; // @synthesize disablePanningEvents=mDisablePanningEvents;
- (void)setRightTracking:(BOOL)arg1;
- (void)setLeftTracking:(BOOL)arg1;
- (void)setBottomTracking:(BOOL)arg1;
- (void)setTopTracking:(BOOL)arg1;
- (void)updatePanTrackingRects;
- (void)panForEvent:(id)arg1;
- (void)panView;
- (void)startPanning;
- (void)stopPanning;
- (void)edgePanForMouseEvent:(id)arg1;
- (void)scrollForMouseEvent:(id)arg1 animate:(BOOL)arg2;
- (void)scrollToCursor:(struct CGPoint)arg1 animate:(BOOL)arg2;
- (void)setupTrackingArea;
- (void)updateTrackingAreas;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)scrollWheel:(id)arg1;
@property long long panningMode;
- (void)dealloc;
- (void)commonInitialization;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

