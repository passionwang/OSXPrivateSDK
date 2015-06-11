/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ACAccount.h"

@class NSArray, NSDictionary, NSString;

@interface ACAccount (iCloudAccount)
+ (id)icaAppleAccountWithAppleID:(id)arg1 password:(id)arg2;
- (id)icaAppleAccountInfo;
- (id)icaMobileMeInfo;
- (id)icaPropertiesForDataclass:(id)arg1;
@property(readonly, nonatomic) NSDictionary *icaAvailableFeatures; // @dynamic icaAvailableFeatures;
- (id)icaAuthTokenWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *icaCloudKitToken; // @dynamic icaCloudKitToken;
- (id)icaMapsToken;
@property(readonly, nonatomic) NSString *icaBTMMInfiniteToken; // @dynamic icaBTMMInfiniteToken;
@property(readonly, nonatomic) ACAccount *icaFmipAccount; // @dynamic icaFmipAccount;
@property(readonly, nonatomic) ACAccount *icaFmfAccount; // @dynamic icaFmfAccount;
@property(readonly, nonatomic) NSString *icaAuthToken; // @dynamic icaAuthToken;
@property(readonly, nonatomic) NSDictionary *icaTokens; // @dynamic icaTokens;
@property(nonatomic, setter=icaSetDelegateParameters:) NSDictionary *icaDelegateParameters; // @dynamic icaDelegateParameters;
@property(nonatomic, setter=icaSetNeedsToVerifyTerms:) BOOL icaNeedsToVerifyTerms;
@property(readonly, nonatomic) NSArray *icaAppleIDAliases; // @dynamic icaAppleIDAliases;
@property(readonly, nonatomic) NSString *icaAppleIDAlias; // @dynamic icaAppleIDAlias;
@property(readonly, nonatomic) NSString *icaPrimaryEmail; // @dynamic icaPrimaryEmail;
@property(readonly, nonatomic) BOOL icaIsPrimaryEmailVerified;
@property(nonatomic, setter=icaSetPrimaryAccount:) BOOL icaIsPrimaryAccount;
@property(readonly, nonatomic) NSString *icaAccountTypeString; // @dynamic icaAccountTypeString;
@property(readonly, nonatomic) NSString *icaPersonID; // @dynamic icaPersonID;
@property(readonly, nonatomic) NSString *icaLastName; // @dynamic icaLastName;
@property(readonly, nonatomic) NSString *icaFirstName; // @dynamic icaFirstName;
@property(readonly, nonatomic) NSString *icaDisplayName; // @dynamic icaDisplayName;

// Remaining properties
@property(readonly, nonatomic) NSString *icsMapsToken; // @dynamic icsMapsToken;
@end

