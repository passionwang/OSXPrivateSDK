/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenSharing/SSGestureEvent.h>

// Not exported
@interface SSGestureScrollEvent : SSGestureEvent
{
    double mDeltaX;
    double mDeltaY;
    double mDeltaZ;
    BOOL mIsNaturalScrolling;
    long long mGesturePhase;
    long long mGestureMask;
}

+ (id)gestureScrollEventWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2 deltaX:(double)arg3 deltaY:(double)arg4 deltaZ:(double)arg5 naturalScrolling:(BOOL)arg6 gesturePhase:(long long)arg7 gestureMask:(long long)arg8;
@property(readonly) long long gestureMask; // @synthesize gestureMask=mGestureMask;
@property(readonly) long long gesturePhase; // @synthesize gesturePhase=mGesturePhase;
@property(readonly) BOOL isNaturalScrolling; // @synthesize isNaturalScrolling=mIsNaturalScrolling;
@property(readonly) double deltaZ; // @synthesize deltaZ=mDeltaZ;
@property(readonly) double deltaY; // @synthesize deltaY=mDeltaY;
@property(readonly) double deltaX; // @synthesize deltaX=mDeltaX;
- (id)initWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2 deltaX:(double)arg3 deltaY:(double)arg4 deltaZ:(double)arg5 naturalScrolling:(BOOL)arg6 gesturePhase:(long long)arg7 gestureMask:(long long)arg8;

@end

