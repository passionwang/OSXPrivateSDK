/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalManagedCalendarChangeRequest.h>

@class NSString;

@interface CalManagedCalendarSplitDualTypeChangeRequest : CalManagedCalendarChangeRequest
{
}

+ (id)insertCalendarSplitDualTypeChangeRequestWithType:(int)arg1 sourceUID:(id)arg2 uri:(id)arg3 principalUID:(id)arg4 inboxURI:(id)arg5 isPendingEventMultiMoves:(BOOL)arg6 isPendingTaskMultiMoves:(BOOL)arg7 inManagedObjectContext:(id)arg8;

// Remaining properties
@property(retain, nonatomic) NSString *destinationCalendarURI; // @dynamic destinationCalendarURI;
@property BOOL isPendingEventMultiMoves; // @dynamic isPendingEventMultiMoves;
@property BOOL isPendingTaskMultiMoves; // @dynamic isPendingTaskMultiMoves;

@end

