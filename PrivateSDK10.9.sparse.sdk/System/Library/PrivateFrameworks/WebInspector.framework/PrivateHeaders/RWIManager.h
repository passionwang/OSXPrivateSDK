//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RWIBaseManagerDelegate.h"

@class NSMutableDictionary, NSSet, RWIBaseManager;

@interface RWIManager : NSObject <RWIBaseManagerDelegate>
{
    id <RWIManagerDelegate> _delegate;
    RWIBaseManager *_baseManager;
    NSMutableDictionary *_inspectors;
    NSMutableDictionary *_channels;
    struct _AMDeviceNotificationContext *_notificationRef;
    int _notifyEnabledToken;
}

+ (id)sharedManager;
@property(nonatomic) id <RWIManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)receivedSetup:(id)arg1 forConnection:(id)arg2;
- (void)receivedData:(id)arg1 forDestination:(id)arg2;
- (id)_debuggerForDestination:(id)arg1;
- (void)willRemoveWebView:(id)arg1;
- (void)didAddWebView:(id)arg1;
- (void)willRemoveApplication:(id)arg1;
- (void)didAddApplication:(id)arg1;
- (void)serviceConnectionDidClose:(id)arg1;
- (void)socketDidCloseFromDebugger:(id)arg1;
- (void)socketSend:(id)arg1 fromDebugger:(id)arg2;
- (void)socketSetupForDebugger:(id)arg1;
- (void)inspectorWindowWillClose:(id)arg1;
- (void)serviceConnectionClosed:(id)arg1;
- (void)_simulatorRunning:(id)arg1;
- (void)_createSimulatorConnection;
- (void)_removeSimulator;
- (void)_addSimulator;
- (id)_simulatorDevice;
- (void)deviceNotification:(struct _AMDeviceNotificationInfo *)arg1;
- (void)deviceHasBasicInformation:(id)arg1;
- (void)_addDevice:(struct _AMDevice *)arg1;
- (void)_removeDevice:(struct _AMDevice *)arg1;
- (void)_sendDeviceRemovedEvent:(id)arg1;
- (void)_sendDeviceAddedEvent:(id)arg1;
- (void)indicateWebView:(id)arg1 enabled:(BOOL)arg2;
- (id)openInspectorForWebView:(id)arg1;
@property(readonly, nonatomic) NSSet *inspectors; // @dynamic inspectors;
@property(readonly, nonatomic) NSSet *capableDevices;
@property(readonly, nonatomic) NSSet *readyDevices; // @dynamic readyDevices;
@property(readonly, nonatomic) NSSet *devices; // @dynamic devices;
- (void)dealloc;
- (id)init;
- (void)unmanageDevice:(struct _AMDevice *)arg1;
- (id)manageDevice:(struct _AMDevice *)arg1;
- (id)deviceForAMDeviceRef:(struct _AMDevice *)arg1;
- (id)openChannelForWebView:(id)arg1;

@end

