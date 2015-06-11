/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOMapServiceTicket-Protocol.h"
#import "_GEOLegacyMapServiceTicket-Protocol.h"

@class GEOGeocodeRequest, GEOMapRegion, GEOMapServiceTraits, GEOPlaceSearchResponse, NSString;

// Not exported
@interface _GEOGeocodeTicket : NSObject <GEOMapServiceTicket, _GEOLegacyMapServiceTicket>
{
    GEOGeocodeRequest *_geocodeRequest;
    GEOPlaceSearchResponse *_response;
    GEOMapServiceTraits *_traits;
    GEOMapRegion *_resultBoundingRegion;
    BOOL _isForwardGeocode;
    BOOL _shiftLocationsIfNeeded;
}

@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion; // @synthesize resultBoundingRegion=_resultBoundingRegion;
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(retain, nonatomic) GEOPlaceSearchResponse *response; // @synthesize response=_response;
- (void)_reverseGeocodeWithRequest:(id)arg1 handler:(id)arg2 networkActivity:(void)arg3;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)cancel;
- (void)submitWithRefinedHandler:(id)arg1 timeout:(void)arg2 networkActivity:(long long)arg3;
- (void)submitWithHandler:(id)arg1 timeout:(void)arg2 networkActivity:(long long)arg3;
- (void)submitWithRefinedHandler:(id)arg1 networkActivity:(void)arg2;
- (void)submitWithHandler:(id)arg1 networkActivity:(void)arg2;
- (id)request;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithReverseGeocodeRequest:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeRequest:(id)arg1 traits:(id)arg2;
- (id)_initWithGeocodeRequest:(id)arg1 traits:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

