/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "VKLabelNavFeature-Protocol.h"

@class NSString, VKLabelNavJunction, VKLabelNavRoadLabel, VKLabelTile;

// Not exported
@interface VKLabelNavRoad : NSObject <VKLabelNavFeature>
{
    VKLabelTile *_tile;
    CDStruct_c39c80a1 *_data;
    unsigned long long _vertexIndexA;
    unsigned long long _vertexIndexB;
    CDStruct_dde70fb6 *_junctionA;
    CDStruct_dde70fb6 *_junctionB;
    VKLabelNavJunction *_navJunctionA;
    vector_e20517dc _simplifiedPoints;
    Matrix_8746f91e _direction;
    BOOL _isRoadLabelUnique;
    BOOL _isOnRoute;
    BOOL _isStartOfRoadName;
    BOOL _isInGuidance;
    BOOL _isGuidanceStepStart;
    BOOL _areLabelsDisabled;
    struct PolylineCoordinate _routeOffset;
    float _routeCrossProduct;
    long long _intraRoadPriority;
    double _length;
    NSString *_name;
    NSString *_shieldDisplayGroup;
    NSString *_shieldGroup;
    VKLabelNavRoadLabel *_roadSign;
    VKLabelNavRoadLabel *_roadShield;
    BOOL _areNavStylesInitialized;
    BOOL _hasVisibleSigns;
    BOOL _hasVisibleShields;
    BOOL _suppressRoadSignIfShieldPresent;
}

@property(readonly, nonatomic) BOOL suppressRoadSignIfShieldPresent; // @synthesize suppressRoadSignIfShieldPresent=_suppressRoadSignIfShieldPresent;
@property(readonly, nonatomic) VKLabelNavJunction *navJunctionA; // @synthesize navJunctionA=_navJunctionA;
@property(nonatomic) BOOL isRoadLabelUnique; // @synthesize isRoadLabelUnique=_isRoadLabelUnique;
@property(nonatomic) BOOL areLabelsDisabled; // @synthesize areLabelsDisabled=_areLabelsDisabled;
@property(nonatomic) long long intraRoadPriority; // @synthesize intraRoadPriority=_intraRoadPriority;
@property(readonly, nonatomic) CDStruct_dde70fb6 *junctionB; // @synthesize junctionB=_junctionB;
@property(nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(nonatomic) float routeCrossProduct; // @synthesize routeCrossProduct=_routeCrossProduct;
@property(nonatomic) BOOL isGuidanceStepStart; // @synthesize isGuidanceStepStart=_isGuidanceStepStart;
@property(nonatomic) BOOL isInGuidance; // @synthesize isInGuidance=_isInGuidance;
@property(nonatomic) BOOL isStartOfRoadName; // @synthesize isStartOfRoadName=_isStartOfRoadName;
@property(nonatomic) BOOL isOnRoute; // @synthesize isOnRoute=_isOnRoute;
@property(nonatomic) Matrix_8746f91e direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) VKLabelTile *tile; // @synthesize tile=_tile;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)length;
- (id)_newLabelWithNavContext:(struct NavContext *)arg1 isShieldLabel:(BOOL)arg2 worldPoint:(struct VKPoint)arg3 alignment:(long long)arg4;
@property(readonly, nonatomic) long long roadSignAlignment;
- (BOOL)_worldPointForRoadOffset:(float)arg1 worldPoint:(struct VKPoint *)arg2;
- (void)_worldRoadPoints:(vector_e20517dc *)arg1;
- (void)appendSimplifiedWorldRoadPoints:(vector_e20517dc *)arg1;
- (void)recreateRoadSignWithAlignment:(long long)arg1 navContext:(struct NavContext *)arg2;
- (void)createLabelWithNavContext:(struct NavContext *)arg1 isShieldLabel:(BOOL)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 minRouteDistance:(float)arg6 roadGraph:(id)arg7;
- (BOOL)_findLabelAnchorPoint:(struct VKPoint *)arg1 isShieldLabel:(BOOL)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 roadGraph:(id)arg6;
- (float)_findRoadOffsetForDistanceToRay:(float)arg1 rayStart:(struct VKPoint)arg2 rayVector:(Matrix_8746f91e)arg3 roadGraph:(id)arg4;
- (id)labelWithType:(BOOL)arg1;
@property(readonly, nonatomic) NSString *shieldDisplayGroup;
@property(readonly, nonatomic) NSString *shieldGroup;
- (BOOL)hasShield;
- (BOOL)hasVisibleShields;
- (BOOL)hasVisibleSigns;
- (BOOL)matchesRoad:(id)arg1;
- (BOOL)matchesRoadEdge:(const CDStruct_91f75a7f *)arg1;
- (void)getRoadEdge:(CDStruct_91f75a7f *)arg1;
@property(readonly, nonatomic) BOOL isOnewayToJunction;
@property(readonly, nonatomic) BOOL isRamp;
@property(readonly, nonatomic) BOOL isAwayFromRoute;
@property(readonly, nonatomic) int roadClass;
- (id)description;
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;
- (void)clearRoadSign;
@property(readonly, nonatomic) const char *cstrName;
- (void)dealloc;
- (id)initWithRoadEdge:(const CDStruct_91f75a7f *)arg1 navJunctionA:(id)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(id)arg4;

@end

