//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DMPrincipalManagement.h"

@class ISS_MMiDiskSession;

@interface ISS_DMPrincipalManagementImpl : NSObject <DMPrincipalManagement>
{
    ISS_MMiDiskSession *_iDiskSession;
}

- (id)listGroupsForAccountNamed:(id)arg1;
- (id)groupExists:(id)arg1;
- (id)listMembers:(id)arg1;
- (id)removeGroup:(id)arg1;
- (id)addPrincipals:(id)arg1 toGroup:(id)arg2;
- (id)removePrincipals:(id)arg1 fromGroup:(id)arg2;
- (id)createGroup:(id)arg1 withMembers:(id)arg2;
- (id)listSecondaryUsersForAccountNamed:(id)arg1;
- (id)resetPassword:(id)arg1 forSecondaryUserNamed:(id)arg2;
- (id)allSecondaryUserInfo;
- (id)lookupPasswordForSecondaryUserNamed:(id)arg1;
- (id)removeSecondaryUserNamed:(id)arg1;
- (id)createSecondaryUserNamed:(id)arg1 withPassword:(id)arg2;
- (id)initWithIDiskSession:(id)arg1;
- (id)_createXMLDataForGroupsForAccount:(id)arg1;
- (id)_createXMLDataForListMembers:(id)arg1;
- (id)_createXMLDataForGroupExists:(id)arg1;
- (id)_createXMLDataForAddPrincipals:(id)arg1 toGroup:(id)arg2;
- (id)_createXMLDataForRemovePrincipals:(id)arg1 fromGroup:(id)arg2;
- (id)_createXMLDataForGroupRemove:(id)arg1;
- (id)_createXMLDataForGroupCreate:(id)arg1 withMembers:(id)arg2;
- (id)_createXMLDataForSecondaryList:(id)arg1;
- (id)_createXMLDataForSecondaryReset:(id)arg1 withPassword:(id)arg2;
- (id)_createXMLDataForAllSecondaryInfo;
- (id)_createXMLDataForSecondaryPasswordLookup:(id)arg1;
- (id)_createXMLDataForSecondaryRemove:(id)arg1;
- (id)_createXMLDataForSecondaryCreate:(id)arg1 andPassword:(id)arg2;
- (void)_setIDiskSession:(id)arg1;

@end

