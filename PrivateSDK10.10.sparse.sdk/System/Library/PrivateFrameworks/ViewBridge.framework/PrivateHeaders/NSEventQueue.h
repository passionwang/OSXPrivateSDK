/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface NSEventQueue : NSObject
{
    NSMutableArray *_events;
    unsigned long long _capacity;
}

- (id)dequeueTimestamp:(double)arg1;
- (id)nextEventEqualToEvent:(id)arg1 dequeue:(BOOL)arg2;
- (void)enqueue:(id)arg1;
- (void)logEventCount;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

@end

