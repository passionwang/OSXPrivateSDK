/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MRSphere : NSObject
{
    float *mVertices;
    float *mTextureCoordinates;
    float *mNormals;
    unsigned int mLongitudeResolution;
    unsigned int mLatitudeResolution;
    float mHalfLongitudeAngle;
    float mHalfLatitudeAngle;
    float mRadius;
}

@property(nonatomic) float radius; // @synthesize radius=mRadius;
@property(nonatomic) float halfLatitudeAngle; // @synthesize halfLatitudeAngle=mHalfLatitudeAngle;
@property(nonatomic) float halfLongitudeAngle; // @synthesize halfLongitudeAngle=mHalfLongitudeAngle;
@property(nonatomic) unsigned int latitudeResolution; // @synthesize latitudeResolution=mLatitudeResolution;
@property(nonatomic) unsigned int longitudeResolution; // @synthesize longitudeResolution=mLongitudeResolution;
- (void)renderDumbImage:(id)arg1 inContext:(id)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4;
- (void)dealloc;
- (id)init;

@end

