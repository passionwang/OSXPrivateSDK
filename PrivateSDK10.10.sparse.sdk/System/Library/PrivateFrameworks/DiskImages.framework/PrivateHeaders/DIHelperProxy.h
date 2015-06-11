/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DIHLHelperMasterProtocol-Protocol.h"

@class NSConditionLock, NSConnection, NSDictionary, NSDistantObject<DIHLHelperSlaveProtocol>, NSString;

// Not exported
@interface DIHelperProxy : NSObject <DIHLHelperMasterProtocol>
{
    void *_context;
    NSDictionary *_operation;
    void *_statusProc;
    NSConditionLock *_threadCondLock;
    struct __CFRunLoop *_workerRunLoop;
    int _threadResultsError;
    NSDictionary *_threadResultsDictionary;
    NSDistantObject<DIHLHelperSlaveProtocol> *_helper;
    NSString *_helperPath;
    NSConnection *_helperConnection;
    BOOL _helperRegistered;
    BOOL _helperDone;
    NSString *_serverName;
    struct AuthorizationOpaqueRef *_authorizationRef;
    int _helperPid;
    BOOL _withAuthentication;
}

- (id)helperToolPath;
- (int)performOperationReturning:(id *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)initWithDictionary:(id)arg1 andStatusProc:(void *)arg2 andContext:(void *)arg3 withAuthentication:(BOOL)arg4;
- (id)initWithDictionary:(id)arg1 andStatusProc:(void *)arg2 andContext:(void *)arg3;
- (void)helperConnectionInitialized:(id)arg1;
- (void)helperConnectionDied:(id)arg1;
- (void)helperFailedToRegister;
- (void)helperDied:(id)arg1;
- (void)setHelperDoneWithResult:(int)arg1;
- (void)watchForHelperDeath;
- (int)checkHelperStatusWaitingForExit:(BOOL)arg1;
- (void)threadRunRunLoop;
- (int)threadLaunchToolAuthenticated:(BOOL)arg1;
- (BOOL)threadSetupServer;
- (void)workerThread:(id)arg1;
- (void)disconnectFromHelper:(id)arg1;
- (void)sendOperationToHelper:(id)arg1;
- (int)synchronousFrameworkCallbackWithDictionary:(id)arg1;
- (int)frameworkCallbackWithDictionary:(id)arg1;
- (void)reportResultsToFramework:(id)arg1;
- (void)connectToFramework:(id)arg1;
- (int)askForPassword;
- (int)authWithFlags:(unsigned int)arg1;
- (BOOL)isAuthenticated;
- (int)authenticate;

@end

