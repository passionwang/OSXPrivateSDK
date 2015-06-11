/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSURLCache.h"

@class NSArray, NSLock, NSString;

@interface ISURLCacheGroup : NSURLCache
{
    NSArray *_caches;
    NSString *_clientIdentifier;
    NSLock *_lock;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
@property(readonly) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
- (void)_reloadForNewCaches:(id)arg1;
- (id)_ntsCacheForRequest:(id)arg1;
- (id)_ntsCacheForPersistentIdentifier:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)setMemoryCapacity:(unsigned long long)arg1;
- (void)setDiskCapacity:(unsigned long long)arg1;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)removeAllCachedResponses;
- (unsigned long long)memoryCapacity;
- (unsigned long long)diskCapacity;
- (unsigned long long)currentMemoryUsage;
- (unsigned long long)currentDiskUsage;
- (id)cachedResponseForRequest:(id)arg1;
- (void)setCachesFromPropertyList:(id)arg1;
- (void)saveMemoryCacheToDisk;
- (void)purgeMemoryCache;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;
- (id)initWithClientIdentifier:(id)arg1;
- (id)init;

@end

