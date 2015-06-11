//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPlaceResult;

@interface GEOBatchPlaceResult : PBCodable <NSCopying>
{
    GEOPlaceResult *_placeResult;
    int _statusCode;
    CDStruct_bcb1eac0 _has;
}

@property(retain, nonatomic) GEOPlaceResult *placeResult; // @synthesize placeResult=_placeResult;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPlaceResult;
@property(nonatomic) BOOL hasStatusCode;
- (void)dealloc;

@end

