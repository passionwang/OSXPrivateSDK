//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEConfigurationValidating.h"
#import "NEProfilePayloadHandlerDelegate.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NEAOVPN, NEContentFilter, NEProfileIngestionPayloadInfo, NEVPN, NEVPNApp, NSString, NSUUID;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying>
{
    long long _grade;
    NSUUID *_identifier;
    NSString *_application;
    NSString *_name;
    NSString *_applicationName;
    NSString *_applicationIdentifier;
    NSString *_externalIdentifier;
    NEVPN *_VPN;
    NEAOVPN *_alwaysOnVPN;
    NEVPNApp *_appVPN;
    NEContentFilter *_contentFilter;
    NEProfileIngestionPayloadInfo *_payloadInfo;
}

+ (void)addError:(id)arg1 toList:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (struct __CFDictionary *)copyConfigurationForProtocol:(struct __CFString *)arg1 inService:(struct __SCNetworkService *)arg2;
+ (BOOL)setConfiguration:(struct __CFDictionary *)arg1 forProtocol:(struct __CFString *)arg2 inService:(struct __SCNetworkService *)arg3;
+ (BOOL)removeSCServiceWithIdentifier:(id)arg1 fromPreferences:(struct __SCPreferences *)arg2;
+ (BOOL)SCServiceWithIdentifier:(id)arg1 existsInPreferences:(struct __SCPreferences *)arg2;
@property(copy) NEProfileIngestionPayloadInfo *payloadInfo; // @synthesize payloadInfo=_payloadInfo;
@property(copy) NEContentFilter *contentFilter; // @synthesize contentFilter=_contentFilter;
@property(copy) NEVPNApp *appVPN; // @synthesize appVPN=_appVPN;
@property(copy) NEAOVPN *alwaysOnVPN; // @synthesize alwaysOnVPN=_alwaysOnVPN;
@property(copy) NEVPN *VPN; // @synthesize VPN=_VPN;
@property(copy) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(copy) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(copy) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *application; // @synthesize application=_application;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) long long grade; // @synthesize grade=_grade;
- (void).cxx_destruct;
- (void)copyPasswordsFromSystemKeychain;
@property(readonly) NSString *pluginType;
- (id)copyProfileDictionary;
- (void)clearUserKeychain;
- (void)clearSystemKeychain;
- (void)clearKeychainInDomain:(long long)arg1;
- (void)syncWithUserKeychain;
- (void)syncWithSystemKeychain;
- (void)syncWithKeychainInDomain:(long long)arg1;
- (id)description;
- (id)generateSignature;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithName:(id)arg1 grade:(long long)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setSystemCertificateData:(id)arg1;
- (id)getInstalledSystemCertificatePersistentRef;
- (void)uninstallSystemCertificates;
- (id)installSystemCertificates;
- (BOOL)hasSystemCertificatesToInstall;
- (id)importSystemCertificatePayload:(id)arg1 outError:(id *)arg2;
- (BOOL)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2;
- (BOOL)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2;
- (BOOL)setProfileInfo:(id)arg1;
- (BOOL)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2;
- (BOOL)setPayloadInfoIdentity:(id)arg1;
- (BOOL)setPayloadInfoIdentityPIN:(id)arg1;
- (BOOL)setPayloadInfoIdentityIPSecSharedSecret:(id)arg1;
- (BOOL)setPayloadInfoIdentityProxy:(id)arg1;
- (BOOL)setPayloadInfoIdentityUserNameAndPassword:(id)arg1;
- (BOOL)setConfigurationSharedSecret:(id)arg1;
- (BOOL)setConfigurationHTTPPassword:(id)arg1;
- (BOOL)setConfigurationVPNPassword:(id)arg1;
- (id)getConfigurationPasswordPersist:(id)arg1 account:(id)arg2 description:(id)arg3;
- (BOOL)setConfigurationPassword:(id)arg1 account:(id)arg2 password:(id)arg3 description:(id)arg4;
- (id)getConfigurationIdentifier;
- (id)getPendingCertificateUUIDs:(id)arg1;
- (id)getPendingCertificateUUIDsContentFilter:(id)arg1;
- (id)getPendingCertificateUUIDsAOVpn:(id)arg1;
- (id)getPendingCertificateUUIDsAppVPN:(id)arg1;
- (id)getPendingCertificateUUIDsVPN:(id)arg1;
- (BOOL)setCertificates:(id)arg1;
- (BOOL)setCertificateContentFilter:(id)arg1;
- (BOOL)setCertificatesVPN:(id)arg1;
- (BOOL)setCertificatesAppVPN:(id)arg1;
- (BOOL)setCertificatesAOVpn:(id)arg1;
- (id)initWithContentFilterPayload:(id)arg1 configurationName:(id)arg2;
- (id)initWithAlwaysOnVPNPayload:(id)arg1 configurationName:(id)arg2;
- (id)configureAOVPNTunnelFromTunnelDict:(id)arg1 payloadBase:(id)arg2;
- (id)initWithAppLayerVPNPayload:(id)arg1 configurationName:(id)arg2;
- (id)initWithVPNPayload:(id)arg1 configurationName:(id)arg2;
- (BOOL)ingestIPSecDict:(id)arg1 vpnType:(id)arg2 vpn:(id)arg3;
- (BOOL)ingestPPPData:(id)arg1 vnpType:(id)arg2;
- (BOOL)configureVpnOnDemand:(id)arg1 vpnType:(id)arg2;
- (BOOL)configureVpnOnDemandRules:(id)arg1;
- (BOOL)configureIKE:(id)arg1 vpnType:(id)arg2 payloadBase:(id)arg3 vpn:(id)arg4;
- (BOOL)ingestProxyOptions:(id)arg1;
- (BOOL)configurePPPWithVPNOptions:(id)arg1 payloadBase:(id)arg2;
- (BOOL)configurePPTPWithPPPOptions:(id)arg1;
- (BOOL)configureL2TPWithPPPOptions:(id)arg1;
- (BOOL)configurePPPCommon:(id)arg1;
- (BOOL)ingestPPPDict:(id)arg1;
- (BOOL)ingestDNSOptions:(id)arg1;
- (BOOL)ingestDisconnectOptions:(id)arg1;
- (BOOL)configurePluginWithPayload:(id)arg1 pluginType:(id)arg2 payloadType:(id)arg3;
- (id)getConfigurationProtocol;
- (BOOL)updateFromSCService:(struct __SCNetworkService *)arg1;
- (id)initFromSCService:(struct __SCNetworkService *)arg1;
- (BOOL)applyChangesToSCServiceInPreferences:(struct __SCPreferences *)arg1;
- (BOOL)isSupportedBySC;

@end

