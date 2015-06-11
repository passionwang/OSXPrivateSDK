//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CloudTabKeyValueStore, NSArray, NSTimer;

__attribute__((visibility("hidden")))
@interface CloudTabStore : NSObject
{
    CloudTabKeyValueStore *_keyValueStore;
    double _lastSaveTabsTimerInterval;
    NSTimer *_saveTabsTimer;
    NSArray *_syncedCloudTabDevices;
    BOOL _suppressSavingTabs;
    BOOL _cloudTabsSupported;
}

+ (id)sharedCloudTabStore;
@property(nonatomic) BOOL cloudTabsSupported; // @synthesize cloudTabsSupported=_cloudTabsSupported;
@property(nonatomic) BOOL suppressSavingTabs; // @synthesize suppressSavingTabs=_suppressSavingTabs;
@property(nonatomic) double lastSaveTabsTimerInterval; // @synthesize lastSaveTabsTimerInterval=_lastSaveTabsTimerInterval;
@property(retain, nonatomic) CloudTabKeyValueStore *keyValueStore; // @synthesize keyValueStore=_keyValueStore;
- (void)_handleQuotaViolation;
- (void)_refreshCloudTabsSupported;
- (BOOL)_cloudTabsEntitlementSupported;
- (void)_pruneExpiredDevices;
- (void)_clearTabsForFirstDuplicateDevice;
- (BOOL)_atLeastOneOtherActiveDeviceIsRegistered;
- (BOOL)_currentDeviceIsRegistered;
- (BOOL)_shouldSaveTabsForCurrentDevice;
- (void)_cancelPendingSaveTabsForCurrentDevice;
- (id)_dictionaryForCurrentDeviceWithBrowserTabs:(Vector_1c2b08fa *)arg1;
- (id)_dictionaryForBrowserTab:(const struct BrowserTab *)arg1;
- (BOOL)_browserTabShouldBeSynced:(const struct BrowserTab *)arg1;
- (id)_currentDeviceName;
- (void)_iCloudLoggedInStateDidChange:(id)arg1;
- (void)_syncedCloudTabDevicesDidChange;
- (void)_keyValueStoreDidChangeExternally:(id)arg1;
- (void)debugClearTabsForAllDevices;
- (void)clearTabsForCurrentDevice;
- (void)debugSaveTabsForCurrentDeviceUsingNewUUID;
- (void)_saveTabsForCurrentDeviceForcingSaveEvenIfUnchanged:(BOOL)arg1;
- (BOOL)_shouldSaveCurrentDeviceDictionary:(id)arg1;
- (void)saveTabsForCurrentDevice;
- (void)saveTabsForCurrentDeviceSoon;
- (void)_saveTabsForCurrentDeviceDelayTimerFired;
- (void)_saveTabsForCurrentDeviceAfterDelay:(double)arg1;
- (id)syncedCloudTabDevices;
- (void)dealloc;
- (id)init;

@end

