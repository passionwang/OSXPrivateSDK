//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MRTransition.h>

@class MROrigamiAnimationPath;

@interface MRTransitionOrigamiFlip : MRTransition
{
    MROrigamiAnimationPath *mBigSwing;
    MROrigamiAnimationPath *mSideSwing;
}

- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_cleanupSwingTimings;
- (void)_setupSwingTimings;
- (void)cleanup;
- (id)initWithTransitionID:(id)arg1;

@end

