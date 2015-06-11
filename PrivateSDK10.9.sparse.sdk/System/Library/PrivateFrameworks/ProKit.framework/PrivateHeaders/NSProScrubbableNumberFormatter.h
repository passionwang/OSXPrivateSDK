//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumberFormatter.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSProScrubbableFormatter.h"

@interface NSProScrubbableNumberFormatter : NSNumberFormatter <NSProScrubbableFormatter, NSCopying, NSCoding>
{
    long long _scrubbingType;
    long long _fractionDigitsForSingleDigitScrubbingType;
    long long _fractionDigitsForWholeNumberScrubbingType;
    long long _integerDigitsForSingleDigitScrubbingType;
    long long _integerDigitsForWholeNumberScrubbingType;
    void *reserved1;
    void *reserved2;
    void *reserved3;
}

+ (long long)version;
- (BOOL)allowsSegmentEditing;
- (id)formatterForSegmentTag:(long long)arg1 inObjectValue:(id)arg2;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 forSegmentWithTag:(long long)arg3 inObjectValue:(id)arg4 errorDescription:(id *)arg5;
- (void)getObjectValue:(id *)arg1 incrementingSegmentWithTag:(long long)arg2 byIncrement:(long long)arg3 inObjectValue:(id)arg4;
- (void)getObjectValue:(id *)arg1 incrementingSegmentWithTag:(long long)arg2 byFloatIncrement:(double)arg3 inObjectValue:(id)arg4;
- (struct _NSRange)substringRangeForSegmentWithTag:(long long)arg1 inObjectValue:(id)arg2;
- (void)segmentWithTag:(long long)arg1 hasPaddingAtLeft:(char *)arg2 atRight:(char *)arg3 inObjectValue:(id)arg4;
- (long long)defaultSelectedSegmentTagInObjectValue:(id)arg1;
- (long long)segmentFieldWidthForTag:(long long)arg1 inObjectValue:(id)arg2;
- (BOOL)segmentFieldContainsDecimalSeparatorForTag:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentIndexForTag:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentTagForIndex:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentCountInObjectValue:(id)arg1;
- (id)defaultObjectPrototype;
- (void)setZeroSymbol:(id)arg1;
- (void)setMinimum:(id)arg1;
- (void)setMaximum:(id)arg1;
- (void)setMinimumIntegerDigits:(unsigned long long)arg1;
- (void)setMinimumFractionDigits:(unsigned long long)arg1;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (id)legalCharacterSet;
- (void)setScrubbingType:(long long)arg1;
- (long long)scrubbingType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWholeNumberType;
- (id)init;
- (void)_prepareScrubbableNumberFormatterOfType:(long long)arg1;
- (double)privateIncrementValue:(double)arg1 by:(long long)arg2 powerOfTen:(long long)arg3;
- (id)privateClampToMinMax:(id)arg1;
- (id)deFactoMaximum;
- (id)deFactoMinimum;
- (void)privatePrepareAttributedStringForZero;
- (id)privateDefaultStringForZero;
- (BOOL)privateIsValidString:(id)arg1 forSegmentTag:(long long)arg2 inObjectValue:(id)arg3 errorDescription:(id *)arg4;
- (long long)privateLeadingSegmentTagForDoubleValue:(double)arg1;
- (long long)privatePowerOfTenForSegmentIndex:(long long)arg1 inDoubleValue:(double)arg2;
- (double)privateSanitizedValueForObject:(id)arg1;

@end

