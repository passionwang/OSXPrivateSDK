/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet;

@interface CalUILocationSearchManager : NSObject
{
    BOOL _resultsDisplayed;
    id <CalUILocationSearchManagerDelegate> _delegate;
    NSMutableSet *_pendingRequests;
}

@property BOOL resultsDisplayed; // @synthesize resultsDisplayed=_resultsDisplayed;
@property(retain) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property __weak id <CalUILocationSearchManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)shouldRequestKeyDisplayResultsWhenCompleted:(id)arg1;
- (void)stopProgressIndicator;
- (void)startProgressIndicatorWithFailSafe;
- (void)startProgressIndicator;
- (void)displaySearchResults;
- (BOOL)shouldDisplayResults;
- (BOOL)isLocalSearchPending;
- (BOOL)isCalDAVsearchPending;
- (BOOL)isRequestPendingForKey:(id)arg1;
- (void)unregisterAllPendingRequests;
- (void)cancelAllPendingRequests;
- (void)unregisterPendingRequestWithKey:(id)arg1;
- (void)registerPendingRequestWithKey:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

