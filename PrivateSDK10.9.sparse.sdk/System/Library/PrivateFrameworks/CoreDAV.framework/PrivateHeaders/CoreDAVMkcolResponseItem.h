//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem
{
    NSMutableSet *_propStats;
}

+ (id)copyParseRules;
@property(retain) NSMutableSet *propStats; // @synthesize propStats=_propStats;
- (BOOL)hasPropertyError;
- (void)addPropStat:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

