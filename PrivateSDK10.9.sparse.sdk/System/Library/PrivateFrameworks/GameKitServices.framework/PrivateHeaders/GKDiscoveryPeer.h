//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKSimpleTimerDelegate.h"

@class GKDiscoveryPeerConnection, GKSimpleTimer, NSMutableArray, NSMutableSet, NSNumber, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface GKDiscoveryPeer : NSObject <GKSimpleTimerDelegate>
{
    NSString *_serviceName;
    NSString *_playerID;
    NSString *_deviceID;
    NSMutableSet *_interfaces;
    NSMutableArray *_orderedInterfaces;
    NSMutableArray *_attemptedInterfaces;
    GKDiscoveryPeerConnection *_trialConnection;
    NSNumber *_chosenInterface;
    BOOL _shouldSignalDiscovery;
    NSMutableArray *_sendDataBuffer;
    GKDiscoveryPeerConnection *_connection;
    GKSimpleTimer *_resolveTimer;
    CDUnknownBlockType _resolveTimeoutHandler;
    NSObject<OS_dispatch_queue> *_syncQueue;
    int _state;
    double _discoveryTimeStamp;
}

@property(copy, nonatomic) CDUnknownBlockType resolveTimeoutHandler; // @synthesize resolveTimeoutHandler=_resolveTimeoutHandler;
@property(retain, nonatomic) GKSimpleTimer *resolveTimer; // @synthesize resolveTimer=_resolveTimer;
@property(nonatomic) double discoveryTimeStamp; // @synthesize discoveryTimeStamp=_discoveryTimeStamp;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *sendDataBuffer; // @synthesize sendDataBuffer=_sendDataBuffer;
@property(retain, nonatomic) GKDiscoveryPeerConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) BOOL shouldSignalDiscovery; // @synthesize shouldSignalDiscovery=_shouldSignalDiscovery;
@property(retain, nonatomic) GKDiscoveryPeerConnection *trialConnection; // @synthesize trialConnection=_trialConnection;
@property(retain, nonatomic) NSNumber *chosenInterface; // @synthesize chosenInterface=_chosenInterface;
@property(retain, nonatomic) NSMutableArray *attemptedInterfaces; // @synthesize attemptedInterfaces=_attemptedInterfaces;
@property(retain, nonatomic) NSMutableArray *orderedInterfaces; // @synthesize orderedInterfaces=_orderedInterfaces;
@property(retain, nonatomic) NSMutableSet *interfaces; // @synthesize interfaces=_interfaces;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)timeout:(id)arg1;
- (void)flushDataBuffer;
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)cleanUpForBrowse;
- (void)didLoseInterface:(id)arg1;
- (void)stopResolveTimer;
- (void)startResolveTimerWithHandler:(CDUnknownBlockType)arg1;
- (id)nextInterfaceIndex;
- (id)description;
- (id)stringForState:(int)arg1;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1;
- (BOOL)parseServiceNameForInit:(id)arg1;

@end

