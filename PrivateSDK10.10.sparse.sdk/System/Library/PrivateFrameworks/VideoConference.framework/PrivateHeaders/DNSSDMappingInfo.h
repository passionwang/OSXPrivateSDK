/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSConditionLock;

// Not exported
@interface DNSSDMappingInfo : NSObject
{
    NSConditionLock *queryCondLock;
    struct tagNetAddrMapInfo mapResult;
    int hasTimer;
    struct __CFRunLoopTimer *timer;
    struct __CFSocket *socketRef;
    struct __CFRunLoopSource *rls;
}

@property struct __CFSocket *socketRef; // @synthesize socketRef;
@property struct __CFRunLoopSource *rls; // @synthesize rls;
- (struct tagIPPORT)createExternalIPPort;
- (id)toString;
- (unsigned short)requestedPublicPort;
- (int)queryAnswered;
- (unsigned int)ttl;
- (unsigned short)publicPort;
- (unsigned short)privatePort;
- (unsigned int)protocol;
- (unsigned int)publicAddress;
- (int)errorCode;
- (unsigned int)interfaceIndex;
- (unsigned int)flags;
- (struct _DNSServiceRef_t *)sdRef;
- (int)hasTimer;
- (void)addTimerForRunLoop:(struct __CFRunLoop *)arg1 callBack:(void *)arg2;
- (void)setMapResult:(struct tagNetAddrMapInfo *)arg1;
- (void)dealloc;
- (id)initWithMapResult:(struct tagNetAddrMapInfo *)arg1;
- (id)initWithRef:(struct _DNSServiceRef_t *)arg1;

@end

