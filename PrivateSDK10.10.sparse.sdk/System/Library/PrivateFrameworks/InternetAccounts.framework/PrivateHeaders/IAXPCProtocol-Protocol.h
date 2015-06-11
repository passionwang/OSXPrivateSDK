/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol IAXPCProtocol
- (void)googleTokenForUID:(id)arg1 shouldCreateToken:(BOOL)arg2 reply:(id)arg3;
- (void)googleTokenForEmailAddress:(id)arg1 shouldCreateToken:(BOOL)arg2 reply:(id)arg3;
- (void)writeDiagnostics;
- (void)dumpDataPluginNotificationHistory;
- (void)createAccount:(id)arg1 pluginID:(id)arg2 provider:(id)arg3 token:(id)arg4 reply:(id)arg5;
- (void)configureAccountUID:(id)arg1 pluginID:(id)arg2;
- (void)cancelSetupForAccount:(id)arg1 pluginID:(id)arg2;
- (void)continueSetupInAppForPluginID:(id)arg1 settings:(id)arg2;
- (void)authenticateAccountUID:(id)arg1 credential:(id)arg2 reply:(id)arg3;
- (void)aListPluginIDForSettings:(id)arg1 reply:(id)arg2;
- (void)propertiesForPluginID:(id)arg1 reply:(id)arg2;
- (void)imageDataForAccountUID:(id)arg1 pluginID:(id)arg2 reply:(id)arg3;
- (void)copyContactsRecordsAndDeleteAccountUID:(id)arg1 reply:(id)arg2;
- (void)deactivateAccountUID:(id)arg1 reply:(id)arg2;
- (void)activateAccountUID:(id)arg1 reply:(id)arg2;
- (void)account:(id)arg1 didChangeWithType:(int)arg2 oldAccount:(id)arg3;
- (void)addACAccountProperties:(id)arg1 forUID:(id)arg2 reply:(id)arg3;
- (void)updateAccountWithUID:(id)arg1 withSettings:(id)arg2 reply:(id)arg3;
- (void)descriptionForAccount:(id)arg1 reply:(id)arg2;
- (void)resetCollectionWithReply:(id)arg1;
- (void)removeAccountWithUID:(id)arg1 deleteFromDataSource:(BOOL)arg2 reply:(id)arg3;
- (void)addAccount:(id)arg1 reply:(id)arg2;
- (void)accountsWithLoginName:(id)arg1 service:(id)arg2 provider:(id)arg3 attributes:(id)arg4 reply:(id)arg5;
- (void)accountWithUID:(id)arg1 reply:(id)arg2;
- (void)topLevelAccountsForProvider:(id)arg1 reply:(id)arg2;
- (void)allAccountsWithReply:(id)arg1;
@end

