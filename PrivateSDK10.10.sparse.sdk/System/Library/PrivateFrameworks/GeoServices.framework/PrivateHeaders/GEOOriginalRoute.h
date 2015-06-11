/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSData;

@interface GEOOriginalRoute : PBCodable <NSCopying>
{
    NSData *_originalDirectionsResponseID;
    int _originalRoutePurpose;
    NSData *_routeHandle;
    struct {
        unsigned int originalRoutePurpose:1;
    } _has;
}

@property(retain, nonatomic) NSData *originalDirectionsResponseID; // @synthesize originalDirectionsResponseID=_originalDirectionsResponseID;
@property(retain, nonatomic) NSData *routeHandle; // @synthesize routeHandle=_routeHandle;
@property(nonatomic) int originalRoutePurpose; // @synthesize originalRoutePurpose=_originalRoutePurpose;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasOriginalDirectionsResponseID;
@property(readonly, nonatomic) BOOL hasRouteHandle;
@property(nonatomic) BOOL hasOriginalRoutePurpose;
- (void)dealloc;

@end

