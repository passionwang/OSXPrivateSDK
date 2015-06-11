/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MCPlug.h>

@class MCContainerParallelizer, NSString;

@interface MCPlugParallel : MCPlug
{
    void *mGeometry;
    short mZIndex;
    short mAudioPriority;
    NSString *mIDInSupercontainer;
    MCContainerParallelizer *mSupercontainer;
    double mTimeIn;
    double mOpacity;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(nonatomic) double opacity; // @synthesize opacity=mOpacity;
@property(nonatomic) short audioPriority; // @synthesize audioPriority=mAudioPriority;
@property(nonatomic) short zIndex; // @synthesize zIndex=mZIndex;
@property(nonatomic) double timeIn; // @synthesize timeIn=mTimeIn;
@property MCContainerParallelizer *supercontainer; // @synthesize supercontainer=mSupercontainer;
- (void)setIDInSupercontainer:(id)arg1;
@property(copy, getter=idInSupercontainer) NSString *idInSupercontainer; // @synthesize idInSupercontainer=mIDInSupercontainer;
- (id)description;
@property(nonatomic) double yRotationAngle;
@property(nonatomic) double xRotationAngle;
@property(nonatomic) double zPosition;
@property(nonatomic) double rotationAngle;
- (void)_copySelfToSnapshot:(id)arg1;
@property(nonatomic) unsigned char currentLayoutIndex;
@property(readonly) unsigned char countOfLayouts;
@property(nonatomic) BOOL clipsContainer;
@property(nonatomic) BOOL resetsTimeOnTrigger;
@property(nonatomic) BOOL isTriggered;
@property(nonatomic) double rotationY;
@property(nonatomic) double rotationX;
@property(nonatomic) double positionZ;
@property(nonatomic) double rotation;
@property(nonatomic) double scale;
- (void)setHeight:(double)arg1 andAbsoluteAspectRatio:(double)arg2;
- (void)setWidth:(double)arg1 andAbsoluteAspectRatio:(double)arg2;
- (struct CGSize)sizeForParentAspectRatio:(double)arg1;
- (double)aspectRatioForParentAspectRatio:(double)arg1;
@property(readonly) double aspectRatio;
@property(readonly) double height;
@property(readonly) double width;
@property(readonly) BOOL hasValidWidth;
@property(readonly) BOOL hasAbsoluteAspectRatio;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint position;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;
- (id)init;

@end

