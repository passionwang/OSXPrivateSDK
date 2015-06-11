/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSMutableArray, NSString, NSTimer;

@interface IMSystemMonitor : NSObject
{
    BOOL _watchesDataProtectionLockState;
    BOOL _watchesScreenLightState;
    BOOL _receivesMemoryWarnings;
    BOOL _willSleep;
    BOOL _screenLocked;
    BOOL _screensaverActive;
    BOOL _watchesSystemLockState;
    BOOL _underFirstLock;
    BOOL _active;
    BOOL _backingUp;
    BOOL _switchedOut;
    BOOL _screenLit;
    BOOL _systemLocked;
    BOOL _idleOverride;
    BOOL _usesPowerNotifications;
    BOOL _usesSystemIdleState;
    BOOL _inBackground;
    int _dataProtectionState;
    int _userIdleToken;
    NSMutableArray *_listeners;
    NSDate *_idleStart;
    NSTimer *_timer;
    NSDate *_dateScreenLightLastChanged;
    NSDate *_dateSystemLockLastChanged;
    NSString *_userID;
    double _delayTime;
    NSMutableArray *_earlyListeners;
}

+ (id)sharedInstance;
@property(nonatomic) int userIdleToken; // @synthesize userIdleToken=_userIdleToken;
@property(readonly, nonatomic) BOOL isInBackground; // @synthesize isInBackground=_inBackground;
@property(nonatomic) BOOL usesSystemIdleState; // @synthesize usesSystemIdleState=_usesSystemIdleState;
@property(nonatomic) BOOL usesPowerNotifications; // @synthesize usesPowerNotifications=_usesPowerNotifications;
@property(retain, nonatomic) NSMutableArray *_earlyListeners; // @synthesize _earlyListeners;
@property(nonatomic) BOOL _idleOverride; // @synthesize _idleOverride;
@property(nonatomic) double _delayTime; // @synthesize _delayTime;
@property(retain, nonatomic) NSString *_userID; // @synthesize _userID;
@property(readonly, nonatomic) BOOL isSystemLocked; // @synthesize isSystemLocked=_systemLocked;
@property(readonly, retain, nonatomic) NSDate *dateSystemLockLastChanged; // @synthesize dateSystemLockLastChanged=_dateSystemLockLastChanged;
@property(readonly, retain, nonatomic) NSDate *dateScreenLightLastChanged; // @synthesize dateScreenLightLastChanged=_dateScreenLightLastChanged;
@property(readonly, nonatomic) BOOL isScreenLit; // @synthesize isScreenLit=_screenLit;
@property(retain, nonatomic) NSTimer *_timer; // @synthesize _timer;
@property(retain, nonatomic) NSDate *_idleStart; // @synthesize _idleStart;
@property(retain, nonatomic) NSMutableArray *_listeners; // @synthesize _listeners;
@property(nonatomic) BOOL isFastUserSwitched; // @synthesize isFastUserSwitched=_switchedOut;
@property(readonly, nonatomic) BOOL isBackingUp; // @synthesize isBackingUp=_backingUp;
@property(nonatomic, setter=setActive:) BOOL isActive; // @synthesize isActive=_active;
@property(nonatomic) BOOL _underFirstLock; // @synthesize _underFirstLock;
@property(nonatomic) int _dataProtectionState; // @synthesize _dataProtectionState;
@property(nonatomic) BOOL watchesSystemLockState; // @synthesize watchesSystemLockState=_watchesSystemLockState;
@property(readonly, nonatomic) BOOL isScreenSaverActive; // @synthesize isScreenSaverActive=_screensaverActive;
@property(readonly, nonatomic) BOOL systemIsSleeping; // @synthesize systemIsSleeping=_willSleep;
@property(nonatomic) BOOL receivesMemoryWarnings; // @synthesize receivesMemoryWarnings=_receivesMemoryWarnings;
@property(nonatomic) BOOL watchesScreenLightState; // @synthesize watchesScreenLightState=_watchesScreenLightState;
@property(nonatomic) BOOL watchesDataProtectionLockState; // @synthesize watchesDataProtectionLockState=_watchesDataProtectionLockState;
- (void)_receivedMemoryNotification;
- (void)_unregisterForLoginWindowNotifications;
- (void)_registerForLoginWindowNotifications;
- (void)_handleLoginWindowNotification:(id)arg1;
- (void)_forceSuspended;
- (void)_forceResumed;
@property(readonly, nonatomic) BOOL isSetup;
- (void)_unregisterForRestoreNotifications;
- (void)_registerForRestoreNotifications;
- (void)_setupStateChanged;
- (void)_restoreDidStop;
- (void)_restoreDidStart;
- (void)_checkRestoredFromBackup;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_removeEarlyListener:(id)arg1;
- (void)_addEarlyListener:(id)arg1;
- (void)_systemWillShutdown;
@property(readonly, nonatomic) BOOL systemIsShuttingDown;
@property(readonly, nonatomic) double systemIdleTime;
@property(readonly, nonatomic) BOOL isSystemIdle;
- (void)_checkIdleTime:(id)arg1;
- (void)_clearIdleTimer;
- (void)_armIdleTimer;
- (void)_overrideAndDisableIdleTimer:(BOOL)arg1;
- (void)_setIdleState:(BOOL)arg1;
- (void)_updateIdleState;
- (void)_setSystemLockState:(BOOL)arg1;
- (void)_setSystemScreenState:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isUnderFirstDataProtectionLock;
@property(readonly, nonatomic) BOOL isUnderDataProtectionLock;
- (void)_setDataProtectionLockState:(int)arg1;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_screenSaverStarted:(id)arg1;
- (void)_screenSaverStopped:(id)arg1;
- (void)_postScreenSaverStarted;
- (void)_notificationCenterDidDisappear:(id)arg1;
- (void)_notificationCenterWillAppear:(id)arg1;
- (void)_resume:(id)arg1;
- (void)_suspend:(id)arg1;
- (void)_resumeEventsOnly:(id)arg1;
- (void)_suspendEventsOnly:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
@property(readonly, nonatomic) BOOL isScreenLocked; // @synthesize isScreenLocked=_screenLocked;
- (void)_screenUnlocked:(id)arg1;
- (void)_screenLocked:(id)arg1;
- (void)_postScreenLocked;
- (void)_systemWillSleep;
- (void)_systemDidWake;
- (void)_deliverNotificationSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;

@end

