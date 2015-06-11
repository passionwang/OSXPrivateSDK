/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate;

// Not exported
@interface GEOAlmanacRiseTransitSet : NSObject
{
    double _julianDay;
    struct CAARiseTransitSetDetails _riseTransitSet;
    NSDate *_sunrise;
    NSDate *_sunset;
}

@property(readonly, nonatomic) struct CAARiseTransitSetDetails riseTransitSet; // @synthesize riseTransitSet=_riseTransitSet;
@property(readonly, nonatomic) double julianDay; // @synthesize julianDay=_julianDay;
- (id).cxx_construct;
@property(readonly, nonatomic) NSDate *sunset;
@property(readonly, nonatomic) NSDate *sunrise;
- (void)dealloc;
- (id)initWithJulianDay:(double)arg1 riseTransitSet:(struct CAARiseTransitSetDetails)arg2;

@end

