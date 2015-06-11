//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSError, NSMutableDictionary, NSUUID, NSXPCConnection;

@interface IASCloudConfigClient : NSObject
{
    BOOL _hasActivationRecord;
    NSXPCConnection *_connection;
    unsigned long long _activationStatus;
    unsigned long long _profileStatus;
    unsigned long long _installationStatus;
    NSMutableDictionary *_activationReplyBlocks;
    NSMutableDictionary *_profileReplyBlocks;
    NSMutableDictionary *_installationReplyBlocks;
    NSDictionary *_activationConfiguration;
    NSError *_activationError;
    NSDictionary *_authorizationInfo;
    NSError *_profileError;
    NSData *_activationProfile;
    NSUUID *_installationUUID;
    NSError *_installationError;
}

+ (id)sharedClient;
@property(retain) NSError *installationError; // @synthesize installationError=_installationError;
@property(retain) NSUUID *installationUUID; // @synthesize installationUUID=_installationUUID;
@property(retain) NSData *activationProfile; // @synthesize activationProfile=_activationProfile;
@property(retain) NSError *profileError; // @synthesize profileError=_profileError;
@property(retain) NSDictionary *authorizationInfo; // @synthesize authorizationInfo=_authorizationInfo;
@property(retain) NSError *activationError; // @synthesize activationError=_activationError;
@property(retain) NSDictionary *activationConfiguration; // @synthesize activationConfiguration=_activationConfiguration;
@property BOOL hasActivationRecord; // @synthesize hasActivationRecord=_hasActivationRecord;
@property(retain) NSMutableDictionary *installationReplyBlocks; // @synthesize installationReplyBlocks=_installationReplyBlocks;
@property(retain) NSMutableDictionary *profileReplyBlocks; // @synthesize profileReplyBlocks=_profileReplyBlocks;
@property(retain) NSMutableDictionary *activationReplyBlocks; // @synthesize activationReplyBlocks=_activationReplyBlocks;
@property unsigned long long installationStatus; // @synthesize installationStatus=_installationStatus;
@property unsigned long long profileStatus; // @synthesize profileStatus=_profileStatus;
@property unsigned long long activationStatus; // @synthesize activationStatus=_activationStatus;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)_triggerInstallationRequestForUUID:(id)arg1 withProfileData:(id)arg2;
- (void)_wrappedInstallationRequestWithArguments:(id)arg1;
- (void)_triggerProfileRequestForAuthorizationInfo:(id)arg1;
- (void)_triggerActivationRequest;
- (void)_ensureXPCConnection;
- (void)cancelActivationStatusRequest:(id)arg1;
- (id)requestInstallationWithUUID:(id)arg1 profileData:(id)arg2 timeout:(double)arg3 reply:(CDUnknownBlockType)arg4;
- (id)requestProfileWithAuthorization:(id)arg1 timeout:(double)arg2 reply:(CDUnknownBlockType)arg3;
- (id)requestActivationStatusWithTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

