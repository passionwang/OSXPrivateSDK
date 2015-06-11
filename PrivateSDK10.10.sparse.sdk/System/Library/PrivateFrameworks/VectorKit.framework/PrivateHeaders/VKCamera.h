/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class VKFootprint, VKViewVolume;

// Not exported
@interface VKCamera : NSObject
{
    id <VKCameraDelegate> _delegate;
    struct VKPoint _position;
    CDStruct_aa5aacbc _orientation;
    float _aspectRatio;
    float _verticalFieldOfView;
    struct VKPoint _puckPosition;
    CDStruct_17faa5b0 _frustum;
    double _minHeight;
    double _maxHeight;
    double _maxPitch;
    double _terrainHeight;
    double _maxFarClipDistance;
    BOOL _needsUpdate;
    BOOL _updating;
    int _updateNumber;
    CDStruct_aa5aacbc _viewProjectionMatrix;
    CDStruct_aa5aacbc _projectionMatrix;
    CDStruct_aa5aacbc _viewMatrix;
    CDStruct_aa5aacbc _viewMatrixUnscaled;
    CDStruct_aa5aacbc _projectionMatrixUnscaled;
    CDStruct_aa5aacbc _projectionMatrixUnscaledWithoutOffset;
    CDStruct_aa5aacbc _viewProjectionMatrixUnscaled;
    CDStruct_aa5aacbc _worldMatrix;
    VKViewVolume *_viewVolume;
    VKFootprint *_footprint;
    double _tanHalfHorizFOV;
    double _tanHalfVerticalFOV;
    Matrix_6e1d3589 _forward;
    Matrix_6e1d3589 _right;
    Matrix_6e1d3589 _up;
    double _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
    double _distanceToGroundAndFarClipPlaneIntersection;
    double _screenHeightOfGroundAndFarClipPlaneIntersection;
    BOOL _allowDatelineWraparound;
    double _canonicalPitch;
    double _horizontalOffset;
    Matrix_6e1d3589 _gmPosition;
    Matrix_08d701e4 _gmViewMatrix;
    Matrix_08d701e4 _gmProjectionMatrix;
    Matrix_08d701e4 _gmViewProjectionMatrix;
    Matrix_08d701e4 _gmWorldMatrix;
    double _maxHeightNoPitch;
}

@property(nonatomic) struct VKPoint puckPosition; // @synthesize puckPosition=_puckPosition;
@property(nonatomic) double horizontalOffset; // @synthesize horizontalOffset=_horizontalOffset;
@property(nonatomic) double canonicalPitch; // @synthesize canonicalPitch=_canonicalPitch;
@property(nonatomic) BOOL allowDatelineWraparound; // @synthesize allowDatelineWraparound=_allowDatelineWraparound;
@property(readonly, nonatomic) double screenHeightOfGroundAndFarClipPlaneIntersection; // @synthesize screenHeightOfGroundAndFarClipPlaneIntersection=_screenHeightOfGroundAndFarClipPlaneIntersection;
@property(readonly, nonatomic) double distanceToGroundAndFarClipPlaneIntersection; // @synthesize distanceToGroundAndFarClipPlaneIntersection=_distanceToGroundAndFarClipPlaneIntersection;
@property(nonatomic) double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch; // @synthesize fractionOfScreenAboveFarClipPlaneAtCanonicalPitch=_fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
@property(nonatomic) id <VKCameraDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int updateNumber; // @synthesize updateNumber=_updateNumber;
@property(nonatomic) double terrainHeight; // @synthesize terrainHeight=_terrainHeight;
@property(nonatomic) double maxPitch; // @synthesize maxPitch=_maxPitch;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double maxHeightNoPitch; // @synthesize maxHeightNoPitch=_maxHeightNoPitch;
@property(nonatomic) float aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) struct VKPoint position; // @synthesize position=_position;
@property(readonly, nonatomic) CDStruct_17faa5b0 frustum; // @synthesize frustum=_frustum;
- (id).cxx_construct;
- (void)adjustClipPlanes;
- (double)depthForViewWidth:(double)arg1;
- (double)widthOfViewAtDepth:(double)arg1;
- (struct VKPoint)groundPointFromScreenPoint:(struct CGPoint)arg1 atGroundLevel:(double)arg2;
- (struct VKPoint)groundPointFromScreenPoint:(struct CGPoint)arg1;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (struct VKPoint)groundPlaneIntersectionPoint;
- (BOOL)isOuterWorldBoundsVisible;
- (BOOL)isWorldSpaceRectVisible:(const CDStruct_d2b197d1 *)arg1;
- (float)maximumStyleZForRect:(const CDStruct_d2b197d1 *)arg1;
- (BOOL)hasChangedState:(struct VKCameraState *)arg1;
@property(nonatomic) struct VKCameraState cameraState;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) double pitch;
- (double)displayZoomLevel;
@property(readonly, nonatomic) struct VKPoint groundPoint;
@property(readonly, nonatomic) Matrix_6e1d3589 forwardVector;
@property(readonly, nonatomic) Matrix_6e1d3589 rightVector;
@property(readonly, nonatomic) Matrix_6e1d3589 upVector;
@property(readonly, nonatomic) VKFootprint *footprint;
@property(readonly, nonatomic) VKViewVolume *viewVolume;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *worldMatrix;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *projectionMatrixUnscaled;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *projectionMatrixUnscaledWithoutOffset;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *viewProjectionMatrixUnscaled;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *viewMatrixUnscaled;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *viewMatrix;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *projectionMatrix;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *viewProjectionMatrix;
@property(readonly, nonatomic) double tanHalfVerticalFOV;
@property(readonly, nonatomic) double tanHalfHorizFOV;
@property(readonly, nonatomic) double nearClipDistance;
@property(readonly, nonatomic) double farClipDistance;
@property(readonly, nonatomic) float horizontalFieldOfView;
@property(nonatomic) float verticalFieldOfView;
@property(nonatomic) const CDStruct_aa5aacbc *orientation;
- (void)_setPosition:(struct VKPoint)arg1;
- (id)description;
- (void)logCameraState;
- (void)dealloc;
- (id)init;
- (Matrix_6e1d3589)gmGroundPointFromScreenPoint:(struct CGPoint)arg1 atGroundLevel:(double)arg2;
- (Matrix_6e1d3589)gmGroundPointFromScreenPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) Matrix_ec0d872f gmForwardVector;
@property(readonly, nonatomic) Matrix_ec0d872f gmRightVector;
@property(readonly, nonatomic) Matrix_ec0d872f gmUpVector;
@property(readonly, nonatomic) const Matrix_08d701e4 *gmViewMatrix;
@property(readonly, nonatomic) const Matrix_08d701e4 *gmProjectionMatrix;
@property(readonly, nonatomic) const Matrix_08d701e4 *gmViewProjectionMatrix;
@property(readonly, nonatomic) const Matrix_6e1d3589 *gmPosition;

@end

