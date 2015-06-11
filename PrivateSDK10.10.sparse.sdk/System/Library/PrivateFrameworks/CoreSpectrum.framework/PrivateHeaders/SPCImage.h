/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreSpectrum/SPCObject.h>

@class NSImage;

@interface SPCImage : SPCObject
{
    struct CGImage *_cachedImageRef;
    id _cachedImageObject;
}

+ (id)checkerboardImageWithTileWidth:(double)arg1 tileColorValue1:(double)arg2 tileColorValue1:(double)arg3 boardSize:(struct CGSize)arg4;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
@property(retain, nonatomic) id cachedImageObject; // @synthesize cachedImageObject=_cachedImageObject;
@property(nonatomic) struct CGImage *cachedImageRef; // @synthesize cachedImageRef=_cachedImageRef;
- (struct CGRect)rectByProportionatelyScalingRect:(struct CGRect)arg1 toFitInsideRect:(struct CGRect)arg2;
- (id)imageByCompositingContentOverImage:(id)arg1;
@property(readonly) struct CGSize sizeInPixels;
@property(readonly, nonatomic) id coreAnimationImage;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (void)drawInCoreGraphicsContext:(struct CGContext *)arg1 targetRect:(struct CGRect)arg2 scaling:(unsigned long long)arg3;
- (struct CGRect)imageRectForTargetRect:(struct CGRect)arg1 scaling:(unsigned long long)arg2;
@property(readonly, nonatomic) NSImage *NSImage;

@end

