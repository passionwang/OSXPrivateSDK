/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalExchangePersistentOperation.h>

#import "CalMessageTraceableOpearation-Protocol.h"
#import "CalRevertableOperation-Protocol.h"

@class NSManagedObjectID;

@interface CalExchangeCreateFolderOperation : CalExchangePersistentOperation <CalRevertableOperation, CalMessageTraceableOpearation>
{
    NSManagedObjectID *_calendarID;
}

- (id)messageTracerUUID;
- (id)messageTracerName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (id)debugTitle;
- (BOOL)shouldDeletePendingOperation:(id)arg1;
- (id)createRevertOperationInContext:(id)arg1 inSession:(id)arg2;
- (BOOL)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)calendarID;
- (id)initWithSessionID:(id)arg1 calendarID:(id)arg2;

@end

