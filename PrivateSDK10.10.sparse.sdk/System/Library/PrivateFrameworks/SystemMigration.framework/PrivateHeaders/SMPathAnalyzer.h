/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, SMFindSystemFiles;

@interface SMPathAnalyzer : NSObject
{
    NSString *_rootPath;
    BOOL _cancelled;
    SMFindSystemFiles *_fsf;
    NSObject<OS_dispatch_queue> *_fsfQueue;
}

+ (void)clearSizingCache;
+ (void)initialize;
+ (id)_findPathsWithParentDirectory:(id)arg1 rootPath:(id)arg2 omittingPaths:(id)arg3 expandDirectories:(BOOL)arg4;
@property(retain) NSObject<OS_dispatch_queue> *fsfQueue; // @synthesize fsfQueue=_fsfQueue;
@property(retain) SMFindSystemFiles *fsf; // @synthesize fsf=_fsf;
@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (id)prunedUserPathsWithParentDirectory:(id)arg1 omittingPaths:(id)arg2 includingPaths:(id)arg3;
- (id)prunedUserPathsWithParentDirectory:(id)arg1 omittingPaths:(id)arg2;
- (id)prunedUserPathsWithParentDirectory:(id)arg1 omittingPaths:(id)arg2 expandingBundles:(BOOL)arg3;
- (id)prunedReaperPathsReturningSize:(id *)arg1 targetSystemVersionString:(id)arg2;
- (id)prunedSystemPathsReturningSize:(id *)arg1;
- (id)prunedSystemPaths;
- (void)cancel;
- (id)initWithRootPath:(id)arg1 withFallbackFile:(id)arg2;
- (id)initWithRootPath:(id)arg1;
- (id)_initWithRootPath:(id)arg1 withFallbackFile:(id)arg2;
- (id)_nonSystemReceiptStoragePaths;
- (id)_extraPrinterPathsForUpgradeFromSnowLeopardOrBetter;
- (void)_superPruneForExpressions:(id)arg1 matching:(BOOL)arg2 fromPath:(id)arg3 paths:(id)arg4;

@end

