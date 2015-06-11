/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface FCLimitItem : NSObject
{
    NSMutableDictionary *_dictionary;
}

+ (id)computerLimitFromArray:(id)arg1;
+ (id)computerLimitForUser:(id)arg1;
+ (id)limitWithID:(id)arg1 forUser:(id)arg2;
+ (id)allLimitsForUser:(id)arg1;
+ (id)computerLimit;
+ (id)limitItemWithURL:(id)arg1;
+ (id)limitItemWithBundleID:(id)arg1;
+ (id)limitItemWithDictionary:(id)arg1;
+ (id)limitItemWithLimitItem:(id)arg1;
- (void)setTimeLastUpdated:(int)arg1;
- (int)timeLastUpdated;
- (void)setAllowances:(id)arg1;
- (id)allowances;
- (void)setAllowancesActive:(BOOL)arg1;
- (BOOL)allowancesActive;
- (void)setCurfews:(id)arg1;
- (id)curfews;
- (void)setPath:(id)arg1;
- (id)path;
- (void)setBundleID:(id)arg1;
- (id)bundleID;
- (void)setName:(id)arg1;
- (id)name;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (void)setItemType:(id)arg1;
- (id)itemType;
- (id)_dictionary;
- (id)description;
- (void)removeWeekendAllowance;
- (void)removeWeekdayAllowance;
- (void)setWeekendAllowanceSeconds:(int)arg1;
- (void)setWeekdayAllowanceSeconds:(int)arg1;
- (id)weekendAllowance;
- (id)weekdayAllowance;
- (id)briefDescription;
- (id)scheduleDescription;
- (BOOL)hasActiveSchedule;
- (id)uniqueID;
- (id)plistRepresentation;
- (BOOL)isWebSite;
- (BOOL)isProgram;
- (BOOL)isComputer;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)dealloc;

@end

