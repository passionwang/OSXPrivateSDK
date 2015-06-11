//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEVPNProtocolIPSec.h>

@class NEVPNIKEv2SecurityAssociationParameters, NSString;

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec
{
    BOOL _wakeForRekey;
    long long _deadPeerDetectionRate;
    NSString *_serverCertificateIssuerCommonName;
    NSString *_serverCertificateCommonName;
    NEVPNIKEv2SecurityAssociationParameters *_IKESecurityAssociationParameters;
    NEVPNIKEv2SecurityAssociationParameters *_childSecurityAssociationParameters;
}

+ (BOOL)supportsSecureCoding;
@property BOOL wakeForRekey; // @synthesize wakeForRekey=_wakeForRekey;
@property(readonly) NEVPNIKEv2SecurityAssociationParameters *childSecurityAssociationParameters; // @synthesize childSecurityAssociationParameters=_childSecurityAssociationParameters;
@property(readonly) NEVPNIKEv2SecurityAssociationParameters *IKESecurityAssociationParameters; // @synthesize IKESecurityAssociationParameters=_IKESecurityAssociationParameters;
@property(copy) NSString *serverCertificateCommonName; // @synthesize serverCertificateCommonName=_serverCertificateCommonName;
@property(copy) NSString *serverCertificateIssuerCommonName; // @synthesize serverCertificateIssuerCommonName=_serverCertificateIssuerCommonName;
@property long long deadPeerDetectionRate; // @synthesize deadPeerDetectionRate=_deadPeerDetectionRate;
- (void).cxx_destruct;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)clone;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

