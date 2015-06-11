/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEONameInfo, GEOTimeCheckpoints, NSMutableArray, NSString;

@interface GEOStep : PBCodable <NSCopying>
{
    CDStruct_bf9e66ee *_laneGuidances;
    unsigned long long _laneGuidancesCount;
    unsigned long long _laneGuidancesSpace;
    CDStruct_e02beb0c *_junctionElements;
    unsigned long long _junctionElementsCount;
    unsigned long long _junctionElementsSpace;
    unsigned int _distance;
    GEONameInfo *_exitNumber;
    unsigned int _expectedTime;
    int _hintFirstAnnouncementZilchIndex;
    NSString *_instructions;
    int _junctionType;
    int _maneuverEndBasicIndex;
    int _maneuverEndZilchIndex;
    NSMutableArray *_maneuverNames;
    int _maneuverStartZilchIndex;
    int _maneuverType;
    NSString *_notice;
    int _overrideDrivingSide;
    int _overrideTransportType;
    NSMutableArray *_signposts;
    unsigned int _stepID;
    NSMutableArray *_substeps;
    GEOTimeCheckpoints *_timeCheckpoints;
    BOOL _endsOnFwy;
    BOOL _toFreeway;
    BOOL _tollAhead;
    BOOL _tollPrior;
    struct {
        unsigned int distance:1;
        unsigned int expectedTime:1;
        unsigned int hintFirstAnnouncementZilchIndex:1;
        unsigned int junctionType:1;
        unsigned int maneuverEndBasicIndex:1;
        unsigned int maneuverEndZilchIndex:1;
        unsigned int maneuverStartZilchIndex:1;
        unsigned int maneuverType:1;
        unsigned int overrideDrivingSide:1;
        unsigned int overrideTransportType:1;
        unsigned int stepID:1;
        unsigned int endsOnFwy:1;
        unsigned int toFreeway:1;
        unsigned int tollAhead:1;
        unsigned int tollPrior:1;
    } _has;
}

@property(retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints; // @synthesize timeCheckpoints=_timeCheckpoints;
@property(retain, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSString *instructions; // @synthesize instructions=_instructions;
@property(retain, nonatomic) NSMutableArray *substeps; // @synthesize substeps=_substeps;
@property(retain, nonatomic) GEONameInfo *exitNumber; // @synthesize exitNumber=_exitNumber;
@property(nonatomic) int overrideDrivingSide; // @synthesize overrideDrivingSide=_overrideDrivingSide;
@property(nonatomic) int overrideTransportType; // @synthesize overrideTransportType=_overrideTransportType;
@property(retain, nonatomic) NSMutableArray *signposts; // @synthesize signposts=_signposts;
@property(retain, nonatomic) NSMutableArray *maneuverNames; // @synthesize maneuverNames=_maneuverNames;
@property(nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
@property(nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTimeCheckpoints;
@property(readonly, nonatomic) BOOL hasNotice;
@property(readonly, nonatomic) BOOL hasInstructions;
@property(nonatomic) BOOL hasToFreeway;
@property(nonatomic) BOOL toFreeway; // @synthesize toFreeway=_toFreeway;
- (id)substepsAtIndex:(unsigned long long)arg1;
- (unsigned long long)substepsCount;
- (void)addSubsteps:(id)arg1;
- (void)clearSubsteps;
@property(nonatomic) BOOL hasEndsOnFwy;
@property(nonatomic) BOOL endsOnFwy; // @synthesize endsOnFwy=_endsOnFwy;
@property(nonatomic) BOOL hasTollAhead;
@property(nonatomic) BOOL tollAhead; // @synthesize tollAhead=_tollAhead;
@property(nonatomic) BOOL hasTollPrior;
@property(nonatomic) BOOL tollPrior; // @synthesize tollPrior=_tollPrior;
@property(readonly, nonatomic) BOOL hasExitNumber;
@property(nonatomic) BOOL hasOverrideDrivingSide;
@property(nonatomic) BOOL hasOverrideTransportType;
@property(nonatomic) BOOL hasHintFirstAnnouncementZilchIndex;
@property(nonatomic) int hintFirstAnnouncementZilchIndex; // @synthesize hintFirstAnnouncementZilchIndex=_hintFirstAnnouncementZilchIndex;
- (id)signpostAtIndex:(unsigned long long)arg1;
- (unsigned long long)signpostsCount;
- (void)addSignpost:(id)arg1;
- (void)clearSignposts;
- (void)setJunctionElements:(CDStruct_e02beb0c *)arg1 count:(unsigned long long)arg2;
- (CDStruct_e02beb0c)junctionElementAtIndex:(unsigned long long)arg1;
- (void)addJunctionElement:(CDStruct_e02beb0c)arg1;
- (void)clearJunctionElements;
@property(readonly, nonatomic) CDStruct_e02beb0c *junctionElements;
@property(readonly, nonatomic) unsigned long long junctionElementsCount;
@property(nonatomic) BOOL hasJunctionType;
@property(nonatomic) int junctionType; // @synthesize junctionType=_junctionType;
- (void)setLaneGuidances:(CDStruct_bf9e66ee *)arg1 count:(unsigned long long)arg2;
- (CDStruct_bf9e66ee)laneGuidanceAtIndex:(unsigned long long)arg1;
- (void)addLaneGuidance:(CDStruct_bf9e66ee)arg1;
- (void)clearLaneGuidances;
@property(readonly, nonatomic) CDStruct_bf9e66ee *laneGuidances;
@property(readonly, nonatomic) unsigned long long laneGuidancesCount;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)maneuverNamesCount;
- (void)addManeuverName:(id)arg1;
- (void)clearManeuverNames;
@property(nonatomic) BOOL hasManeuverType;
@property(nonatomic) BOOL hasExpectedTime;
@property(nonatomic) BOOL hasDistance;
@property(nonatomic) BOOL hasManeuverEndZilchIndex;
@property(nonatomic) int maneuverEndZilchIndex; // @synthesize maneuverEndZilchIndex=_maneuverEndZilchIndex;
@property(nonatomic) BOOL hasManeuverStartZilchIndex;
@property(nonatomic) int maneuverStartZilchIndex; // @synthesize maneuverStartZilchIndex=_maneuverStartZilchIndex;
@property(nonatomic) BOOL hasManeuverEndBasicIndex;
@property(nonatomic) int maneuverEndBasicIndex; // @synthesize maneuverEndBasicIndex=_maneuverEndBasicIndex;
@property(nonatomic) BOOL hasStepID;
- (void)dealloc;
- (id)maneuverDescription;
- (BOOL)maneuverIsHighwayExit;
- (void)shieldInfo:(id)arg1;
- (id)intersectionNameInfo;
- (id)firstNameInfo;
@property(readonly, nonatomic) int hintFirstAnnouncementIndex;
@property(readonly, nonatomic) BOOL hasHintFirstAnnouncementIndex;
@property(readonly, nonatomic) unsigned int maneuverStartIndex;
@property(readonly, nonatomic) unsigned int maneuverEndIndex;

@end

