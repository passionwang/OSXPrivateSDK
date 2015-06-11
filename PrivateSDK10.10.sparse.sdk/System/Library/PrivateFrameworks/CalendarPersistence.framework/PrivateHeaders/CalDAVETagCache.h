/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface CalDAVETagCache : NSObject
{
    NSMutableDictionary *_filenameToScheduleTagMap;
    NSMutableDictionary *_filenameToETagMap;
    NSMutableDictionary *_filenameToModifiedLocallyMap;
    NSMutableDictionary *_uidToFilenameMap;
    NSString *_cacheFilename;
    NSString *_cTag;
    BOOL _inited;
    BOOL _isDirty;
}

+ (id)newCacheControllerForPrincipalNotificationCollectionWithUID:(id)arg1;
+ (id)newCacheControllerForPrincipalInboxWithUID:(id)arg1;
+ (id)localPrincipalPathForUID:(id)arg1;
+ (id)newCacheControllerForPrincipalUID:(id)arg1 calendarUID:(id)arg2;
+ (id)newCacheControllerAtDirectory:(id)arg1;
- (id)cacheFilename;
- (void)dealloc;
- (id)init;
- (void)deleteFile;
- (id)allFilenames;
- (id)filenameForUID:(id)arg1;
- (id)scheduleTagForFilename:(id)arg1;
- (id)etagForFilename:(id)arg1;
- (id)cTag;
- (id)_initWithDirectory:(id)arg1;

@end

