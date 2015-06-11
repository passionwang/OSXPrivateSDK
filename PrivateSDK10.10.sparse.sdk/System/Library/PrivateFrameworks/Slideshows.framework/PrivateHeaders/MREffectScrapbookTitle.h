/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MREffect.h>

@class MRImage, MRImageProvider, MRTextRenderer, NSMutableDictionary;

@interface MREffectScrapbookTitle : MREffect
{
    MRImageProvider *mImageProviders[5];
    NSMutableDictionary *mSprites;
    MRTextRenderer *mTextRenderer0;
    MRImage *mTextImage0;
    float mLocalTranslationX;
    float mLocalTranslationY;
}

- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isAlphaFriendly;
- (BOOL)isOpaque;
- (BOOL)isLoadedForTime:(double)arg1;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;
- (void)_unload;
- (long long)_maxLinesForTextElement:(id)arg1;
- (struct CGSize)_maxSizeForTextElement:(id)arg1;
- (void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)renderEffectTitle2AtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)renderEffectTitleAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;

@end

