/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSIntervalRecurrencePatternBaseType.h>

@class NSIndexSet;

@interface EWSWeeklyRecurrencePatternType : EWSIntervalRecurrencePatternBaseType
{
    NSIndexSet *_DaysOfWeek;
    int _FirstDayOfWeek;
}

+ (id)definition;
@property(nonatomic) int FirstDayOfWeek; // @synthesize FirstDayOfWeek=_FirstDayOfWeek;
@property(copy, nonatomic) NSIndexSet *DaysOfWeek; // @synthesize DaysOfWeek=_DaysOfWeek;
- (void)dealloc;

@end

