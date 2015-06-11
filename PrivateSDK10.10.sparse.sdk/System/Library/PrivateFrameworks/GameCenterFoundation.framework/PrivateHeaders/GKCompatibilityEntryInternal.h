/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSSet, NSString;

@interface GKCompatibilityEntryInternal : GKInternalRepresentation
{
    NSString *_bundleID;
    NSSet *_versions;
}

+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) NSSet *versions; // @synthesize versions=_versions;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

