//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSRecurrencePatternBaseType.h>

@interface EWSRelativeYearlyRecurrencePatternType : EWSRecurrencePatternBaseType
{
    int DaysOfWeek;
    int DayOfWeekIndex;
    int Month;
}

+ (id)definition;
@property(nonatomic) int Month; // @synthesize Month;
@property(nonatomic) int DayOfWeekIndex; // @synthesize DayOfWeekIndex;
@property(nonatomic) int DaysOfWeek; // @synthesize DaysOfWeek;
- (id)description;

@end

