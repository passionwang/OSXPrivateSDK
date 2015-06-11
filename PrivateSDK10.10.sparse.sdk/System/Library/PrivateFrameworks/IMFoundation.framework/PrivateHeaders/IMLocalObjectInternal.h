/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMMessageContext, NSLock, NSMutableArray, NSProtocolChecker, NSRecursiveLock, NSString;

@interface IMLocalObjectInternal : NSObject
{
    IMMessageContext *_currentMessageContext;
    NSRecursiveLock *_lock;
    id _target;
    struct _xpc_connection_s *_connection;
    struct dispatch_queue_s *_queue;
    struct dispatch_semaphore_s *_deathLock;
    NSString *_portName;
    NSProtocolChecker *_protocolChecker;
    NSMutableArray *_componentQueue;
    NSLock *_componentQueueLock;
    NSRecursiveLock *_componentQueueProcessingLock;
    BOOL _pendingComponentQueueProcessing;
    BOOL _busyForwarding;
    BOOL _offMainThread;
}

- (void)dealloc;

@end

