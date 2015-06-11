//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVResourceTypeItem.h"

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem
{
    CoreDAVItemWithNoChildren *_calendar;
    CoreDAVItemWithNoChildren *_scheduleInbox;
    CoreDAVItemWithNoChildren *_scheduleOutbox;
    CoreDAVItemWithNoChildren *_notification;
    CoreDAVItemWithNoChildren *_subscribed;
    CoreDAVItemWithNoChildren *_sharedOwner;
}

@property(retain) CoreDAVItemWithNoChildren *sharedOwner; // @synthesize sharedOwner=_sharedOwner;
@property(retain) CoreDAVItemWithNoChildren *subscribed; // @synthesize subscribed=_subscribed;
@property(retain) CoreDAVItemWithNoChildren *notification; // @synthesize notification=_notification;
@property(retain) CoreDAVItemWithNoChildren *scheduleOutbox; // @synthesize scheduleOutbox=_scheduleOutbox;
@property(retain) CoreDAVItemWithNoChildren *scheduleInbox; // @synthesize scheduleInbox=_scheduleInbox;
@property(retain) CoreDAVItemWithNoChildren *calendar; // @synthesize calendar=_calendar;
- (void)write:(id)arg1;
- (id)copyParseRules;
- (id)description;
- (void)dealloc;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;

@end

