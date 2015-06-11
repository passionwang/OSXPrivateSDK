/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CallHistory/CHLogger.h>

#import "SyncManagerProtocol-Protocol.h"

@class DBHandleManager, NSString, TransactionManager;

@interface SyncManager : CHLogger <SyncManagerProtocol>
{
    TransactionManager *_transactionManager;
    DBHandleManager *_handleManager;
}

@property(readonly, nonatomic) DBHandleManager *handleManager; // @synthesize handleManager=_handleManager;
- (void).cxx_destruct;
- (id)archiveCallObject:(id)arg1;
- (void)resetTimers;
- (double)timerOutgoing;
- (double)timerIncoming;
- (double)timerLifetime;
- (void)addUpdateTransactions:(id)arg1;
- (void)updateAllObjects:(id)arg1;
- (void)updateObjects:(id)arg1;
- (void)deleteObjectsWithLimits:(id)arg1;
- (void)deleteAllObjects;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithLimits:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchAllObjects;
- (void)insertWithoutTransaction:(id)arg1;
- (void)insert:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

