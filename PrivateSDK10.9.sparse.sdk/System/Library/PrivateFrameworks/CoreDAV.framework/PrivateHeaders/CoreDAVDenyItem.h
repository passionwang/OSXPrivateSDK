//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVDenyItem : CoreDAVItem
{
    NSMutableSet *_privileges;
}

+ (id)copyParseRules;
@property(retain) NSMutableSet *privileges; // @synthesize privileges=_privileges;
- (void)addPrivilege:(id)arg1;
- (void)write:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

