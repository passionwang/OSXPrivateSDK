/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSData, NSDate, NSMultiReadUniWriteLock, NSMutableDictionary, NSSet, NSString, NSURL;

@interface BRContainer : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSMutableDictionary *_propertiesByBundleID;
    NSMultiReadUniWriteLock *_readWriteLock;
    long long _lastServerUpdateOnceToken;
    NSDate *_lastServerUpdate;
    long long _currentStatusOnceToken;
    unsigned int _currentStatus;
    BOOL _isOverQuota;
    BOOL _isCloudSyncTCCDisabled;
    BOOL _isInInitialState;
}

+ (BOOL)supportsSecureCoding;
+ (id)documentContainers;
+ (id)allContainers;
+ (id)allContainersByContainerID;
+ (id)containerForItemAtURL:(id)arg1 error:(id *)arg2;
+ (id)containerInRepositoryURL:(id)arg1 error:(id *)arg2;
+ (id)containerInRepositoryURL:(id)arg1 createIfMissing:(BOOL)arg2 error:(id *)arg3;
+ (id)readMetadataForContainerID:(id)arg1 fromPlistAtPath:(id)arg2 createIfMissing:(BOOL)arg3 error:(id *)arg4;
+ (id)containersRepositoryURL;
+ (void)postContainerStatusChangeNotificationWithID:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (void)postContainerListUpdateNotification;
+ (id)propertiesForContainerID:(id)arg1 usingBundle:(id)arg2 minimumBundleVersion:(id)arg3 bundleIcons:(id *)arg4;
+ (BOOL)versionOfBundle:(id)arg1 changedFromVersion:(id)arg2;
+ (void)_generateOSXIconsIntoDict:(id)arg1 usingBundle:(id)arg2;
+ (id)classesForDecoding;
+ (id)unmangleContainerID:(id)arg1;
+ (id)mangleContainerID:(id)arg1;
+ (BOOL)validateContainerID:(id)arg1;
+ (id)containerForContainerID:(id)arg1;
@property(nonatomic) BOOL isInInitialState; // @synthesize isInInitialState=_isInInitialState;
@property(nonatomic) BOOL isCloudSyncTCCDisabled; // @synthesize isCloudSyncTCCDisabled=_isCloudSyncTCCDisabled;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic, getter=isOverQuota) BOOL overQuota; // @synthesize overQuota=_isOverQuota;
@property(nonatomic) unsigned int currentStatus;
@property(retain, nonatomic) NSDate *lastServerUpdate;
- (id)imageRepresentationsAvailable;
- (id)imageDataForSize:(struct CGSize)arg1 scale:(long long)arg2;
@property(readonly, nonatomic) NSSet *importedTypes;
@property(readonly, nonatomic) NSSet *exportedTypes;
@property(readonly, nonatomic) NSSet *documentsTypes;
@property(readonly, nonatomic) NSString *supportedFolderLevels;
@property(readonly, nonatomic) BOOL isDocumentScopePublic;
- (id)localizedNameForLocale:(id)arg1;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, copy, nonatomic) NSSet *bundleIdentifiers;
- (id)enumeratorOfBundleProperty:(id)arg1 valuesOfClass:(Class)arg2;
- (id)bundleIdentifiersEnumerator;
@property(readonly, nonatomic) NSURL *documentsURL;
- (id)description;
- (id)mangledID;
- (void)dealloc;
- (id)initWithContainerID:(id)arg1 propertiesByBundleID:(id)arg2;
- (BOOL)deleteAllContentsOnClientAndServer:(id *)arg1;
- (BOOL)setPropertiesData:(id)arg1 stagedBundleIconPaths:(id)arg2 salt:(id)arg3 refresh:(BOOL)arg4;
- (BOOL)setProperties:(id)arg1 stagedBundleIconPaths:(id)arg2 forBundleIdentifier:(id)arg3 salt:(id)arg4;
- (BOOL)hasMostRecentMetadataForBundleID:(id)arg1;
- (id)iconURLs;
- (BOOL)hasIconWithName:(id)arg1;
@property(readonly, nonatomic) NSData *propertiesData;
- (id)versionNumberForBundleIdentifier:(id)arg1;

@end

