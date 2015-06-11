/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CalDateRange, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface CalExchangeGetUserAvailabilityOperation : NSObject
{
    NSArray *_addresses;
    CalDateRange *_timeRange;
    NSString *_maskedSharedUID;
    NSMutableDictionary *_emailToFreeBusySpans;
    NSMutableDictionary *_emailToEventDetailsArray;
    NSString *_messageTracerUID;
    NSDate *_messageTracerStartDate;
}

+ (int)_calFreeBusyFromMergedFreeBusy:(unsigned short)arg1;
+ (int)_calFreeBusyFromEWSFreeBusy:(int)arg1;
+ (id)_busySpan:(int)arg1 forDate:(id)arg2 startsInMinutes:(unsigned long long)arg3 endsInMinutes:(unsigned long long)arg4 inCalendar:(id)arg5;
+ (id)_busySpan:(int)arg1 startComponents:(id)arg2 endComponents:(id)arg3 inCalendar:(id)arg4;
+ (id)_UTCSerializableTimeZone;
@property(readonly) NSDictionary *emailToEventDetailsArray; // @synthesize emailToEventDetailsArray=_emailToEventDetailsArray;
@property(readonly) NSDictionary *emailToFreeBusySpans; // @synthesize emailToFreeBusySpans=_emailToFreeBusySpans;
- (void)_processResponse:(id)arg1;
- (BOOL)executeSynchronouslyWithPrincipal:(id)arg1 withError:(id *)arg2;
- (void)dealloc;
- (id)initWithMaskedSharedUID:(id)arg1 addresses:(id)arg2 timeRange:(id)arg3;

@end

