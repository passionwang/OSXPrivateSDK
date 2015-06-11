/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SystemMigration/SMMigrationEngineStep.h>

@class NSArray, NSMutableArray;

@interface SMMigrateUserDataStep : SMMigrationEngineStep
{
    BOOL _copiesHomeDirectories;
    NSMutableArray *_cpEngineArray;
    NSArray *_usersToDelete;
}

@property(retain) NSArray *usersToDelete; // @synthesize usersToDelete=_usersToDelete;
@property(retain) NSMutableArray *cpEngineArray; // @synthesize cpEngineArray=_cpEngineArray;
@property BOOL copiesHomeDirectories; // @synthesize copiesHomeDirectories=_copiesHomeDirectories;
- (void).cxx_destruct;
- (BOOL)_setupUserCopiesAndDetermineSizes;
- (id)postProcess;
- (id)process;
- (BOOL)_migrateUserHomeDirectory:(id)arg1 forUserEntry:(id)arg2;
- (id)preProcess;
- (long long)sizeComplete;
- (id)description;
- (id)initWithEngine:(id)arg1;

@end

