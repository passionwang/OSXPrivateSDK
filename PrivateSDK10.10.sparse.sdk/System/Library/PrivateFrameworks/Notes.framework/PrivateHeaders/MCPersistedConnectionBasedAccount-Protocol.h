/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MCPersistedAccount-Protocol.h"

@class NSData, NSString;

@protocol MCPersistedConnectionBasedAccount <MCPersistedAccount>
@property(copy, nonatomic) NSString *authenticationSchemeName;
@property(copy, nonatomic) NSData *tlsCertificate;
@property(nonatomic) long long securityLayerType;
@property(nonatomic) long long port;
@property(copy, nonatomic) NSString *hostname;
@end

