/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@interface GEORPVisibleTileSet : PBCodable <NSCopying>
{
    CDStruct_97e972fa *_tileKeys;
    unsigned long long _tileKeysCount;
    unsigned long long _tileKeysSpace;
    unsigned int _identifier;
    int _style;
    struct {
        unsigned int identifier:1;
        unsigned int style:1;
    } _has;
}

@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setTileKeys:(CDStruct_97e972fa *)arg1 count:(unsigned long long)arg2;
- (CDStruct_97e972fa)tileKeyAtIndex:(unsigned long long)arg1;
- (void)addTileKey:(CDStruct_97e972fa)arg1;
- (void)clearTileKeys;
@property(readonly, nonatomic) CDStruct_97e972fa *tileKeys;
@property(readonly, nonatomic) unsigned long long tileKeysCount;
@property(nonatomic) BOOL hasIdentifier;
@property(nonatomic) BOOL hasStyle;
- (void)dealloc;

@end

