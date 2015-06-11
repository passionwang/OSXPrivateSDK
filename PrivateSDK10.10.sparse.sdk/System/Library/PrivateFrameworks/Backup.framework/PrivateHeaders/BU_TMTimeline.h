/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Backup/BU_TMControl.h>

@class BUStarfieldTimelineLayer;

// Not exported
@interface BU_TMTimeline : BU_TMControl
{
    BUStarfieldTimelineLayer *fSuperLayer;
    struct TTimelineControl *fTimeline;
}

+ (id)timelineControlWithFrame:(struct CGRect)arg1 inSuperLayer:(id)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)mouseDraggedToPoint:(struct CGPoint)arg1 withModifiers:(unsigned int)arg2;
- (void)mouseMovedToPoint:(struct CGPoint)arg1 withModifiers:(unsigned int)arg2;
- (_Bool)mouseDownAtPoint:(struct CGPoint)arg1 withModifiers:(unsigned int)arg2;
- (_Bool)mouseUpAtPoint:(struct CGPoint)arg1 withModifiers:(unsigned int)arg2;
- (void)scrollByX:(double)arg1 byY:(double)arg2 withModifiers:(unsigned int)arg3;
- (struct TTimelineControl *)timeline;
- (void)valueDidChange:(long long)arg1;
- (_Bool)valueWillChange:(long long)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)dealloc;
- (id)init;
- (id)superLayer;
- (void)setSuperLayer:(id)arg1;

@end

