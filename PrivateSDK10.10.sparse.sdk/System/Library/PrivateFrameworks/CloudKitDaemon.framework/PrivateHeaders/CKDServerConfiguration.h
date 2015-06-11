/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CKPropertyCoding-Protocol.h"

@class NSDate, NSMutableDictionary, NSString;

@interface CKDServerConfiguration : NSObject <CKPropertyCoding>
{
    NSDate *_expiry;
    NSMutableDictionary *_values;
    NSMutableDictionary *_allowedAppVersionsCache;
}

@property(retain, nonatomic) NSMutableDictionary *allowedAppVersionsCache; // @synthesize allowedAppVersionsCache=_allowedAppVersionsCache;
@property(retain, nonatomic) NSMutableDictionary *values; // @synthesize values=_values;
@property(retain, nonatomic) NSDate *expiry; // @synthesize expiry=_expiry;
- (void).cxx_destruct;
- (id)dictionaryPropertyEncoding;
- (id)initWithPropertyDictionary:(id)arg1;
- (unsigned long long)maxBatchSizeForContainer:(id)arg1;
- (id)flowControlMaximumThrottleTime:(id)arg1;
- (id)flowControlRegenerationForContainer:(id)arg1;
- (id)flowControlBudgetForContainer:(id)arg1;
- (long long)tokenRegisterDaysForContainer:(id)arg1;
- (BOOL)shouldSignForMessageType:(int)arg1 inDatabaseScope:(long long)arg2 forContainer:(id)arg3;
- (id)mescalSessionURLForContainer:(id)arg1;
- (id)mescalCertURLForContainer:(id)arg1;
- (unsigned int)mescalServerVersionForContainer:(id)arg1;
- (BOOL)applicationWithBundleID:(id)arg1 canSyncUsingVersion:(id)arg2 forContainer:(id)arg3;
- (id)valueForKeyPath:(id)arg1 forContainer:(id)arg2;
- (BOOL)isExpired;
@property(readonly, copy) NSString *description;
- (id)initWithValues:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

