/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iCalendar/ICSPredefinedValue.h>

@class NSString;

@interface ICSStatusValue : ICSPredefinedValue
{
    NSString *_statusString;
}

+ (id)statusTypeFromCode:(int)arg1 statusString:(id)arg2;
+ (id)statusTypeFromCode:(int)arg1;
+ (id)statusValueFromICSString:(id)arg1;
@property(retain) NSString *statusString; // @synthesize statusString=_statusString;
- (void)dealloc;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

