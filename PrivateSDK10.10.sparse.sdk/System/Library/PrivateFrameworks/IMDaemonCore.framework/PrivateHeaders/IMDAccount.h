/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IMSystemMonitorListener-Protocol.h"

@class IMDService, IMDServiceSession, NSDictionary, NSMutableDictionary, NSString;

@interface IMDAccount : NSObject <IMSystemMonitorListener>
{
    NSMutableDictionary *_accountDefaults;
    NSString *_account;
    IMDService *_service;
    IMDServiceSession *_session;
    NSMutableDictionary *_myStatus;
    NSDictionary *_lastPostedStatus;
    BOOL _isLoading;
    BOOL _isManaged;
}

@property(readonly, retain, nonatomic) NSDictionary *accountDefaults; // @synthesize accountDefaults=_accountDefaults;
@property(nonatomic) BOOL isManaged; // @synthesize isManaged=_isManaged;
@property(readonly, retain, nonatomic) IMDService *service; // @synthesize service=_service;
@property(readonly, retain, nonatomic) IMDServiceSession *session; // @synthesize session=_session;
@property(readonly, retain, nonatomic) NSString *accountID; // @synthesize accountID=_account;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, retain, nonatomic) NSDictionary *registrationAlertInfo;
@property(readonly, nonatomic) int registrationError;
@property(readonly, nonatomic) int registrationStatus;
- (id)_registrationInfo;
@property(readonly, retain, nonatomic) NSString *loginID;
- (void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3;
- (void)systemDidBecomeUnidle;
- (void)systemDidBecomeIdle;
- (void)_updateIdle;
- (void)tunesController:(id)arg1 playerInfoChanged:(id)arg2;
@property(readonly, nonatomic) BOOL shouldPublishNowPlaying;
@property(readonly, retain, nonatomic) NSDictionary *status;
@property(readonly, retain, nonatomic) NSDictionary *statusToSave;
@property(readonly, retain, nonatomic) NSDictionary *statusToPost;
- (void)changeStatus:(id)arg1;
- (void)releaseSession;
- (void)createSessionIfNecessary;
@property(readonly, retain, nonatomic) NSDictionary *accountInfoToPost;
- (void)postAccountCapabilitiesToListener:(id)arg1;
- (void)postAccountCapabilities;
- (void)writeAccountDefaults:(id)arg1;
@property(readonly, nonatomic) BOOL isDisabled;
@property(nonatomic) BOOL wasDisabledAutomatically;
@property(readonly, nonatomic) BOOL isActive;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3;

@end

