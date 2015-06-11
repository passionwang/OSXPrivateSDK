/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface AdminDirectoryService : NSObject
{
    unsigned int mDirReference;
    NSString *mNameOfDefaultLocalNode;
    NSString *mNameOfSearchNode;
}

+ (unsigned int)sharedSession;
+ (id)sharedDirectoryService;
+ (unsigned int)dirReferenceForServiceAtAddress:(id)arg1 name:(id)arg2 password:(id)arg3 port:(long long)arg4;
+ (id)directoryServiceAtAddress:(id)arg1 name:(id)arg2 password:(id)arg3 port:(long long)arg4;
- (id)namesOfNodeWithName:(CDStruct_7d936526 *)arg1 patternMatch:(int)arg2;
- (id)nameOfNodeWithName:(CDStruct_7d936526 *)arg1 patternMatch:(int)arg2;
- (id)nameOfSearchNode;
- (id)nameOfDefaultLocalNode;
- (void)close;
- (unsigned int)session;
- (BOOL)isOpen;
- (void)open;
- (void)finalize;
- (void)dealloc;
- (id)initWithDirectoryServiceAtAddress:(id)arg1 name:(id)arg2 password:(id)arg3 port:(long long)arg4;

@end

