/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class MSPPlaceBookmark, MSPRegionBookmark, MSPRouteBookmark, NSString, PBUnknownFields;

@interface MSPBookmarkStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    NSString *_identifier;
    MSPPlaceBookmark *_placeBookmark;
    MSPRegionBookmark *_regionBookmark;
    MSPRouteBookmark *_routeBookmark;
    int _type;
    CDStruct_dd13975a _has;
}

@property(retain, nonatomic) MSPRegionBookmark *regionBookmark; // @synthesize regionBookmark=_regionBookmark;
@property(retain, nonatomic) MSPRouteBookmark *routeBookmark; // @synthesize routeBookmark=_routeBookmark;
@property(retain, nonatomic) MSPPlaceBookmark *placeBookmark; // @synthesize placeBookmark=_placeBookmark;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRegionBookmark;
@property(readonly, nonatomic) BOOL hasRouteBookmark;
@property(readonly, nonatomic) BOOL hasPlaceBookmark;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) BOOL hasPosition;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

