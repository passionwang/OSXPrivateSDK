/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface GEOPhotoInfo : PBCodable <NSCopying>
{
    int _size;
    NSString *_url;
    struct {
        unsigned int size:1;
    } _has;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int size; // @synthesize size=_size;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasUrl;
@property(nonatomic) BOOL hasSize;
- (void)dealloc;
- (id)initWithPlaceDataPhotoContent:(id)arg1;

@end

