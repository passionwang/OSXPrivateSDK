/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOComposedWaypoint, NSString;

@interface GEONavigationRouteSummary : PBCodable <NSCopying>
{
    GEOComposedWaypoint *_destination;
    NSString *_destinationName;
    GEOComposedWaypoint *_origin;
    int _transportType;
    CDStruct_a995201b _has;
}

@property(retain, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDestinationName;
@property(readonly, nonatomic) BOOL hasDestination;
@property(readonly, nonatomic) BOOL hasOrigin;
@property(nonatomic) BOOL hasTransportType;
- (void)dealloc;
- (void)setRoute:(id)arg1;
- (id)initWithRoute:(id)arg1 destinationName:(id)arg2;

@end

