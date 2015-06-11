/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ISServiceRemoteObject-Protocol.h"

@protocol ISDownloadService <ISServiceRemoteObject>
- (void)runWarningDialogForDownloadMetadata:(id)arg1 error:(id)arg2 replyBlock:(id)arg3;
- (void)runErrorDialogForDownloadMetadata:(id)arg1 error:(id)arg2;
- (void)checkPreflightWithItemIdentifier:(unsigned long long)arg1 url:(id)arg2 systemVersionInfo:(id)arg3 replyBlock:(id)arg4;
- (void)recoverAvailableDiskSpace;
- (void)lockedApplicationTriedToLaunchAtPath:(id)arg1;
- (void)unlockApplicationsWithBundleIdentifier:(id)arg1;
- (void)lockApplicationsForBundleID:(id)arg1;
- (void)fetchIconForItemIdentifier:(unsigned long long)arg1 atURL:(id)arg2 replyBlock:(id)arg3;
- (void)cacheReceiptAsString:(id)arg1 forDownload:(id)arg2 reply:(id)arg3;
- (void)checkAutomaticDownloadQueue;
- (void)triggerDownloads;
- (void)checkServerDownloadQueueWithReplyBlock:(id)arg1;
- (void)checkStoreDownloadQueueForAccount:(id)arg1;
- (void)downloadWithItemIdentifier:(unsigned long long)arg1 reply:(id)arg2;
- (void)downloadsWithTypeMask:(long long)arg1 reply:(id)arg2;
- (void)removeDownloadQueueObserver:(id)arg1;
- (void)addDownloadQueueObserver:(id)arg1;
- (void)resetStatusForDownloadWithItemIdentifier:(unsigned long long)arg1;
- (void)removeDownloadWithItemIdentifier:(unsigned long long)arg1;
- (void)cancelDownloadWithItemIdentifier:(unsigned long long)arg1 promptToConfirm:(BOOL)arg2 askToDelete:(BOOL)arg3;
- (void)resumeDownloadWithItemIdentifier:(unsigned long long)arg1;
- (void)pauseDownloadWithItemIdentifier:(unsigned long long)arg1;
- (void)addDownload:(id)arg1;
- (void)performDownload:(id)arg1 withOptions:(unsigned long long)arg2 replyBlock:(id)arg3;
@end

