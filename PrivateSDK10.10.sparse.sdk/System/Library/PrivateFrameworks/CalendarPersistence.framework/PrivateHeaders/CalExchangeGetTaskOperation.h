/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalExchangeGetItemOperation.h>

@interface CalExchangeGetTaskOperation : CalExchangeGetItemOperation
{
}

+ (id)responseShape;
- (BOOL)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)createOrUpdateItems:(id)arg1 inCalendar:(id)arg2;
- (void)updateTask:(id)arg1 inCalendar:(id)arg2 withTask:(id)arg3;

@end

