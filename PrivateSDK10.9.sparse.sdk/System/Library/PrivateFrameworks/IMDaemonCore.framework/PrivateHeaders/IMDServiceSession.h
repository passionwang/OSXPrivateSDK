//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMConnectionMonitorDelegate.h"
#import "IMServiceSessionProtocol.h"
#import "IMSystemMonitorListener.h"

@class IMConnectionMonitor, IMDAccount, IMDService, IMSystemProxySettingsFetcher, IMTimer, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, NSTimer;

@interface IMDServiceSession : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate, IMServiceSessionProtocol>
{
    NSRecursiveLock *_lock;
    IMDAccount *_account;
    NSString *_loginStatusMessage;
    NSMutableDictionary *_localProperties;
    NSMutableSet *_changedBuddies;
    NSMutableSet *_registeredChats;
    NSMutableDictionary *_groupChatIdentifierToChatRoomMap;
    NSMutableDictionary *_chatRoomToGroupChatIdentifierMap;
    NSMutableDictionary *_chatSuppressionFlagMap;
    NSMutableDictionary *_chatSuppressionTimerMap;
    NSMutableDictionary *_suppressedMessages;
    IMTimer *_messageRoutingTimer;
    NSTimer *_storageTimer;
    NSMutableSet *_messagesReceivedDuringStorage;
    IMConnectionMonitor *_connectionMonitor;
    NSTimer *_reconnectTimer;
    NSString *_loginID;
    NSString *_pwRequestID;
    IMSystemProxySettingsFetcher *_systemProxySettingsFetcher;
    int _buddyChangeLevel;
    unsigned int _loginStatus;
    int _disconnectReason;
    BOOL _activated;
    BOOL _saveKeychainPassword;
    BOOL _awaitingDataContext;
    BOOL _shouldReconnect;
    BOOL _badPass;
    IMDService *_service;
    NSMutableDictionary *_buddies;
    NSString *_proxyHost;
    NSString *_proxyAccount;
    NSString *_proxyPassword;
    NSString *_password;
    NSString *_serverHost;
    long long _proxyType;
    unsigned short _proxyPort;
    BOOL _useSSL;
    unsigned short _serverPort;
}

+ (id)_firewallUserNotificationForService:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) int serviceDisconnectReason; // @synthesize serviceDisconnectReason=_disconnectReason;
@property(readonly, nonatomic) unsigned int serviceLoginStatus; // @synthesize serviceLoginStatus=_loginStatus;
@property(readonly, nonatomic) NSString *serviceLoginStatusMessage; // @synthesize serviceLoginStatusMessage=_loginStatusMessage;
@property(readonly, nonatomic) IMDService *service; // @synthesize service=_service;
@property(readonly, nonatomic) IMDAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) BOOL useSSL; // @synthesize useSSL=_useSSL;
@property(readonly, nonatomic) NSString *proxyPassword; // @synthesize proxyPassword=_proxyPassword;
@property(readonly, nonatomic) NSString *proxyAccount; // @synthesize proxyAccount=_proxyAccount;
@property(readonly, nonatomic) unsigned short proxyPort; // @synthesize proxyPort=_proxyPort;
@property(readonly, nonatomic) NSString *proxyHost; // @synthesize proxyHost=_proxyHost;
@property(readonly, nonatomic) long long proxyType; // @synthesize proxyType=_proxyType;
@property(readonly, nonatomic) unsigned short serverPort; // @synthesize serverPort=_serverPort;
@property(readonly, nonatomic) NSString *serverHost; // @synthesize serverHost=_serverHost;
- (void)_clearDowngradeMarkersForChat:(id)arg1;
- (void)systemDidWake;
- (void)screenUnlocked;
- (void)systemWillSleep;
- (id)broadcasterForListenersWithCapabilities:(unsigned int)arg1;
- (id)broadcasterForVCConferenceListeners;
- (id)broadcasterForACConferenceListeners;
- (id)broadcasterForAVConferenceListeners;
- (id)broadcasterForChatObserverListeners;
- (id)broadcasterForChatListeners;
- (id)broadcaster;
- (void)refreshServiceCapabilities;
- (BOOL)equalID:(id)arg1 andID:(id)arg2;
- (id)canonicalFormOfChatRoom:(id)arg1;
- (id)canonicalFormOfID:(id)arg1;
- (void)_managedPrefsNotification:(id)arg1;
@property(readonly, nonatomic) BOOL allowedAsChild;
@property(readonly, nonatomic) BOOL networkConditionsAllowLogin;
- (void)_networkChanged:(id)arg1;
- (void)_callMonitorStateChanged:(id)arg1;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)_processPotentialNetworkChange;
- (void)_setPendingConnectionMonitorUpdate;
- (void)_processConnectionMonitorUpdate;
- (void)_reconnectIfNecessary;
- (void)_updateConnectionMonitorFromAccountDefaultsIgnoringProxy:(BOOL)arg1;
- (void)updateConnectionMonitorWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (void)_updateConnectionMonitorWithRemoteHost:(id)arg1;
- (void)_clearConnectionMonitor;
- (void)sessionWillBecomeInactive;
- (void)sessionDidBecomeActive;
@property(readonly, nonatomic) NSDictionary *accountDefaults;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *accountID;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) BOOL accountShouldBeAlwaysLoggedIn;
@property(readonly, nonatomic) BOOL accountNeedsPassword;
@property(readonly, nonatomic) BOOL accountNeedsLogin;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 service:(id)arg2;
- (void)noteLastItemFromStorage:(id)arg1;
- (void)noteItemFromStorage:(id)arg1;
- (void)noteSuppressedMessageUpdate:(id)arg1;
- (BOOL)isAwaitingStorageTimer;
- (void)_storageTimerFired;
- (void)_updateStorageTimerWithInterval:(double)arg1;
- (void)_routingTimerFired;
- (void)_updateRoutingTimerWithInterval:(double)arg1;
- (void)_updateRoutingForMessageGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned int)arg3;
- (void)_handleRoutingWithDictionary:(id)arg1;
- (void)_markChatAsDowngraded:(id)arg1;
- (BOOL)canMakeDowngradeRoutingChecks;
- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 unformattedNumber:(id)arg3 countryCode:(id)arg4 forChat:(id)arg5 style:(unsigned char)arg6;
- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 forChat:(id)arg3 style:(unsigned char)arg4;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 handleInfo:(id)arg4;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3;
- (void)didReceiveInvitation:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didReceiveMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)_setSuppressedMessage:(id)arg1 inChatWithGUID:(id)arg2;
- (void)_suppresionTimerFired:(id)arg1;
- (void)_endMessageSuppressionForChatGUID:(id)arg1;
- (void)endMessageSuppression;
- (void)noteMessagesMarkedAsReadForChatWithGUID:(id)arg1;
- (void)notifyDidSendMessageID:(id)arg1;
- (void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 date:(id)arg2;
- (void)didSendMessageReadReceiptForMessageID:(id)arg1;
- (void)didReceiveError:(unsigned int)arg1 forMessageID:(id)arg2 forceError:(BOOL)arg3;
- (void)didReceiveErrorMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didReceiveReplaceMessageID:(int)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2;
- (void)didLeaveChat:(id)arg1 style:(unsigned char)arg2;
- (void)leaveAllChats;
- (void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3;
- (void)processMessageForSending:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)chatForChatIdentifier:(id)arg1 style:(unsigned char)arg2;
- (void)_mapRoomChatToGroupChat:(id *)arg1 style:(unsigned char *)arg2;
- (void)canonicalizeChatIdentifier:(id *)arg1 style:(unsigned char *)arg2;
- (void)unregisterChat:(id)arg1 style:(unsigned char)arg2;
- (BOOL)isChatRegistered:(id)arg1 style:(unsigned char)arg2;
- (void)registerChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3;
- (void)registerChat:(id)arg1 style:(unsigned char)arg2;
- (id)_newHashForChat:(id)arg1 style:(unsigned char)arg2;
- (id)chatRoomForGroupChatIdentifier:(id)arg1;
- (id)groupChatIdentifierForChatRoom:(id)arg1;
- (void)useChatRoom:(id)arg1 forGroupChatIdentifier:(id)arg2;
- (void)changeLocalProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3;
- (id)localPropertiesOfBuddy:(id)arg1;
- (void)clearLocalProperties;
- (id)localProperty:(id)arg1 ofBuddy:(id)arg2;
- (id)property:(id)arg1 ofBuddy:(id)arg2;
- (void)endBuddyChanges;
- (void)clearPropertiesOfBuddy:(id)arg1;
- (void)changeProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3;
- (void)beginBuddyChanges;
- (void)markBuddiesAsChanged:(id)arg1;
- (void)resumeBuddyUpdates;
- (void)holdBuddyUpdates;
@property(readonly) NSDictionary *buddyProperties;
- (id)groups;
@property(readonly, nonatomic) NSArray *allBuddies;
- (id)pictureKeyForBuddy:(id)arg1;
- (id)pictureOfBuddy:(id)arg1;
@property(readonly, nonatomic) NSDictionary *buddyPictures;
- (void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)sendMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)declineInvitationToChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)leaveChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 joinProperties:(id)arg5;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)validateProfile;
- (void)unvalidateAliases:(id)arg1;
- (void)validateAliases:(id)arg1;
- (void)removeAliases:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3;
- (void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned int)arg2 type:(unsigned int)arg3 userInfo:(id)arg4 conference:(id)arg5;
- (void)sendVCUpdate:(id)arg1 toPerson:(id)arg2 conference:(id)arg3;
- (void)sendCounterProposalToPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (struct _FZChatRoomValidity)validityOfChatRoomName:(id)arg1;
- (void)sendFileTransfer:(id)arg1 toPerson:(id)arg2;
- (void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChat:(id)arg3 style:(unsigned char)arg4;
- (void)declineInvitationToChat:(id)arg1 style:(unsigned char)arg2;
- (void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4;
- (void)invitePerson:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4;
- (void)leaveChat:(id)arg1 style:(unsigned char)arg2;
- (void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 joinProperties:(id)arg4;
- (void)joinChat:(id)arg1 style:(unsigned char)arg2 joinProperties:(id)arg3;
- (BOOL)shouldImitateGroupChatUsingChatRooms;
- (id)defaultChatSuffix;
- (void)setValue:(id)arg1 ofProperty:(id)arg2 ofPerson:(id)arg3;
- (void)requestProperty:(id)arg1 ofPerson:(id)arg2;
- (void)stopWatchingBuddy:(id)arg1;
- (void)startWatchingBuddy:(id)arg1;
- (void)requestSubscriptionTo:(id)arg1;
- (void)acceptSubscriptionRequest:(BOOL)arg1 from:(id)arg2;
- (void)renameGroup:(id)arg1 to:(id)arg2;
- (void)changeGroup:(id)arg1 changes:(id)arg2;
- (void)changeGroups:(id)arg1;
- (void)requestGroups;
- (void)setIdleTime:(unsigned int)arg1;
- (void)changeMyStatus:(id)arg1 changedKeys:(id)arg2;
- (BOOL)blockIdleStatus;
- (void)setBlockIdleStatus:(BOOL)arg1;
- (id)blockList;
- (void)setBlockList:(id)arg1;
- (id)allowList;
- (void)setAllowList:(id)arg1;
- (unsigned int)blockingMode;
- (void)setBlockingMode:(unsigned int)arg1;
- (unsigned long long)capabilities;
- (void)loginServiceSession;
- (void)passwordUpdated;
- (void)accountDefaultsChanged:(id)arg1;
- (void)_abandonSystemProxySettingsFetcher;
- (void)_abandonPWFetcher;
- (void)noteBadPassword;
- (id)loginID;
@property(readonly, nonatomic) NSDictionary *registrationAlertInfo;
@property(readonly, nonatomic) int registrationError;
@property(readonly, nonatomic) int registrationStatus;
- (void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3;
- (void)unregisterAccount;
- (void)registerAccount;
- (void)authenticateAccount;
- (id)server;
- (BOOL)hasCapability:(unsigned long long)arg1;
- (void)userNotificationDidFinish:(id)arg1;
- (void)_handleFirewallUserNotificationDidFinish:(id)arg1;
- (BOOL)warnIfPortBlocked:(int)arg1 forAction:(id)arg2;
- (void)_clearAutoReconnectTimer;
- (void)_autoReconnectTimer:(id)arg1;
- (void)_setAutoReconnectTimer;
- (void)setLoginStatus:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (void)_forceSetLoginStatus:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (void)setLoginStatus:(unsigned int)arg1 message:(id)arg2;
- (void)_wentOffline;
- (void)serviceSessionDidLogoutWithMessage:(id)arg1 reason:(int)arg2 properties:(id)arg3;
- (void)serviceSessionDidLogout;
- (void)serviceSessionDidLogin;
- (void)logout;
- (void)logoutServiceSession;
- (void)login;
- (void)autoLogin;
- (void)systemProxySettingsFetcher:(id)arg1 retrievedAccount:(id)arg2 password:(id)arg3;
- (void)systemProxySettingsFetcher:(id)arg1 retrievedHost:(id)arg2 port:(unsigned short)arg3 protocol:(long long)arg4;
- (void)_login_checkUsernameAndPassword;
- (void)_login_usernameAndPasswordReady;
- (void)_data_connection_ready;
- (void)_login_serverSettingsReady;
- (void)_doLoginIgnoringProxy:(BOOL)arg1;
- (void)autoReconnect;
- (void)disallowReconnection;

@end

