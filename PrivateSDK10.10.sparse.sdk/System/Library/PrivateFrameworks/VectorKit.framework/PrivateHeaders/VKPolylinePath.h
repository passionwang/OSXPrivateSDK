/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOComposedRouteSection, GEOSnappedRoutePath, VKPolylineOverlay;

// Not exported
@interface VKPolylinePath : NSObject
{
    VKPolylineOverlay *_overlay;
    GEOComposedRouteSection *_section;
    GEOSnappedRoutePath *_snappedPath;
    Matrix_8746f91e *_points;
    unsigned int _pointCount;
    BOOL _ownsPoints;
    struct PolylineCoordinate _routeStart;
    struct PolylineCoordinate _routeEnd;
    BOOL _trafficSpeed;
}

@property(nonatomic) BOOL trafficSpeed; // @synthesize trafficSpeed=_trafficSpeed;
@property(readonly, nonatomic) GEOComposedRouteSection *section; // @synthesize section=_section;
@property(readonly, nonatomic) GEOSnappedRoutePath *snappedPath; // @synthesize snappedPath=_snappedPath;
@property(nonatomic) struct PolylineCoordinate routeEnd; // @synthesize routeEnd=_routeEnd;
@property(nonatomic) struct PolylineCoordinate routeStart; // @synthesize routeStart=_routeStart;
@property(readonly, nonatomic) unsigned int pointCount; // @synthesize pointCount=_pointCount;
@property(readonly, nonatomic) Matrix_8746f91e *points; // @synthesize points=_points;
- (id).cxx_construct;
- (void)splitTrafficSegmentationAndAddTo:(id)arg1 with:(id)arg2;
- (void)assignTo:(id)arg1 withSegment:(const struct TrafficSegment *)arg2;
- (Matrix_8746f91e)interpolateAt:(const struct PolylineCoordinate *)arg1;
- (struct PolylineCoordinate)pathIndexFromRouteIndex:(struct PolylineCoordinate)arg1;
- (void)assignPoints:(Matrix_8746f91e *)arg1 count:(unsigned int)arg2;
- (id)description;
@property(readonly) BOOL isMapMatched;
@property(readonly) BOOL hasCompletedMapMatching;
- (void)dealloc;
- (id)initWithOverlay:(id)arg1 snappedPath:(id)arg2;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4;
- (id)initWithOverlay:(id)arg1 section:(id)arg2;

@end

