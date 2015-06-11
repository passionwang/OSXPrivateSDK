/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MFDefaults : NSObject
{
}

+ (id)defaultNameForFlagColor:(BOOL)arg1;
+ (unsigned long long)deferredPreferredWindowBackingLocation;
+ (unsigned long long)preferredWindowBackingLocation;
+ (void)setPreferredWindowBackingLocation:(unsigned long long)arg1;
+ (void)setupLoggingDefaults;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (BOOL)synchronize;
- (long long)integerForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)todosMailbox;
- (id)trashMailboxName;
- (id)notesMailbox;
- (id)draftsMailbox;
- (id)archiveMailbox;
- (void)setComposeMode:(long long)arg1;
- (long long)composeMode;
- (void)dealloc;
- (id)init;

@end

