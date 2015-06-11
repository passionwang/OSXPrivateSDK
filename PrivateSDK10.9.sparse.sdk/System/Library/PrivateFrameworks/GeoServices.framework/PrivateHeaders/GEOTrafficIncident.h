//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOTrafficIncident : PBCodable <NSCopying>
{
    double _endTime;
    double _lastUpdated;
    double _startTime;
    long long _uID;
    NSString *_info;
    NSString *_location;
    NSString *_title;
    int _type;
    int _vertexCount;
    int _vertexOffset;
    struct {
        unsigned int endTime:1;
        unsigned int lastUpdated:1;
        unsigned int startTime:1;
        unsigned int uID:1;
        unsigned int type:1;
        unsigned int vertexCount:1;
        unsigned int vertexOffset:1;
    } _has;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int vertexCount; // @synthesize vertexCount=_vertexCount;
@property(nonatomic) int vertexOffset; // @synthesize vertexOffset=_vertexOffset;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long uID; // @synthesize uID=_uID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasType;
@property(nonatomic) BOOL hasLastUpdated;
@property(nonatomic) BOOL hasEndTime;
@property(nonatomic) BOOL hasStartTime;
@property(nonatomic) BOOL hasVertexCount;
@property(nonatomic) BOOL hasVertexOffset;
@property(readonly, nonatomic) BOOL hasLocation;
@property(readonly, nonatomic) BOOL hasInfo;
@property(readonly, nonatomic) BOOL hasTitle;
@property(nonatomic) BOOL hasUID;
- (void)dealloc;

@end

