//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>;

__attribute__((visibility("hidden")))
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

