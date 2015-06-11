/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MCAccount-Protocol.h"

@class MCAuthScheme, NSArray, NSDate, NSDictionary, NSImage, NSMutableDictionary, NSNumber, NSString, NSURL;

@interface MFAccount : NSObject <MCAccount>
{
    NSMutableDictionary *_info;
    NSString *_brandName;
    id _brandIcon;
    id _supportURL;
    NSString *_supportURLLabel;
    NSString *_providerIdentifier;
    struct OpaqueSecIdentityRef *_tlsIdentity;
    BOOL _isActive;
    BOOL _configureDynamically;
    BOOL _allowInsecureAuthentication;
    BOOL _primitiveIsOffline;
    BOOL _primitiveIsWillingToGoOnline;
    BOOL _autosynchronizingEnabled;
    NSString *_canonicalEmailAddress;
    NSNumber *_useMailDrop;
    NSDate *_lastConnectionValidationTime;
}

+ (Class)classForProtocol:(id)arg1;
+ (id)keyPathsForValuesAffectingPreferredAuthScheme;
+ (BOOL)defaultsToSSL;
+ (id)keyPathsForValuesAffectingOfflineDisplayName;
+ (BOOL)allObjectsInArrayAreOffline:(id)arg1;
+ (void)resetConfigureDynamically;
+ (id)genericAccountLargeImage;
+ (id)accountTypeString;
+ (void)saveAccountInfoToDefaults;
+ (BOOL)_shouldAnnounceChangesFromAccountInfo:(id)arg1 toAccountInfo:(id)arg2;
+ (void)saveAccounts:(id)arg1 usingStorageKey:(id)arg2 forceWriteToMail:(BOOL)arg3;
+ (void)saveAccounts:(id)arg1 usingStorageKey:(id)arg2;
+ (id)readAccountsUsingStorageKey:(id)arg1;
+ (id)readAccountsUsingStorageKey:(id)arg1 forceReadFromMail:(BOOL)arg2;
+ (id)v2AccountsPlistName;
+ (BOOL)haveAccountsBeenConfigured;
+ (id)typeStringForAccountClass:(Class)arg1;
+ (Class)accountClassForTypeString:(id)arg1;
@property(retain) NSDate *lastConnectionValidationTime; // @synthesize lastConnectionValidationTime=_lastConnectionValidationTime;
@property(retain, nonatomic) NSNumber *useMailDrop; // @synthesize useMailDrop=_useMailDrop;
@property(nonatomic) BOOL autosynchronizingEnabled; // @synthesize autosynchronizingEnabled=_autosynchronizingEnabled;
@property BOOL primitiveIsWillingToGoOnline; // @synthesize primitiveIsWillingToGoOnline=_primitiveIsWillingToGoOnline;
@property BOOL primitiveIsOffline; // @synthesize primitiveIsOffline=_primitiveIsOffline;
@property(copy) NSString *canonicalEmailAddress; // @synthesize canonicalEmailAddress=_canonicalEmailAddress;
@property BOOL allowInsecureAuthentication; // @synthesize allowInsecureAuthentication=_allowInsecureAuthentication;
@property BOOL configureDynamically; // @synthesize configureDynamically=_configureDynamically;
- (void).cxx_destruct;
- (void *)keychainProtocol;
- (void)respondToHostBecomingReachable;
- (BOOL)canAuthenticateWithScheme:(id)arg1;
- (void)removeAccountInfoObjectForKey:(id)arg1;
- (void)setAccountInfoObject:(id)arg1 forKey:(id)arg2;
@property(readonly) BOOL isValid;
- (void)clearBrandingCache;
@property(readonly) NSImage *brandIcon;
- (id)iaSettingsIncludingPassword:(BOOL)arg1;
@property(readonly, copy) NSString *brandName;
@property(copy) NSString *providerIdentifier;
@property(readonly, copy) NSString *accountTypeString;
@property(readonly, copy) NSString *subscriptionURLLabel;
@property(readonly) NSURL *subscriptionURL;
@property(readonly, copy) NSString *supportURLLabel;
@property(readonly) NSURL *supportURL;
- (BOOL)_matchesEmailAddress:(id)arg1;
- (BOOL)_matchesDiscoveredSettings:(id)arg1 fromEmailAddress:(id)arg2;
- (BOOL)autodiscoverSettings:(id *)arg1;
@property(readonly, nonatomic) BOOL usesConnectionBasedAutodiscovery;
- (id)nameForMailbox:(id)arg1;
@property(readonly, copy) NSString *identifier;
@property(copy) NSString *ISPAccountID;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (BOOL)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)arg1 host:(id)arg2 didPromptUser:(char *)arg3;
- (id)authenticatedConnection;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
@property BOOL shouldUseAuthentication;
@property(readonly, nonatomic) BOOL requiresAuthentication;
@property(readonly, copy, nonatomic) NSString *saslProfileName;
@property(retain) MCAuthScheme *preferredAuthScheme;
- (void)accountInfoDidChange;
- (void)updateFromSuccessfulConnectionPortNumber:(long long)arg1 securityLayerType:(long long)arg2;
- (void)_setSecurityLayerType:(long long)arg1 releasingConnections:(BOOL)arg2;
@property long long securityLayerType;
- (void)_setUsesSSL:(BOOL)arg1 accountInfoKey:(id)arg2 releasingConnections:(BOOL)arg3;
- (BOOL)_usesSSLWithAccountInfoKey:(id)arg1;
- (void)_setUsesSSL:(BOOL)arg1 releasingConnections:(BOOL)arg2;
@property BOOL usesSSL;
- (void)validateConnectionsIfNeeded;
- (void)validateConnections;
- (void)releaseAllConnections;
@property(readonly, nonatomic) long long defaultSecurePortNumber;
@property(readonly, nonatomic) long long defaultPortNumber;
@property(readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property(readonly, copy, nonatomic) NSArray *standardPorts;
- (void)_setPortNumber:(long long)arg1 releasingConnections:(BOOL)arg2;
@property long long portNumber;
- (void)setTLSIdentity:(struct OpaqueSecIdentityRef *)arg1;
- (struct OpaqueSecIdentityRef *)copyTLSIdentity;
@property(readonly, copy) NSString *googleClientToken;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
- (void)promptUserForPasswordWithCompletion:(id)arg1;
- (id)promptUserForPassword;
- (void)setSessionPassword:(id)arg1;
- (id)sessionPassword;
- (void)setPermanentPassword:(id)arg1;
- (id)permanentPassword;
@property(copy) NSString *password;
- (void)_setHostname:(id)arg1 accountInfoKey:(id)arg2;
- (id)_hostnameWithAccountInfoKey:(id)arg1;
@property(copy) NSString *hostname;
@property(copy) NSString *username;
@property(readonly, copy) NSString *offlineDisplayName;
@property(copy) NSString *displayName;
@property(copy) NSString *storedDisplayName;
@property BOOL isWillingToGoOnline;
@property BOOL isOffline;
@property(readonly, nonatomic) BOOL canGoOffline;
@property BOOL isInactivatedInsteadOfBeingDeleted;
- (void)clearIsActiveCache;
@property BOOL isActive;
@property(readonly) NSMutableDictionary *defaultsDictionary;
- (void)_queueAccountInfoDidChange;
- (long long)portNumberForKeychain;
- (void)removeObjectForAccountInfoKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forAccountInfoKey:(id)arg2;
- (BOOL)setBool:(BOOL)arg1 forAccountInfoKey:(id)arg2 withDefault:(BOOL)arg3;
- (void)setObject:(id)arg1 forAccountInfoKey:(id)arg2;
- (BOOL)boolForAccountInfoKey:(id)arg1 defaultResult:(BOOL)arg2;
- (id)objectForAccountInfoKey:(id)arg1;
- (void)setInfo:(id)arg1;
- (id)info;
- (void)_setAccountInfo:(id)arg1;
@property(copy) NSDictionary *accountInfo;
- (void)dealloc;
- (id)init;
- (id)initWithAccountInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSString *iaServiceType;
- (void)setCustomAuthentication:(unsigned int)arg1;
- (unsigned int)customAuthentication;
- (id)accountName;
- (void)setAccountName:(id)arg1;
- (id)loginName;
- (void)setLoginName:(id)arg1;
- (id)serverName;
- (void)setServerName:(id)arg1;
- (id)accountPassword;
- (void)setAccountPassword:(id)arg1;
- (unsigned int)accountType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSString *externalHostname;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

