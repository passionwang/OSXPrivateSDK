/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CALFloatingDateTime.h>

@interface CALDateOnly : CALFloatingDateTime
{
}

+ (id)dateOnlyFromDate:(id)arg1;
+ (id)dateOnlyWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3;
+ (id)date;
+ (id)dateOnlyArrayFromDateTimeArray:(id)arg1;
- (id)description;
- (id)dateByAddingYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6;
- (id)dateByAddingRawInterval:(double)arg1;
- (void)takeValueFrom:(id)arg1;
- (void)addSecondsInGMT:(long long)arg1;
- (void)addYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6;
- (void)setYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7;
- (id)NSDate;
- (id)representationID;
- (id)NSCalendarDateForISync;

@end

