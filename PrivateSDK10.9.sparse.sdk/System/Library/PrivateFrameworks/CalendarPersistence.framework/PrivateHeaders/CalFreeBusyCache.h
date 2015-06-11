//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSTimer;

@interface CalFreeBusyCache : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_eventsCache;
    NSMutableArray *_runningLookups;
    NSTimer *_cacheExpiryTimer;
    NSMutableDictionary *_expiresNextTimer;
    NSMutableDictionary *_expiresNextTimerPlusOne;
    NSMutableSet *_addressesToRefresh;
}

+ (int)leastAvailabileFreeBusyTypeForArray:(id)arg1;
+ (id)numberForFreeBusyType:(int)arg1;
- (void)freeBusyServerRequestForCUAddresses:(id)arg1 forEventSharedUid:(id)arg2 inTimeRange:(id)arg3 callbackTo:(id)arg4 withSelector:(SEL)arg5;
- (BOOL)isConnected;
- (void)freeBusyOperationWithInfo:(id)arg1 spans:(id)arg2 details:(id)arg3 otherInfos:(id)arg4 error:(id)arg5;
- (void)clearCacheExceptForSharedUIDs:(id)arg1;
- (void)cancelCallbacksTo:(id)arg1;
- (id)knownFreeBusyForCUAddress:(id)arg1 forEventSharedUid:(id)arg2 inTimeRange:(id)arg3;
- (id)freeBusyForCUAddress:(id)arg1 forEventSharedUid:(id)arg2 inTimeRange:(id)arg3 callbackTo:(id)arg4 withSelector:(SEL)arg5;
- (id)knownFreeBusyAndEventDetailsForCUAddresses:(id)arg1 forEventSharedUid:(id)arg2 inTimeRange:(id)arg3;
- (id)freeBusyAndEventDetailsForCUAddresses:(id)arg1 forEventSharedUid:(id)arg2 inTimeRange:(id)arg3 callbackTo:(id)arg4 withSelector:(SEL)arg5;
- (id)_freeBusyForCUAddresses:(id)arg1 forEventSharedUid:(id)arg2 inTimeRange:(id)arg3 requestFromServer:(BOOL)arg4 callbackTo:(id)arg5 withSelector:(SEL)arg6;
- (id)bucketKeyDatesForStartDate:(id)arg1 endDate:(id)arg2;
- (id)bucketKeyDateForDate:(id)arg1;
- (void)cacheEventDetailsArray:(id)arg1 forCUAddress:(id)arg2;
- (void)cacheFreeBusy:(id)arg1 forCUAddress:(id)arg2 event:(id)arg3 timeRange:(id)arg4;
- (void)_cacheExpiryTimerFired;
- (void)_markForExpirationFrom:(id)arg1 to:(id)arg2 forCUAddress:(id)arg3 event:(id)arg4;
- (void)_removeSpanFrom:(id)arg1 to:(id)arg2 fromTree:(id)arg3;
- (void)_insertSpanFrom:(id)arg1 to:(id)arg2 withValue:(id)arg3 intoTree:(id)arg4;
- (void)dealloc;
- (void)cleanUp;
- (id)init;

@end

