//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VKViewVolume;

__attribute__((visibility("hidden")))
@interface VKViewTransform : NSObject
{
    shared_ptr_d1ecf7a2 _viewTransform;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (CDStruct_aa5aacbc)orientationMatrixAtWorldPoint:(struct VKPoint)arg1;
- (struct VKPoint)groundPointFromScreenPoint:(struct CGPoint)arg1;
- (struct VKPoint)groundPointFromPixel:(Vec2Imp_1782d7e3)arg1;
- (void)setCoordinateSpace:(int)arg1 screenSizeInPixels:(struct CGSize)arg2 contentScale:(float)arg3 frustum:(CDStruct_17faa5b0)arg4 position:(struct VKPoint)arg5 orientation:(const CDStruct_aa5aacbc *)arg6;
@property(readonly, nonatomic) double focusDistance;
@property(readonly, nonatomic) double farPlaneDistance;
@property(readonly, nonatomic) double nearPlaneDistance;
@property(readonly, nonatomic) struct VKPoint translationInMercator;
@property(readonly, nonatomic) struct VKPoint translation;
@property(readonly, nonatomic) int coordinateSpace;
@property(readonly, nonatomic) BOOL isGeocentric;
@property(readonly, nonatomic) BOOL isMercator;
@property(readonly, nonatomic) float contentScale;
@property(readonly, nonatomic) struct CGSize screenSizeInPixels;
@property(readonly, nonatomic) struct CGSize screenSizeInPoints;
@property(nonatomic) const CDStruct_aa5aacbc *scaledViewProjectionMatrix;
@property(readonly, nonatomic) struct VKPoint focusPoint;
@property(readonly, nonatomic) VKViewVolume *viewVolume;
@property(readonly, nonatomic) double widthOverDepth;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *viewProjectionMatrix;
@property(readonly, nonatomic) float degreesFromPlumb;
@property(readonly, nonatomic) float heading;
@property(readonly, nonatomic) Vec3Imp_f658403c forwardVector;
@property(readonly, nonatomic) Vec3Imp_f658403c rightVector;
@property(readonly, nonatomic) Vec3Imp_f658403c upVector;
- (shared_ptr_d1ecf7a2)viewTransform;
- (id)init;

@end

