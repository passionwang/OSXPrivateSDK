//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface VKPTextureAtlas : PBCodable
{
    unsigned int _quadHeight;
    unsigned int _quadWidth;
    NSData *_texture;
}

@property(nonatomic) unsigned int quadHeight; // @synthesize quadHeight=_quadHeight;
@property(nonatomic) unsigned int quadWidth; // @synthesize quadWidth=_quadWidth;
@property(retain, nonatomic) NSData *texture; // @synthesize texture=_texture;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end

