/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BRCAppListMonitorDelegate-Protocol.h"

@class NSDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

// Not exported
@interface BRCCloudDocsAppsMonitor : NSObject <BRCAppListMonitorDelegate>
{
    NSDictionary *_cloudDocsContainersByAppID;
    NSDictionary *_appIDsByContainerID;
    NSMutableSet *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)cloudDocsAppsMonitor;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isApplicationInstalledForContainerID:(id)arg1;
- (id)allApplicationIdentifiers;
- (id)applicationIdentifiersForContainerID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)appListChanged;
- (void)_start;
- (void)forceRefetchAppList;
- (void)_refetchApps;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

