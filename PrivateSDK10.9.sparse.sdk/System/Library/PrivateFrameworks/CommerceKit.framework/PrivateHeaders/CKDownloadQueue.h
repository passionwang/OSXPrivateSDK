//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSValue;

@interface CKDownloadQueue : NSObject
{
    BOOL _checkingQueue;
    NSValue *_registrationDaemonKey;
    NSMutableArray *_observers;
}

+ (BOOL)cacheReceiptDataForDownload:(id)arg1;
+ (void)triggerDownloads;
+ (void)whenQueueIsIdlePerformBlock:(CDUnknownBlockType)arg1;
@property(readonly) NSArray *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (long long)_indexOfDownloadWithIdentifier:(unsigned long long)arg1;
- (void)triggerDownloads;
- (void)cancelDownload:(id)arg1;
- (void)addDownload:(id)arg1;
- (id)downloadForItemIdentifier:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *downloads; // @dynamic downloads;
- (void)_stopObservingDaemon;
- (void)_registerWithDaemon;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

