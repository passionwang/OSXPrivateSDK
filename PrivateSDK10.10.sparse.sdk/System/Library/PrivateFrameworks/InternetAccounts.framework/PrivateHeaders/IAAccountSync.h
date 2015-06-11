/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface IAAccountSync : NSObject
{
}

+ (_Bool)accountSyncisEnabled;
+ (_Bool)accountSyncCloudStatus;
+ (id)getDevices;
+ (void)accountWasPresentedWithUID:(id)arg1;
+ (id)presentedAccountUIDs;
+ (void)clearDeletedAccountUIDs;
+ (void)accountWasDeletedWithUID:(id)arg1 mergeData:(BOOL)arg2;
+ (void)accountWasDeletedWithUID:(id)arg1;
+ (id)deletedAccountUIDs;
+ (id)newlySyncedAccountUIDs;
+ (void)accountWasAddedWithUID:(id)arg1 pluginID:(id)arg2;
+ (void)postNotificationForNewAccount:(id)arg1 user:(id)arg2 pluginID:(id)arg3 device:(id)arg4;
+ (void)accountsChangedExternally;
+ (void)syncAccounts;

@end

