/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalSession.h>

@class CalOperationQueue;

@interface CaliMIPSession : CalSession
{
    CalOperationQueue *_operationQueue;
}

+ (id)sharedInstance;
@property(retain) CalOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (double)timeSinceLastSync;
- (void)systemWillSleep;
- (void)systemNetworkDidChange;
- (void)systemDidWake;
- (void)synchronizeWithFlags:(long long)arg1;
- (BOOL)processChangeRequests:(BOOL)arg1;
- (BOOL)persistErrorAndNotify;
- (void)deletePersistedErrorAndNotify;
- (void)deactivate;
- (BOOL)activate;
- (void)dealloc;

@end

