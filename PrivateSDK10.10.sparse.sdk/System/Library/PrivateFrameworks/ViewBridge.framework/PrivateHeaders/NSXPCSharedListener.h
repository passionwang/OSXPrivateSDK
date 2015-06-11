/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSHashTable, NSMutableDictionary;

@interface NSXPCSharedListener : NSObject
{
    NSMutableDictionary *_listeners;
    NSHashTable *_delegates;
}

+ (void)warmUpClassNamed:(id)arg1 inServiceNamed:(id)arg2;
+ (id)sharedServiceListener;
+ (void)connectToService:(id)arg1 listener:(id)arg2 queue:(struct dispatch_queue_s *)arg3 completion:(id)arg4;
+ (id)connectionForListenerNamed:(id)arg1 fromServiceNamed:(id)arg2;
+ (id)endpointForListenerNamed:(id)arg1 fromServiceNamed:(id)arg2;
+ (id)endpointForListenerNamed:(id)arg1 fromConnection:(struct _xpc_connection_s *)arg2;
+ (id)endpointForListenerWithXPCName:(void *)arg1 fromConnection:(struct _xpc_connection_s *)arg2;
+ (id)endpointForListenerWithMessage:(void *)arg1 fromConnection:(struct _xpc_connection_s *)arg2 withListenerName:(void *)arg3;
+ (id)endpointForReply:(void *)arg1 withListenerName:(void *)arg2;
@property(retain) NSMutableDictionary *listeners; // @synthesize listeners=_listeners;
- (void)resumeSubService:(id)arg1;
- (void)resumeAdditionalService:(id)arg1;
- (void)resume;
- (BOOL)shouldAcceptNewConnection:(struct _xpc_connection_s *)arg1 forListenerNamed:(id)arg2;
- (void)didAcceptNewConnection:(struct _xpc_connection_s *)arg1;
- (void)addListener:(id)arg1 withName:(id)arg2;
- (void)addDelegate:(struct NSObject *)arg1;
- (void)dealloc;

@end

