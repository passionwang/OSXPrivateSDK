//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVMatchResultsItem : CoreDAVItem
{
    CoreDAVLeafItem *_rank;
    CoreDAVLeafItem *_language;
    CoreDAVLeafItem *_region;
    CoreDAVLeafItem *_calendarDescription;
}

+ (id)copyParseRules;
@property(retain) CoreDAVLeafItem *calendarDescription; // @synthesize calendarDescription=_calendarDescription;
@property(retain) CoreDAVLeafItem *region; // @synthesize region=_region;
@property(retain) CoreDAVLeafItem *language; // @synthesize language=_language;
@property(retain) CoreDAVLeafItem *rank; // @synthesize rank=_rank;
- (id)description;
- (void)dealloc;

@end

