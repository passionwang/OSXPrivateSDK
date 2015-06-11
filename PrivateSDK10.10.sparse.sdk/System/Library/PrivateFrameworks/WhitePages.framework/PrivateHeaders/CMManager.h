/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, QuickLiteDatabase;

@interface CMManager : NSObject
{
    QuickLiteDatabase *_dbCache;
    NSMutableDictionary *_cacheSchema;
    BOOL _isOurTransaction;
    BOOL _savePlistActive;
    BOOL _savePlistOnly;
}

+ (id)_querySegmentForColumn:(id)arg1 value:(id)arg2 matching:(int)arg3;
+ (id)prepareSQLQueryStringWithKey:(id)arg1 attribute:(id)arg2 andValue:(id)arg3 matching:(int)arg4 inDomain:(id)arg5 returnType:(int)arg6;
+ (id)cacheWithPath:(id)arg1;
- (void)_releaseDatabase;
- (void)_cacheSchema;
- (BOOL)_isDomainInCache:(id)arg1;
- (void)_executeSQLite3StepUsingSQLite3Statement:(struct sqlite3_stmt *)arg1;
- (BOOL)_prepareSQLite3Statement:(struct sqlite3_stmt **)arg1 sqlQuery:(id)arg2;
- (id)_columnKeyForColumnType:(int)arg1;
- (id)_QLDatatypeToQLDatatypeString:(int)arg1;
- (int)_QLDatatypeStringToQLDatatype:(id)arg1;
- (void)_flattenCollection:(id)arg1 keyPath:(id)arg2 keys:(id *)arg3 values:(id *)arg4;
- (id)_stringFromValue:(id)arg1;
- (id)_calendarDateToString:(id)arg1;
- (id)_plistToDictionary:(id)arg1;
- (BOOL)_bindValue:(id)arg1 forAttribute:(id)arg2 inDomain:(id)arg3 parameterNumber:(long long)arg4 usingSQLite3Statement:(struct sqlite3_stmt *)arg5;
- (id)_dataAdded:(int)arg1 calendarDate:(id)arg2 inDomain:(id)arg3 returnType:(BOOL)arg4;
- (id)_dataWithKey:(id)arg1 attribute:(id)arg2 andValue:(id)arg3 matching:(int)arg4 inDomain:(id)arg5 sqlQuery:(id)arg6 returnType:(int)arg7;
- (BOOL)_storeObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 usingSQLite3Statement:(struct sqlite3_stmt *)arg4 error:(out id *)arg5;
- (BOOL)_removeDomain:(id)arg1 error:(out id *)arg2;
- (BOOL)_setupDomain:(id)arg1 attributes:(id)arg2 datatypes:(id)arg3;
- (BOOL)_setupCachingSchema;
- (BOOL)_setupPathIfNeeded:(id)arg1;
- (BOOL)__storeObjects:(id)arg1 forKeys:(id)arg2 inDomain:(id)arg3 error:(out id *)arg4;
- (id)quickLiteDatabase;
- (id)version;
- (id)cacheStatisticsForDomain:(id)arg1 error:(out id *)arg2;
- (id)cacheStatistics;
- (unsigned long long)fileSize;
- (unsigned long long)objectCountInDomain:(id)arg1 error:(out id *)arg2;
- (void)rebuildIndexes;
- (void)clearIndexes;
- (BOOL)backupCacheToPath:(id)arg1 prefix:(id)arg2 extension:(id)arg3 compact:(BOOL)arg4 error:(out id *)arg5;
- (BOOL)compactCache;
- (void)clearCache;
- (BOOL)rollbackTransaction;
- (BOOL)commitTransaction;
- (BOOL)beginTransaction;
- (id)keysAdded:(int)arg1 calendarDate:(id)arg2 inDomain:(id)arg3;
- (id)objectsAdded:(int)arg1 calendarDate:(id)arg2 inDomain:(id)arg3;
- (id)valuesWithSQLQuery:(id)arg1;
- (id)keysWithSQLQuery:(id)arg1;
- (id)objectsWithSQLQuery:(id)arg1;
- (id)valuesWithKey:(id)arg1 attribute:(id)arg2 value:(id)arg3 matching:(int)arg4 inDomain:(id)arg5;
- (id)keysWithKey:(id)arg1 attribute:(id)arg2 value:(id)arg3 matching:(int)arg4 inDomain:(id)arg5;
- (id)objectsWithKey:(id)arg1 attribute:(id)arg2 value:(id)arg3 matching:(int)arg4 inDomain:(id)arg5;
- (id)keysForKeyPath:(id)arg1 matching:(int)arg2;
- (id)objectsForKeyPath:(id)arg1 matching:(int)arg2;
- (id)keysForKeyPath:(id)arg1;
- (id)objectsForKeyPath:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1 inDomain:(id)arg2 error:(out id *)arg3;
- (void)storeObjects:(id)arg1 forKeys:(id)arg2 inDomain:(id)arg3 cacheRecordAsIs:(BOOL)arg4 dropIndexes:(BOOL)arg5 identifier:(id)arg6 error:(out id *)arg7;
- (id)allDomains;
- (BOOL)removeDomain:(id)arg1 error:(out id *)arg2;
- (BOOL)createDomain:(id)arg1 attributes:(id)arg2 datatypes:(id)arg3 error:(out id *)arg4;
- (BOOL)savePlistOnly;
- (void)setSavePlistOnly:(BOOL)arg1;
- (BOOL)savePlist;
- (void)setSavePlist:(BOOL)arg1;
- (void)dealloc;
- (void)close;
- (id)cacheFilePath;
- (id)initWithPath:(id)arg1 rebuildIndexes:(BOOL)arg2 notifySQLStatements:(BOOL)arg3 readDatafile:(BOOL)arg4;
- (id)initWithPath:(id)arg1 rebuildIndexes:(BOOL)arg2;
- (id)initWithPath:(id)arg1;

@end

