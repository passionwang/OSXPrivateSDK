/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class MRMarimbaLayer, MRTouchSet, NSSet, NSValue;

@interface MRMarimbaLayerView : NSView
{
    MRTouchSet *_touchSet;
    NSValue *_singleTapPositionAsValue;
    NSSet *_pendingBeginTouches;
    MRMarimbaLayer *_marimbaLayer;
}

@property(readonly) MRMarimbaLayer *marimbaLayer; // @synthesize marimbaLayer=_marimbaLayer;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)cancelMarimbaWasSingleTapped;
- (void)marimbaWasSingleTapped:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)viewDidMoveToWindow;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

