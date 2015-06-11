//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class MyLightPipe, NSConditionLock, NSData, NSLock, NSNetServiceBrowser, NSPipe, NSString, SlingShotLightCFSocket, SlingShotLightSocket, SlingShotRock;

@interface SlingShotConnection : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSNetServiceBrowser *browser;
    NSLock *browserLock;
    NSString *_bonjourType;
    NSString *_bonjourName;
    NSString *_bonjourMountedName;
    int _state;
    int fileDescriptor;
    SlingShotLightCFSocket *controlSocket;
    BOOL _useSSL;
    NSLock *_sendRequestLock;
    NSLock *_sendRockLock;
    NSLock *_reconnectLock;
    BOOL bonjourOn;
    NSData *cSocketAddress;
    BOOL cancelAllRequests;
    SlingShotLightSocket *requestWriter;
    NSData *dSocketAddress;
    SlingShotRock *_dataRock;
    MyLightPipe *_SSLtoBOMPipe;
    NSPipe *_pipeAssassin;
    BOOL _connectionLost;
    BOOL _readThread;
    NSConditionLock *_readInProgress;
    unsigned long long _bytesRead;
}

- (BOOL)connectAndAuthenticate:(id)arg1;
- (int)sendDataRock:(id)arg1;
- (void)asyncRead;
- (void)_setUpDataRead;
- (void)resetData;
- (int)sendRock:(id)arg1;
- (int)sendRock:(id)arg1 withTimeout:(unsigned long long)arg2;
- (int)sendOneWayRock:(id)arg1;
- (int)_sendRockRequest:(id)arg1;
- (void)reset;
- (BOOL)reconnect;
- (void)_wait:(long long)arg1;
- (BOOL)isConnected;
- (int)fileDescriptor;
- (void)setState:(int)arg1;
- (int)state;
- (void)disconnect;
- (void)connect;
- (id)initWithName:(id)arg1 useSSL:(BOOL)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)_deallocNSNetBrowser;
- (void)_startBrowsingForServices;
- (BOOL)isBonjourDiscoveryOn;
- (void)stopBrowsingForServices;
- (void)startBrowsingForServices;

@end

