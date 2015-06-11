/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMDaemonCore/IMDService.h>

#import "IDSAccountControllerDelegate-Protocol.h"
#import "IDSAccountRegistrationDelegate-Protocol.h"

@class IDSAccountController, NSArray, NSString;

@interface IMDIDSService : IMDService <IDSAccountControllerDelegate, IDSAccountRegistrationDelegate>
{
    IDSAccountController *_accountController;
    BOOL _activatingAccount;
    BOOL _deactivatingAccount;
}

@property(readonly, retain, nonatomic) IDSAccountController *idsAccountController; // @synthesize idsAccountController=_accountController;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (void)accountController:(id)arg1 accountUpdated:(id)arg2;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)disableAccount:(id)arg1;
- (void)enableAccount:(id)arg1;
- (id)newAccountWithAccountDefaults:(id)arg1 accountID:(id)arg2;
- (void)accountRemoved:(id)arg1;
- (void)accountAdded:(id)arg1;
@property(readonly, nonatomic) NSArray *activeAccountsFromIdentityServices;
@property(readonly, retain, nonatomic) NSArray *accountsLoadedFromIdentityServices;
- (id)imdAccountLoginFromIDSAccountWithType:(int)arg1 login:(id)arg2;
- (id)_serviceDomain;
- (id)accountFromIDSAccountWithUniqueID:(id)arg1;
- (Class)accountClass;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;
- (void)_loadIDSAccountController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

