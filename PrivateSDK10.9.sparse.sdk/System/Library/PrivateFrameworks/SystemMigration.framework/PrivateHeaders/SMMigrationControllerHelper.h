//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SysMigServerRequests.h"

@class SMAutoLoaderServer, SMManager, SMMigration;

@interface SMMigrationControllerHelper : NSObject <SysMigServerRequests>
{
    SMManager *_sysMigrationManager;
    SMMigration *_currentMigration;
    SMAutoLoaderServer *_myAutoLoaderServer;
}

+ (void)_systemRelease;
+ (void)_systemRetain;
+ (id)systemReleaseSemaphore;
- (oneway void)removeKnownSystem:(id)arg1;
- (oneway void)mountRemoteTMShare:(id)arg1;
- (oneway void)unmountRemoteTMSharesExcluding:(id)arg1;
- (oneway void)unmountAllRemoteTMShares;
- (oneway void)addNonBonjourRemoteShare:(id)arg1;
- (id)incompatibleAppDataForSystemAtURL:(id)arg1;
- (id)logItems;
- (void)releaseSystemAssertions;
- (void)deleteNetworkMigrationKeychain;
- (oneway void)startMigrationWithDelegate:(id)arg1 andRequest:(bycopy id)arg2;
- (oneway void)resumeMigrationWithDelegate:(id)arg1;
- (void)deletePreviousMigrationRequest;
- (BOOL)canResumePreviousMigrationRequest;
- (oneway void)resetMigration;
- (oneway void)cancelMigration;
- (oneway void)ensureUpdatedBlacklist;
- (void)waitOnBlacklistUpdate;
- (oneway void)quit;
- (BOOL)outdatedNetworkMigrationClientsDiscovered;
- (id)networkMigrationSharedSecret;
- (oneway void)stopNetworkMigrationServer;
- (id)startNetworkMigrationServer:(id)arg1;
- (void)unmount:(id)arg1;
- (void)mount:(id)arg1 withCredentials:(id)arg2;
- (void)setTrustedPassCode:(id)arg1;
- (void)startSearchingForValidSystems;
- (id)sizeForFileGroupingForPath:(id)arg1 onSourceSystemUrl:(id)arg2 andDestinationSystemUrl:(id)arg3;
- (int)checkUserCollisionOnSystem:(id)arg1 withNewName:(id)arg2 andNewLongName:(id)arg3 conflictedUID:(unsigned int *)arg4 mayReplace:(char *)arg5;
- (void)sizeAllUsersForSystem:(id)arg1 sizeFileVaultUsers:(BOOL)arg2;
- (id)userDataStores;
- (id)getAllUsersForSystem:(id)arg1;
- (id)getSystemAtLogicalVolumeUUID:(id)arg1;
- (id)getSystemAtURL:(id)arg1;
- (id)getAllSystems;
- (id)init;
- (oneway void)cancelXibalbaMigration;
- (oneway void)startXibalbaMigrationWithRequest:(id)arg1 delegate:(id)arg2;
- (void)cancelSizingForSystemAtURL:(id)arg1;
- (void)sizeDeferredComponentsForSystemAtURL:(id)arg1;
- (bycopy id)defenestratedLocalUsers;
- (bycopy id)systemProfileAtURL:(id)arg1;

@end

