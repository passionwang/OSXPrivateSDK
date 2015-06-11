//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileSync/SFBase.h>

#import "SFSyncSet.h"
#import "SFSyncSetPriv.h"

@class NSArray, NSDate, NSDictionary, NSException, NSNumber, NSSet, NSString, SFPeer;

@interface SFSyncSet : SFBase <SFSyncSet, SFSyncSetPriv>
{
    NSDictionary *_info;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
- (void)_setInfoPrivate:(id)arg1 forwardToFSA:(BOOL)arg2;
- (void)statusCallback:(id)arg1;
- (void)registerForCallbacks;
@property SEL statusCallbackSelector;
@property(retain) id statusCallbackDelegate;
@property(copy) NSDictionary *info;
- (void)setAllPeers:(id)arg1;
@property(readonly) unsigned int unresolvedErrorCount; // @dynamic unresolvedErrorCount;
@property(readonly) unsigned int unresolvedConflictCount; // @dynamic unresolvedConflictCount;
@property(readonly) NSNumber *totalPasses;
@property(readonly) NSNumber *totalItems;
@property(readonly) NSNumber *totalBytes;
@property(readonly) NSString *syncSetRef;
@property(readonly) int state; // @dynamic state;
@property(readonly) NSNumber *progress;
@property(copy) NSDate *nextSyncTime; // @dynamic nextSyncTime;
@property(copy) NSString *name; // @dynamic name;
@property(readonly) NSDate *lastSuccessfulSyncTime; // @dynamic lastSuccessfulSyncTime;
@property(readonly) int lastSyncResult; // @dynamic lastSyncResult;
@property(readonly) BOOL hasActiveUI; // @dynamic hasActiveUI;
@property BOOL isAutomaticallySyncing; // @dynamic isAutomaticallySyncing;
@property(readonly) NSNumber *currentPass;
@property(readonly) NSString *currentItemPath;
@property(readonly) NSString *currentItemName;
@property(readonly) NSNumber *completedItems;
@property(readonly) NSNumber *completedBytes;
@property double automaticSyncInterval; // @dynamic automaticSyncInterval;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)finalize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property BOOL abortOnUnresolvedConflict; // @dynamic abortOnUnresolvedConflict;
@property(readonly) NSSet *allPeers; // @dynamic allPeers;
@property BOOL autoSyncOnFileSystemModification; // @dynamic autoSyncOnFileSystemModification;
@property(readonly) BOOL canSyncNow; // @dynamic canSyncNow;
@property(copy) NSArray *defaultSyncOptions; // @dynamic defaultSyncOptions;
@property(readonly) NSString *descriptionDebug; // @dynamic descriptionDebug;
@property(readonly) NSException *firstSyncException; // @dynamic firstSyncException;
@property(readonly) BOOL hasUnsyncedChanges; // @dynamic hasUnsyncedChanges;
@property(readonly) NSString *hoardPath; // @dynamic hoardPath;
@property(readonly) BOOL isPHDSyncSet; // @dynamic isPHDSyncSet;
@property(readonly) NSArray *legacyConflicts; // @dynamic legacyConflicts;
@property(readonly) NSArray *legacyExceptions; // @dynamic legacyExceptions;
@property(readonly) NSSet *localPeers; // @dynamic localPeers;
@property(readonly) NSSet *remotePeers; // @dynamic remotePeers;
@property BOOL resetSyncHistoryAtNextSync; // @dynamic resetSyncHistoryAtNextSync;
@property BOOL resolveAllConflictsWithMostRecent; // @dynamic resolveAllConflictsWithMostRecent;
@property(copy) SFPeer *resolveConflictsInFavorOfPeer; // @dynamic resolveConflictsInFavorOfPeer;
@property(readonly) unsigned int resolvedConflictCount; // @dynamic resolvedConflictCount;
@property BOOL suppressConflictDialogs; // @dynamic suppressConflictDialogs;
@property BOOL suppressErrorDialogs; // @dynamic suppressErrorDialogs;
@property(copy) NSDictionary *syncSetStatus; // @dynamic syncSetStatus;

@end

