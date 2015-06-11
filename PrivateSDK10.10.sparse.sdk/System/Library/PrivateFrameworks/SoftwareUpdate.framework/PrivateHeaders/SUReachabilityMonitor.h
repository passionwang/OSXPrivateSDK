/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SUReachabilityMonitor : NSObject
{
    struct __SCNetworkReachability *_reachability;
    struct dispatch_queue_s *_notifyQueue;
    NSString *_hostName;
    NSString *_directHostName;
    BOOL _observing;
    id _notifyBlock;
}

+ (id)_directHostToCheckConsideringProxy:(id)arg1;
+ (BOOL)_isHostReachableWithFlags:(unsigned int)arg1;
+ (BOOL)waitForNetworkAvailabilityWithTimeout:(long long)arg1 forHost:(id)arg2;
+ (BOOL)isHostReachable:(id)arg1;
- (void)_handleChangeInReachability:(unsigned int)arg1;
- (void)_stopListeningForReachabilityChanges;
- (BOOL)_startListeningForReachabilityChanges;
- (void)stop;
- (void)start;
- (BOOL)isHostReachable;
- (void)finalize;
- (void)dealloc;
- (id)initWithHostName:(id)arg1 notifyQueue:(struct dispatch_queue_s *)arg2 usingBlock:(id)arg3;

@end

