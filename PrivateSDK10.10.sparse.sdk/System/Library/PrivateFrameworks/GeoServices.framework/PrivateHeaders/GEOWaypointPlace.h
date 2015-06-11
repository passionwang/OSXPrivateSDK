/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOLatLng, NSMutableArray;

@interface GEOWaypointPlace : PBCodable <NSCopying>
{
    GEOLatLng *_center;
    NSMutableArray *_roadAccessPoints;
}

@property(retain, nonatomic) NSMutableArray *roadAccessPoints; // @synthesize roadAccessPoints=_roadAccessPoints;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)roadAccessPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)roadAccessPointsCount;
- (void)addRoadAccessPoint:(id)arg1;
- (void)clearRoadAccessPoints;
@property(readonly, nonatomic) BOOL hasCenter;
- (void)dealloc;

@end

