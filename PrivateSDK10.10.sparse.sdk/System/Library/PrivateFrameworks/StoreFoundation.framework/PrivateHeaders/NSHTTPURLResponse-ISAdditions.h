/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSHTTPURLResponse.h"

@interface NSHTTPURLResponse (ISAdditions)
- (long long)maxExpectedContentLength;
- (BOOL)getAppleMaxAge:(double *)arg1;
- (double)expirationInterval;
- (id)expirationDate;
- (id)_dateFromExpires;
- (BOOL)_getCacheControlMaxAge:(double *)arg1;
@end

