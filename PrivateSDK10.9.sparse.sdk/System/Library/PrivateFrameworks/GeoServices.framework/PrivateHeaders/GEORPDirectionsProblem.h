//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray;

@interface GEORPDirectionsProblem : PBCodable <NSCopying>
{
    unsigned long long _problematicEventIndex;
    NSMutableArray *_directionsRequests;
    NSData *_directionsResponseID;
    NSMutableArray *_directionsResponses;
    NSMutableArray *_events;
    NSData *_overviewScreenshotImageData;
    unsigned int _problematicResponseIndex;
    NSData *_problematicRouteID;
    unsigned int _problematicStepIndex;
    CDStruct_d18ab72a _has;
}

@property(nonatomic) unsigned long long problematicEventIndex; // @synthesize problematicEventIndex=_problematicEventIndex;
@property(nonatomic) unsigned int problematicStepIndex; // @synthesize problematicStepIndex=_problematicStepIndex;
@property(retain, nonatomic) NSData *problematicRouteID; // @synthesize problematicRouteID=_problematicRouteID;
@property(nonatomic) unsigned int problematicResponseIndex; // @synthesize problematicResponseIndex=_problematicResponseIndex;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSData *overviewScreenshotImageData; // @synthesize overviewScreenshotImageData=_overviewScreenshotImageData;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(retain, nonatomic) NSMutableArray *directionsResponses; // @synthesize directionsResponses=_directionsResponses;
@property(retain, nonatomic) NSMutableArray *directionsRequests; // @synthesize directionsRequests=_directionsRequests;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasProblematicEventIndex;
@property(nonatomic) BOOL hasProblematicStepIndex;
@property(readonly, nonatomic) BOOL hasProblematicRouteID;
@property(nonatomic) BOOL hasProblematicResponseIndex;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
@property(readonly, nonatomic) BOOL hasOverviewScreenshotImageData;
@property(readonly, nonatomic) BOOL hasDirectionsResponseID;
- (id)directionsResponsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsResponsesCount;
- (void)addDirectionsResponses:(id)arg1;
- (void)clearDirectionsResponses;
- (id)directionsRequestsAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsRequestsCount;
- (void)addDirectionsRequests:(id)arg1;
- (void)clearDirectionsRequests;
- (void)dealloc;

@end

