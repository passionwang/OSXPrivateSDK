/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XQueryAtomicType-Protocol.h"

@class NSString;

// Not exported
@interface XQueryDuration : NSObject <XQueryAtomicType>
{
    BOOL isNeg;
    int year;
    int month;
    int day;
    int hour;
    int minute;
    double second;
}

+ (id)durationWithString:(id)arg1;
- (id)XQueryCastAs:(long long)arg1 forContext:(id)arg2;
- (id)XQueryStringValue;
- (long long)XQueryTypeID;
- (id)initWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

