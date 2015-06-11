//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CALPropertyMultiValue.h>

@class CALDate, CALTimeRange, NSMutableArray, NSMutableDictionary;

@interface CoreRecurrenceRule : CALPropertyMultiValue
{
    CALTimeRange *_range;
    NSMutableDictionary *_ruleCachedEndDates;
    NSMutableArray *_cachedDates;
    CALTimeRange *_cachedTimeRange;
    CALDate *_cachedStartDate;
}

+ (id)recurrenceRuleFromICSString:(id)arg1;
+ (id)orDaysOfWeekString:(id)arg1;
+ (id)andDaysOfWeekString:(id)arg1;
+ (id)customDayCombinationDescription:(id)arg1;
+ (id)numberedWeekDayString:(id)arg1;
+ (id)daysOfWeek;
+ (int)daysTypeForDayArray:(id)arg1;
+ (id)weekDayPositionAsString:(long long)arg1;
+ (id)dayOfMonthAsString:(long long)arg1;
+ (id)recurrenceWithStr:(const char *)arg1 withGlobalTz:(id)arg2;
- (id)expandFastPathDatesInCalendar:(id)arg1 recurrenceStart:(id)arg2 expansionRange:(id)arg3;
- (unsigned long long)_recurrenceUnitsToJumpBetween:(id)arg1 rangeStart:(id)arg2 inCalendar:(id)arg3;
- (BOOL)_canJumpRecurrenceUnits;
- (BOOL)_shouldExcludeDate:(id)arg1 inCalendar:(id)arg2;
- (id)_fastPathDeltaComponentsWithCount:(unsigned long long)arg1;
- (BOOL)fastPathEligible;
- (BOOL)_isUniversallyFastPathIneligible;
- (id)ICSString;
- (void)appendICSStringToString:(id)arg1;
- (void)appendICSStringForCALDate:(id)arg1 toString:(id)arg2;
- (void)appendCommaDelimitedNumbers:(id)arg1 toString:(id)arg2;
- (void)appendCommaDelimitedCALWeekDayNumbers:(id)arg1 toString:(id)arg2;
- (void)appendCALWeekDayNumber:(id)arg1 toString:(id)arg2;
- (id)ICSStringForCALDay:(unsigned long long)arg1;
- (BOOL)isEqualToRule:(id)arg1 consideringStartDate:(id)arg2;
- (id)acceptableMoveToTimeRangeForDate:(id)arg1;
- (id)proposedRuleForMovingFrom:(id)arg1 to:(id)arg2 changes:(id)arg3;
- (BOOL)ruleMatchesDate:(id)arg1;
- (id)realEndDateOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (void)addRecStartDateIfNeeded:(id)arg1 withTimeRange:(id)arg2 withRecurrenceStart:(id)arg3;
- (id)filterOccurrences:(id)arg1 inTimeRange:(id)arg2 excludingEndDate:(BOOL)arg3;
- (id)generateTimeRulePartOnArray:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)applyRulePart:(SEL)arg1 onArray:(id)arg2 withRecurrenceStart:(id)arg3;
- (int)lastSpecifiedRulePartOrder;
- (id)filterBySetpos:(id)arg1;
- (id)generateSimpleTimeRuleOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)generateBySecondOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)generateByMinuteOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)generateByHourOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)generateByDayOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)generatePositionalByDayOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)generatePeriodicByDayOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (void)addPeriodicDay:(unsigned long long)arg1 toArray:(id)arg2 withTimeRange:(id)arg3;
- (int)numberOfDaysUntilPreviousOccurrenceOfDay:(int)arg1 beforeDate:(id)arg2;
- (int)numberOfDaysUntilNextOccurrenceOfDay:(int)arg1 afterDate:(id)arg2;
- (id)generateByMonthDayOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)generateByYearDayOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)generateByWeeknoOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)week:(int)arg1 forYear:(int)arg2 withTimeZone:(id)arg3;
- (id)generateByMonthOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (void)dealloc;
- (id)realOccurrencesOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2 alwaysIncludeStartDate:(BOOL)arg3;
- (id)occurrencesOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)occurrencesOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2 alwaysIncludeStartDate:(BOOL)arg3;
- (BOOL)isInfinite;
- (id)setInfinite;
- (id)numberOfOccurrences:(long long)arg1 withRecurrenceStart:(id)arg2;
- (id)computeAndCacheEndDateOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)cachedEndDateForRecurrenceStart:(id)arg1;
- (id)cachedEndDateOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)setWeekStart:(unsigned long long)arg1;
- (unsigned long long)weekStart;
- (BOOL)hasWeekStart;
- (id)setBySetpos:(id)arg1;
- (id)bySetpos;
- (id)setBySecond:(id)arg1;
- (id)bySecond;
- (id)setByMinute:(id)arg1;
- (id)byMinute;
- (id)setByHour:(id)arg1;
- (id)byHour;
- (id)setByDay:(id)arg1;
- (id)byDay;
- (id)setByMonthDay:(id)arg1;
- (id)byMonthDay;
- (id)setByYearDay:(id)arg1;
- (id)byYearDay;
- (id)setByWeekno:(id)arg1;
- (id)byWeekno;
- (id)setByMonth:(id)arg1;
- (id)byMonth;
- (BOOL)hasByParameter;
- (int)interval;
- (id)setInterval:(int)arg1;
- (id)setUntilDate:(id)arg1;
- (id)untilDate;
- (long long)count;
- (id)setCount:(long long)arg1;
- (id)range;
- (id)setRange:(id)arg1;
- (id)cachedEndDates;
- (id)init;
- (BOOL)isEqualToPropertyValue:(id)arg1;
- (id)description;
- (id)propertyForName:(id)arg1;
- (BOOL)hasProperty:(id)arg1;
- (void)removeProperty:(id)arg1;
- (void)setProperty:(id)arg1 withValue:(id)arg2;
- (id)initWithRecurrenceRule:(id)arg1;
- (id)humanReadableDescriptionForStartDate:(id)arg1;
- (id)untilNSCalendarDate;
- (void)setUntilNSCalendarDate:(id)arg1;
- (id)addDatesOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2 alwaysIncludeStartDate:(BOOL)arg3;
- (id)cachedDatesOnTimeRange:(id)arg1;
- (BOOL)isTimeRangeCached:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)setCachedTimeRange:(id)arg1;
- (id)setCachedStartDate:(id)arg1;
- (id)setCachedDates:(id)arg1;
- (id)addCachedDates:(id)arg1;
- (id)invalidateCache;

@end

