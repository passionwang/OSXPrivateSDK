/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface DSMigrator : NSObject
{
}

+ (BOOL)copyHashPassword:(id)arg1 fromSystem:(id)arg2 toSystem:(id)arg3;
+ (BOOL)copyAllDSRecords:(id)arg1 fromSourceSystem:(id)arg2 toSystem:(id)arg3 mergeAttributes:(id)arg4 andCommitChanges:(BOOL)arg5 andVerbose:(BOOL)arg6;
+ (BOOL)copyAllDSRecords:(id)arg1 fromSourceSystem:(id)arg2 toSystem:(id)arg3 andCommitChanges:(BOOL)arg4 andVerbose:(BOOL)arg5;
+ (id)allRecordsForSystem:(id)arg1;

@end

