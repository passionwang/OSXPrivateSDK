/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVTaskGroup.h"

#import "CoreDAVPropPatchTaskDelegate-Protocol.h"

@class ICSDocument, NSString, NSURL;

@interface CalDAVSetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate>
{
    NSURL *_inboxURL;
    ICSDocument *_calendarAvailability;
}

@property(retain, nonatomic) ICSDocument *calendarAvailability; // @synthesize calendarAvailability=_calendarAvailability;
@property(retain, nonatomic) NSURL *inboxURL; // @synthesize inboxURL=_inboxURL;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 calendarAvailability:(id)arg3 taskManager:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

