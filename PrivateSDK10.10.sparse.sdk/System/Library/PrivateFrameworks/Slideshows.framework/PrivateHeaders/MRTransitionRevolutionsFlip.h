/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MRTransition.h>

@class MRImage, NSMutableArray;

@interface MRTransitionRevolutionsFlip : MRTransition
{
    unsigned int _numberOfTilesX;
    unsigned int _numberOfTilesY;
    NSMutableArray *_cubes;
    NSMutableArray *_cubeColumns;
    NSMutableArray *_cubeRows;
    int _flipDirection;
    long long _horizontalCubeCount;
    long long _verticalCubeCount;
    MRImage *_sourceImage;
    MRImage *_destinationImage;
    double _viewBaseWidth;
    double _viewBaseHeight;
}

- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)setAttributes:(id)arg1;
- (void)setupCubesWithLocalAspectRatio:(float)arg1;
- (void)setFlipDirection:(int)arg1;
- (void)unload;
- (void)cleanup;
- (id)initWithTransitionID:(id)arg1;

@end

