/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MREffect.h>

@class MRImage, MRTextRenderer, NSArray, NSMutableArray, NSMutableDictionary;

@interface MREffectScrapbook : MREffect
{
    NSMutableDictionary *mFrameProviders;
    NSMutableDictionary *mSprites;
    BOOL mIsLoaded;
    long long mTitleAspectRatio;
    NSArray *mLayouts;
    MRTextRenderer *mTextRenderer0;
    MRImage *mTextImage0;
    NSMutableArray *mRectsToSubtract;
    BOOL mIsMovieOnly;
    struct CGSize mTextSize;
    float mLocalMatrix[16];
}

+ (void)initialize;
- (void)getLazyDuration:(double *)arg1 lazyFactor:(double *)arg2 animationDuration:(double *)arg3 fromInterestingTime:(double)arg4;
- (double)interestingTimeForElement:(id)arg1;
- (double)interestingTimeForTime:(double)arg1;
- (BOOL)hasMoreSlidesFromTime:(double)arg1 backwards:(BOOL)arg2 startTime:(double *)arg3 duration:(double *)arg4;
- (void)_drawBreakFrameInRect:(struct CGRect)arg1 frameWidth:(double)arg2 time:(double)arg3 inContext:(id)arg4 withArguments:(id)arg5;
- (void)_drawPortraitPanoBackgroundInRect:(struct CGRect)arg1 flippedRect:(struct CGRect)arg2 paperType:(id)arg3 subtract:(id)arg4 inTime:(double)arg5 inContext:(id)arg6 withArguments:(id)arg7;
- (void)_drawLandscapePanoBackgroundInRect:(struct CGRect)arg1 paperType:(id)arg2 subtract:(id)arg3 inTime:(double)arg4 inContext:(id)arg5 withArguments:(id)arg6;
- (void)_drawBreakFrame:(id)arg1 index:(long long)arg2 rect:(struct CGRect)arg3 rotation:(double)arg4 forcedAspectRatio:(double)arg5 layout:(id)arg6 offset:(struct CGSize)arg7 time:(double)arg8 inContext:(id)arg9 withArguments:(id)arg10;
- (void)_drawBreakTwoPartFrame:(id)arg1 index:(long long)arg2 rect:(struct CGRect)arg3 rotation:(double)arg4 forcedAspectRatio:(double)arg5 time:(double)arg6 inContext:(id)arg7 withArguments:(id)arg8;
- (void)_drawBlendedFrame:(id)arg1 info:(id)arg2 index:(long long)arg3 rect:(struct CGRect)arg4 zIndex:(long long)arg5 zRotation:(double)arg6 subtract:(id)arg7 time:(double)arg8 inContext:(id)arg9 withArguments:(id)arg10;
- (void)_drawFrame:(id)arg1 info:(id)arg2 index:(long long)arg3 rect:(struct CGRect)arg4 zIndex:(long long)arg5 zRotation:(double)arg6 subtract:(id)arg7 time:(double)arg8 inContext:(id)arg9 withArguments:(id)arg10;
- (void)_drawMask:(id)arg1 index:(long long)arg2 rect:(struct CGRect)arg3 zIndex:(long long)arg4 zRotation:(double)arg5 subtract:(id)arg6 time:(double)arg7 inContext:(id)arg8 withArguments:(id)arg9;
- (void)_drawFrame:(id)arg1 info:(id)arg2 rect:(struct CGRect)arg3 stretch:(BOOL)arg4 zIndex:(long long)arg5 zRotation:(double)arg6 subtract:(id)arg7 key:(id)arg8 time:(double)arg9 inContext:(id)arg10 withArguments:(id)arg11;
- (void)_drawTextWithInfo:(id)arg1 rect:(struct CGRect)arg2 zIndex:(long long)arg3 zRotation:(double)arg4 time:(double)arg5 inContext:(id)arg6 withArguments:(id)arg7;
- (BOOL)getCurrentCenter:(struct CGPoint *)arg1 scale:(double *)arg2 rotation:(double *)arg3 isMain:(char *)arg4 forElement:(id)arg5;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isOpaque;
- (BOOL)isAlphaFriendly;
- (void)setPixelSize:(struct CGSize)arg1;
- (BOOL)isLoadedForTime:(double)arg1;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;
- (void)_unload;
- (long long)_maxLinesForTextElement:(id)arg1;
- (struct CGSize)_maxSizeForTextElement:(id)arg1;
- (void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;

@end

