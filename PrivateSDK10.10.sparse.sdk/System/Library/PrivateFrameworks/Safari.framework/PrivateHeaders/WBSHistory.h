/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "WBSHistoryStoreDelegate-Protocol.h"

@class NSCountedSet, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, WBSHistorySQLiteStore;

// Not exported
@interface WBSHistory : NSObject <WBSHistoryStoreDelegate>
{
    NSObject<OS_dispatch_queue> *_entriesByURLStringAccessQueue;
    NSMutableDictionary *_entriesByURLString;
    NSCountedSet *_stringsForUserTypedDomainExpansion;
    unsigned long long _historyAgeLimitInDays;
    BOOL _hasStartedLoadingHistory;
    NSObject<OS_dispatch_queue> *_waitUntilHistoryHasLoadedQueue;
    WBSHistorySQLiteStore *_historyStore;
}

+ (void)clearExistingSharedHistory;
+ (id)historyDatabaseModificationDate;
+ (id)historyDatabaseWriteAheadLogURL;
+ (id)historyDatabaseURL;
+ (id)historyPropertyListURL;
+ (id)existingSharedHistory;
@property(readonly, nonatomic) unsigned long long historyAgeLimitInDays; // @synthesize historyAgeLimitInDays=_historyAgeLimitInDays;
- (void).cxx_destruct;
- (Class)_historyItemClass;
- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;
- (void)_removeAllVisitedLinks;
- (id)_createHistoryStore;
- (id)historyStore;
- (BOOL)historyStoreShouldRemoveItemsWithURLStringsThatAreNotValidURLs:(id)arg1;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (void)_dispatchHistoryCleared:(id)arg1;
- (void)_dispatchHistoryItemsRemovedDuringLoading:(id)arg1;
- (void)_dispatchHistoryItemsRemoved:(id)arg1;
- (void)_dispatchHistoryItemDidChange:(id)arg1;
- (void)_dispatchHistoryItemWillChange:(id)arg1;
- (void)_dispatchHistoryItemsAdded:(id)arg1;
- (void)_dispatchHistoryItemsLoaded:(id)arg1;
- (void)_dispatchHistoryLoaded;
- (void)_sendNotification:(id)arg1 withItems:(id)arg2;
- (void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2;
- (void)historyLoaderDidFinishLoading:(id)arg1;
- (void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4;
- (void)savePendingChangesBeforeTerminationWithCompletionHandler:(id)arg1;
- (void)performBlockAfterHistoryHasLoaded:(id)arg1;
- (void)waitUntilHistoryHasLoaded;
- (void)_waitUntilHistoryHasLoadedMainThread;
- (void)_loadHistory;
- (void)_loadHistoryAsynchronouslyIfNeeded;
- (double)_ageLimitDay;
- (void)removeAllTestDriveHistoryWithCompletionHandler:(id)arg1;
- (void)makePermanentAllTestDriveHistory;
- (void)close;
- (void)clearHistoryWithCompletionHandler:(id)arg1;
- (void)clearHistory;
- (void)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id)arg3;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (void)updateTitle:(id)arg1 forVisit:(id)arg2;
- (BOOL)canRecordRedirectFromVisit:(id)arg1 to:(id)arg2;
- (id)itemRedirectedFrom:(id)arg1 to:(id)arg2;
- (id)itemRedirectedFrom:(id)arg1 to:(id)arg2 origin:(long long)arg3 date:(id)arg4;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 timeOfVisit:(double)arg3 wasHTTPNonGet:(BOOL)arg4 wasFailure:(BOOL)arg5 increaseVisitCount:(BOOL)arg6 origin:(long long)arg7;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 wasHTTPNonGet:(BOOL)arg3 wasFailure:(BOOL)arg4 increaseVisitCount:(BOOL)arg5;
- (void)_replayAndAddTombstone:(id)arg1;
- (void)_getAllTombstonesWithCompletion:(id)arg1;
- (void)_setFetchThrottlerData:(id)arg1;
- (id)_fetchThrottlerData;
- (void)_setPushThrottlerData:(id)arg1;
- (id)_pushThrottlerData;
- (void)_setServerChangeTokenData:(id)arg1;
- (void)_getServerChangeTokenDataWithCompletion:(id)arg1;
- (void)_visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(BOOL)arg2 completion:(id)arg3;
- (void)_getVisitsAndTombstonesNeedingSyncWithCompletion:(id)arg1;
- (void)enumerateItemsUsingBlock:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfHistoryItemsOnHistoryQueue;
@property(readonly, nonatomic) unsigned long long numberOfHistoryItems;
@property(readonly, nonatomic) BOOL hasAnyHistoryItems;
- (void)_removeItemFromStringsForUserTypedDomainExpansion:(id)arg1;
- (void)_addItemToStringsForUserTypedDomainExpansion:(id)arg1;
- (BOOL)_isStringForUserTypedDomainExpansionInHistory:(id)arg1;
- (id)_removeItemForURLString:(id)arg1;
- (void)_addItem:(id)arg1 addToStringsForUserTypedDomainExpansions:(BOOL)arg2;
- (void)addAutocompleteTrigger:(id)arg1 forURLString:(id)arg2;
- (id)itemForURL:(id)arg1;
- (void)_removeHistoryItemsInResponseToUserAction:(id)arg1 completionHandler:(id)arg2;
- (void)_removeHistoryItemsInResponseToUserAction:(id)arg1;
- (id)itemForURLString:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

