/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>;

// Not exported
@interface RDSemaphore : NSObject
{
    NSObject<OS_dispatch_semaphore> *semaphore;
}

- (long long)signal;
- (long long)wait:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithCount:(long long)arg1;
- (id)init;

@end

