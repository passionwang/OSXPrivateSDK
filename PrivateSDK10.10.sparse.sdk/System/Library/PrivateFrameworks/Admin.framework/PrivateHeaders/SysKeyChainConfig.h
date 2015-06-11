/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SysKeyChainConfig : NSObject
{
}

+ (id)sharedSysKeyChainConfig;
- (void)setRestrictAppInstallations:(BOOL)arg1 allowCaspianIdentifiedApps:(BOOL)arg2;
- (BOOL)FDERevertRequiresRestart:(id)arg1;
- (long long)resetFDERecoveryPassword:(id)arg1 existing:(id)arg2 new:(id)arg3;
- (void)overwriteGatekeeperForURL:(id)arg1 withAuthorization:(id)arg2;
- (void)overwriteGatekeeperForURL:(id)arg1;
- (BOOL)setODSDPassword:(id)arg1 accountName:(id)arg2;
- (int)storeKeyInSystemKeychain:(id)arg1 forUser:(id)arg2 serverURL:(id)arg3 description:(id)arg4;
- (BOOL)storeSystemKeychainPassword:(id)arg1 account:(id)arg2 service:(id)arg3;
- (void)setKeyForDomain:(id)arg1;

@end

