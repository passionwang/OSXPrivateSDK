/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CDTrendLogic : NSObject
{
    unsigned long long _slotCount;
    unsigned long long _cDelta;
    unsigned long long _cHighThreshold;
    unsigned long long _cLowThreshold;
    unsigned long long _cMax;
    unsigned long long _cEpsilon;
    unsigned long long _iecMinSeconds;
    unsigned long long _cMin;
    unsigned long long _timerMinSeconds;
    unsigned long long _iecMaxSeconds;
    unsigned long long _iecDecayMult;
    unsigned long long _iecMinMult;
    unsigned long long _iecAvgMult;
    unsigned long long _iecDiv;
    unsigned long long _timerLeewaySeconds;
}

@property unsigned long long timerLeewaySeconds; // @synthesize timerLeewaySeconds=_timerLeewaySeconds;
@property unsigned long long iecDiv; // @synthesize iecDiv=_iecDiv;
@property unsigned long long iecAvgMult; // @synthesize iecAvgMult=_iecAvgMult;
@property unsigned long long iecMinMult; // @synthesize iecMinMult=_iecMinMult;
@property unsigned long long iecDecayMult; // @synthesize iecDecayMult=_iecDecayMult;
@property unsigned long long iecMaxSeconds; // @synthesize iecMaxSeconds=_iecMaxSeconds;
@property unsigned long long timerMinSeconds; // @synthesize timerMinSeconds=_timerMinSeconds;
@property unsigned long long cMin; // @synthesize cMin=_cMin;
@property unsigned long long iecMinSeconds; // @synthesize iecMinSeconds=_iecMinSeconds;
@property unsigned long long cEpsilon; // @synthesize cEpsilon=_cEpsilon;
@property unsigned long long cMax; // @synthesize cMax=_cMax;
@property unsigned long long cLowThreshold; // @synthesize cLowThreshold=_cLowThreshold;
@property unsigned long long cHighThreshold; // @synthesize cHighThreshold=_cHighThreshold;
@property unsigned long long cDelta; // @synthesize cDelta=_cDelta;
@property unsigned long long slotCount; // @synthesize slotCount=_slotCount;
- (id)initWithTrendLogicBand:(long long)arg1 error:(id *)arg2;
- (id)initWithSlotCount:(unsigned long long)arg1 cDelta:(unsigned long long)arg2 cLowThreshold:(unsigned long long)arg3 cHighThreshold:(unsigned long long)arg4 cMin:(unsigned long long)arg5 cMax:(unsigned long long)arg6 cEpsilon:(unsigned long long)arg7 iecMinSeconds:(unsigned long long)arg8 iecMaxSeconds:(unsigned long long)arg9 iecDecayMult:(unsigned long long)arg10 iecMinMult:(unsigned long long)arg11 iecAvgMult:(unsigned long long)arg12 iecDiv:(unsigned long long)arg13 timerMinSeconds:(unsigned long long)arg14 timerLeewaySeconds:(unsigned long long)arg15 error:(id *)arg16;

@end

