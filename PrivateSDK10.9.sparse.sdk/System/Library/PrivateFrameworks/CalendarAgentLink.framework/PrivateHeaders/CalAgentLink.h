//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface CalAgentLink : NSObject
{
    NSXPCConnection *_connection;
    id <CalendarAgentClient> _exportedObject;
}

+ (void)broadcastToOtherClients:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (void)broadcastToOtherClients:(SEL)arg1 withObject:(id)arg2;
+ (void)broadcastToOtherClients:(SEL)arg1;
+ (id)agentWithErrorBlock:(CDUnknownBlockType)arg1;
+ (id)agent;
+ (void)setExportedObject:(id)arg1;
+ (void)tearDownAgentLink;
+ (id)startWithProxy:(id)arg1;
+ (id)sharedInstance;
- (id)agentWithErrorBlock:(CDUnknownBlockType)arg1;
- (id)agent;
- (void)dealloc;
- (void)tearDown;
- (id)init;
- (void)_handleCalAgentAliveNotification;
- (id)initWithExportedObject:(id)arg1;
- (void)_setExportedObject:(id)arg1;

@end

