/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class BRFieldPkgItem;

@interface BRFieldPkgLocalItem : PBCodable <NSCopying>
{
    long long _fileID;
    long long _size;
    unsigned int _generationID;
    BRFieldPkgItem *_item;
    struct {
        unsigned int size:1;
        unsigned int generationID:1;
    } _has;
}

@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) unsigned int generationID; // @synthesize generationID=_generationID;
@property(nonatomic) long long fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) BRFieldPkgItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSize;
@property(nonatomic) BOOL hasGenerationID;

@end

