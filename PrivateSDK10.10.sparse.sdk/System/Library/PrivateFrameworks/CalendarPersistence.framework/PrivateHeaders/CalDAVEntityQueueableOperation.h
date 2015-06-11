/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalDAVPersistentQueueableOperation.h>

#import "CoreDAVGetTaskDelegate-Protocol.h"

@class CalDAVCalendarSource, NSString;

@interface CalDAVEntityQueueableOperation : CalDAVPersistentQueueableOperation <CoreDAVGetTaskDelegate>
{
    CalDAVCalendarSource *_source;
    NSString *_entityLocalUID;
    NSString *_entitySharedUID;
    NSString *_calendarTitle;
    NSString *_principalTitle;
    NSString *_serverFilename;
    BOOL _clearEventFromQueueAfterForce;
}

@property(retain) NSString *serverFilename; // @synthesize serverFilename=_serverFilename;
@property(retain) NSString *entityLocalUID; // @synthesize entityLocalUID=_entityLocalUID;
@property(retain) NSString *entitySharedUID; // @synthesize entitySharedUID=_entitySharedUID;
@property(retain) NSString *principalTitle; // @synthesize principalTitle=_principalTitle;
@property(retain) NSString *calendarTitle; // @synthesize calendarTitle=_calendarTitle;
@property(retain) CalDAVCalendarSource *source; // @synthesize source=_source;
- (void)configureOperationDependencies;
- (void)queueAttachmentOperations:(id)arg1 event:(id)arg2;
- (void)dealloc;
- (void)setError:(id)arg1 withResponseStatus:(id)arg2 forItem:(id)arg3;
- (void)setError:(id)arg1;
- (id)extraUserInfoForRebuiltError;
- (void)_cleanUpOperationAfterForceWithContext:(id)arg1;
- (void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)forceEntityFromServerAndClearEventFromQueue:(BOOL)arg1 withContext:(id)arg2;
- (void)forceEntityFromServerAndClearEventFromQueue:(BOOL)arg1;
- (void)forceEntityFromServer;
- (void)forceEntityToServer;
- (void)performOperation;
- (id)initWithChangeRequest:(id)arg1 andSource:(id)arg2;
- (id)initWithChangeRequest:(id)arg1 andSession:(id)arg2;
- (void)configureWithSource:(id)arg1 inObjectContext:(id)arg2;
- (void)updateAttachmentUrlIfDirectory:(id)arg1 context:(id)arg2 event:(id)arg3;
- (void)performOperation:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

