/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKGameRecordInternal;

@interface GKGameCompareItem : NSObject
{
    GKGameRecordInternal *_localRecord;
    GKGameRecordInternal *_playerRecord;
}

+ (id)itemWithLocal:(id)arg1 other:(id)arg2;
@property(retain) GKGameRecordInternal *playerRecord; // @synthesize playerRecord=_playerRecord;
@property(retain) GKGameRecordInternal *localRecord; // @synthesize localRecord=_localRecord;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

