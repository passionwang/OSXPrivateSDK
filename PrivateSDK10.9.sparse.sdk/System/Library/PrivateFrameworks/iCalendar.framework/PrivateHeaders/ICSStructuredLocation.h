//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSStructuredLocation : ICSProperty
{
}

@property(retain) NSString *routing;
@property(retain) NSString *address;
@property(retain) NSString *displayName;
@property(retain) NSString *abURLString;
@property double radius;
@property(retain) NSString *loctype;
@property(retain) NSString *title;
@property(retain) NSString *fmtype;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

