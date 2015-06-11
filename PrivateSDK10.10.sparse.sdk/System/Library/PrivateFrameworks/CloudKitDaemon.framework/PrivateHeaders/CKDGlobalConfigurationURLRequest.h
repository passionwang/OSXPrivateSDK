/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDServerConfiguration;

// Not exported
@interface CKDGlobalConfigurationURLRequest : CKDURLRequest
{
    CKDServerConfiguration *_configuration;
}

@property(retain, nonatomic) CKDServerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)requestDidParsePlistObject:(id)arg1;
- (Class)expectedResponseClass;
- (BOOL)hasRequestBody;
- (id)httpMethod;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (id)additionalHeaderValues;
- (BOOL)allowsAnonymousAccount;
- (BOOL)requiresSignature;
- (BOOL)requiresDeviceID;
- (BOOL)requiresConfiguration;

@end

