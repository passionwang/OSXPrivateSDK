/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreSpectrum/SPCObject.h>

@class SPCAffineTransform;

@interface SPCPath : SPCObject
{
    SPCAffineTransform *_transform;
    struct CGRect _referenceFrame;
}

@property(retain, nonatomic) SPCAffineTransform *transform; // @synthesize transform=_transform;
@property(nonatomic) struct CGRect referenceFrame; // @synthesize referenceFrame=_referenceFrame;
- (void)didChangeMetrics;
- (void)scaleAboutCenter:(double)arg1;
- (void)rotateAboutCenterByAngle:(double)arg1;
- (void)transformUsingAffineTransform:(id)arg1;
- (struct CGPath *)computedPathInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic, getter=isClosed) BOOL closed;
- (id)logicalPathToEnvironment;
- (id)recursiveDescription;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)commonInitialization;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;

@end

