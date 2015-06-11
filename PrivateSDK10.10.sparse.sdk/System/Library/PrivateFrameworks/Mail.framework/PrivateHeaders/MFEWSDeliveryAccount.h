/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Mail/MFDeliveryAccount.h>

@class MFEWSAccount;

@interface MFEWSDeliveryAccount : MFDeliveryAccount
{
    MFEWSAccount *_ewsAccount;
    BOOL _stripsFromHeaderWhenSending;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property BOOL stripsFromHeaderWhenSending; // @synthesize stripsFromHeaderWhenSending=_stripsFromHeaderWhenSending;
- (void).cxx_destruct;
- (id)remoteMailAccountsEmployedBy;
- (void)setShouldUseAuthentication:(BOOL)arg1;
- (BOOL)shouldUseAuthentication;
- (void)setAssociatedAccount:(id)arg1;
- (id)associatedAccount;
- (BOOL)isDynamic;
- (Class)delivererClass;
- (id)deliveryIdentifier;
- (void)setValidationRequired:(BOOL)arg1;
- (BOOL)validationRequired;
- (BOOL)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)arg1 host:(id)arg2 didPromptUser:(char *)arg3;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (id)authenticatedConnection;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
- (void)validateConnections;
- (id)accountTypeString;
- (id)subscriptionURLLabel;
- (id)subscriptionURL;
- (id)supportURLLabel;
- (id)supportURL;
- (BOOL)isValid;
- (BOOL)canGoOffline;
- (void)setIsWillingToGoOnline:(BOOL)arg1;
- (BOOL)isWillingToGoOnline;
- (void)setIsOffline:(BOOL)arg1;
- (BOOL)isOffline;
- (long long)defaultSecurePortNumber;
- (long long)defaultPortNumber;
- (id)standardSSLPorts;
- (id)standardPorts;
- (BOOL)requiresAuthentication;
- (id)saslProfileName;
- (void)setAccountInfo:(id)arg1;
- (id)accountInfo;
- (id)identifier;
- (void)setISPAccountID:(id)arg1;
- (id)ISPAccountID;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)preferredAuthScheme;
- (void)_setSecurityLayerType:(long long)arg1 releasingConnections:(BOOL)arg2;
- (long long)securityLayerType;
- (void)setHostname:(id)arg1;
- (id)hostname;
- (void)_setUsesSSL:(BOOL)arg1 releasingConnections:(BOOL)arg2;
- (BOOL)usesSSL;
- (void)_setPortNumber:(long long)arg1 releasingConnections:(BOOL)arg2;
- (void)setPortNumber:(long long)arg1;
- (long long)portNumber;
- (id)appleAuthenticationToken;
- (id)applePersonID;
- (void)setSessionPassword:(id)arg1;
- (id)sessionPassword;
- (void)setPermanentPassword:(id)arg1;
- (id)permanentPassword;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setUsername:(id)arg1;
- (id)username;
- (BOOL)autodiscoverSettings:(id *)arg1;
- (BOOL)usesConnectionBasedAutodiscovery;
- (void)setCanonicalEmailAddress:(id)arg1;
- (id)canonicalEmailAddress;
- (void)setInfo:(id)arg1;
- (id)info;
- (void)_setAccountInfo:(id)arg1;
- (void)removeAccountInfoObjectForKey:(id)arg1;
- (void)setAccountInfoObject:(id)arg1 forKey:(id)arg2;
- (void)releaseAllConnections;
- (id)defaultsDictionary;
- (void)setIsInactivatedInsteadOfBeingDeleted:(BOOL)arg1;
- (BOOL)isInactivatedInsteadOfBeingDeleted;
- (id)offlineDisplayName;
- (void)setDisplayName;
- (id)displayName;
- (void)setStoredDisplayName;
- (id)storedDisplayName;
- (void)dealloc;
- (id)initWithAccountInfo:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

