//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

@class VKPStyleProperties;

__attribute__((visibility("hidden")))
@interface VKPZoomProperty : PBCodable
{
    float _maxZ;
    float _minZ;
    VKPStyleProperties *_properties;
}

@property(retain, nonatomic) VKPStyleProperties *properties; // @synthesize properties=_properties;
@property(nonatomic) float maxZ; // @synthesize maxZ=_maxZ;
@property(nonatomic) float minZ; // @synthesize minZ=_minZ;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;
- (void)applyTo:(id)arg1 zoom:(float)arg2;

@end

