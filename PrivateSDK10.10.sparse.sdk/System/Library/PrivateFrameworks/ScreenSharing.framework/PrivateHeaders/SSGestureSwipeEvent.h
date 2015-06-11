/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenSharing/SSGestureEvent.h>

// Not exported
@interface SSGestureSwipeEvent : SSGestureEvent
{
    void *mReservedForInstanceVariablesGestureSwipe;
    float _progress;
    float _positionX;
    float _positionY;
    float _velocityX;
    float _velocityY;
    float _velocityZ;
    long long _motion;
    long long _swipeMask;
    long long _flags;
    long long _flavor;
}

+ (id)gestureSwipeEventWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2 motion:(long long)arg3 swipeMask:(long long)arg4 progress:(float)arg5 positionX:(float)arg6 positionY:(float)arg7 velocityX:(float)arg8 velocityY:(float)arg9 velocityZ:(float)arg10 flags:(long long)arg11 flavor:(long long)arg12;
@property long long flavor; // @synthesize flavor=_flavor;
@property long long flags; // @synthesize flags=_flags;
@property float velocityZ; // @synthesize velocityZ=_velocityZ;
@property float velocityY; // @synthesize velocityY=_velocityY;
@property float velocityX; // @synthesize velocityX=_velocityX;
@property float positionY; // @synthesize positionY=_positionY;
@property float positionX; // @synthesize positionX=_positionX;
@property float progress; // @synthesize progress=_progress;
@property long long swipeMask; // @synthesize swipeMask=_swipeMask;
@property long long motion; // @synthesize motion=_motion;
- (id)initWithCoordinates:(struct SSPoint)arg1 subType:(long long)arg2 motion:(long long)arg3 swipeMask:(long long)arg4 progress:(float)arg5 positionX:(float)arg6 positionY:(float)arg7 velocityX:(float)arg8 velocityY:(float)arg9 velocityZ:(float)arg10 flags:(long long)arg11 flavor:(long long)arg12;

@end

