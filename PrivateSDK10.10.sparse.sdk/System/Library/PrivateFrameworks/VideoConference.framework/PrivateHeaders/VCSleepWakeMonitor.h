/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface VCSleepWakeMonitor : NSObject
{
    unsigned int root_port;
    unsigned int notifierObject;
    struct IONotificationPort *notifyPortRef;
}

+ (id)VCSleepWakeMonitorSingleton;
- (unsigned int)rootPort;
- (void)endMonitor;
- (BOOL)startMonitor;

@end

