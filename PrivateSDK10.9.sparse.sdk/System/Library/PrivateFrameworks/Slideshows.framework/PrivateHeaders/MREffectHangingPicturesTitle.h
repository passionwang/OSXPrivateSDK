//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MREffect.h>

@class MRCroppingSprite, MRImage, MRImageProvider, MRTextRenderer;

@interface MREffectHangingPicturesTitle : MREffect
{
    MRImageProvider *mRopeImageProvider;
    MRTextRenderer *mTextRenderer;
    struct CGSize mTextSize;
    struct CGSize mEditedTextSize;
    MRCroppingSprite *mSprite;
    float mMatrix[16];
    MRImage *mTextImage;
}

+ (void)initialize;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isLoadedForTime:(double)arg1;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;
- (long long)_maxLinesForTextElement:(id)arg1;
- (struct CGSize)_maxSizeForTextElement:(id)arg1;
- (void)_unload;
- (void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;

@end

