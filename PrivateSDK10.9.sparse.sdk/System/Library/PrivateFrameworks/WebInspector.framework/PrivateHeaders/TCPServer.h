//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface TCPServer : NSObject
{
    id <TCPServerDelegate> _delegate;
    int _listenSocket;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_source> *_serverSource;
    NSMutableArray *_connections;
}

@property(readonly, nonatomic) id <TCPServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)connectionClosed:(id)arg1;
- (BOOL)_createListenDispatchSource;
- (BOOL)_listenOnPort:(unsigned short)arg1;
- (void)dealloc;
- (id)initWithLaunchdSocketName:(const char *)arg1 delegate:(id)arg2;
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2;
- (id)_initWithDelegate:(id)arg1;

@end

