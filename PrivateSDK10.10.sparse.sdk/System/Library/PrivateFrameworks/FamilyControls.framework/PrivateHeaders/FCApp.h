/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface FCApp : NSObject
{
    NSMutableDictionary *_dictionary;
}

+ (void)setKeychainForCodesigning:(struct OpaqueSecKeychainRef *)arg1;
+ (id)appStoreRatingForString:(id)arg1;
+ (id)appWithDictionary:(id)arg1;
+ (id)appWithPath:(id)arg1;
+ (id)appWithPath:(id)arg1 addingSubApps:(BOOL)arg2;
+ (id)appWithPath:(id)arg1 addingSubApps:(BOOL)arg2 creatingSignature:(BOOL)arg3 detached:(BOOL)arg4;
- (long long)compare:(id)arg1;
- (void)setAppStoreRating:(id)arg1;
- (id)appStoreRating;
- (void)setIsFromAppStore:(BOOL)arg1;
- (BOOL)isFromAppStore;
- (void)setDetachedSignature:(id)arg1;
- (id)detachedSignature;
- (void)setSubApps:(id)arg1;
- (id)subApps;
- (void)setAppID:(id)arg1;
- (id)appID;
- (void)setBundleID:(id)arg1;
- (id)bundleID;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (void)setPath:(id)arg1;
- (id)path;
- (id)description;
- (void)readBundleInfo;
- (BOOL)validateCodeSig:(id *)arg1;
- (id)plistRepresentation;
- (id)_stringWithOSType:(unsigned int)arg1;
- (id)_dictionary;
- (id)initWithPath:(id)arg1 addingSubApps:(BOOL)arg2 creatingSignature:(BOOL)arg3 detached:(BOOL)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

