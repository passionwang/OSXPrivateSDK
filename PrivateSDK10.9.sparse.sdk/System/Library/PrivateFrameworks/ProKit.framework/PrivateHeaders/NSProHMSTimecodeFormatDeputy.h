//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProKit/NSProFormatDeputy.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class NSNumberFormatter;

__attribute__((visibility("hidden")))
@interface NSProHMSTimecodeFormatDeputy : NSProFormatDeputy <NSCoding, NSCopying>
{
    long long pHtf_secondsDecimalPlaces;
    BOOL pHtf_has24HourRollover;
    NSNumberFormatter *pHtf_secondsDecimalPlacesFormatter;
}

+ (long long)version;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)formatterForSegmentTag:(long long)arg1 inObjectValue:(id)arg2;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 forSegmentWithTag:(long long)arg3 inObjectValue:(id)arg4 errorDescription:(id *)arg5;
- (void)getObjectValue:(id *)arg1 incrementingSegmentWithTag:(long long)arg2 byIncrement:(long long)arg3 inObjectValue:(id)arg4;
- (struct _NSRange)substringRangeForSegmentWithTag:(long long)arg1 inObjectValue:(id)arg2;
- (void)segmentWithTag:(long long)arg1 hasPaddingAtLeft:(char *)arg2 atRight:(char *)arg3 inObjectValue:(id)arg4;
- (long long)defaultSelectedSegmentTagInObjectValue:(id)arg1;
- (long long)segmentFieldWidthForTag:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentIndexForTag:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentTagForIndex:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentCountInObjectValue:(id)arg1;
- (id)requiredProtocol;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 formatter:(id)arg3 errorDescription:(id *)arg4;
- (id)stringForObjectValue:(id)arg1 formatter:(id)arg2;
- (void)setHas24HourRollover:(BOOL)arg1;
- (void)setSecondsDecimalPlaces:(long long)arg1;
- (BOOL)has24HourRollover;
- (long long)secondsDecimalPlaces;
- (void)dealloc;
- (id)init;
- (id)defaultNilSymbol;
- (id)secondsDecimalPlacesFormatter;
- (long long)privateDigitsInHoursForObjectValue:(id)arg1;
- (void)privateConfigureSecondsDecimalPlacesFormatter;
- (BOOL)privateScanHMSNumberString:(id)arg1 intoFieldArray:(long long *)arg2 length:(long long)arg3 indexAtEnd:(long long *)arg4;
- (long long)privateMaximumCurrentFields;

@end

