/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, SKDisk;

@interface OSInstallOptions : NSObject
{
    NSString *_alternateBlessVolumePath;
    BOOL _isAutomated;
    BOOL _isEraseInstall;
    BOOL _isUpgrade;
    BOOL _hadToMountBaseSystemDMG;
    BOOL _needsLongInstallSizeCheck;
    NSString *_distributionPath;
    NSString *_choiceChangesPath;
    NSString *_recoverySystemPath;
    SKDisk *_target;
}

+ (BOOL)isBeingInstalledInternally;
@property BOOL needsLongInstallSizeCheck; // @synthesize needsLongInstallSizeCheck=_needsLongInstallSizeCheck;
@property BOOL hadToMountBaseSystemDMG; // @synthesize hadToMountBaseSystemDMG=_hadToMountBaseSystemDMG;
@property BOOL isUpgrade; // @synthesize isUpgrade=_isUpgrade;
@property BOOL isEraseInstall; // @synthesize isEraseInstall=_isEraseInstall;
@property BOOL isAutomated; // @synthesize isAutomated=_isAutomated;
@property(retain) SKDisk *target; // @synthesize target=_target;
@property(retain) NSString *recoverySystemPath; // @synthesize recoverySystemPath=_recoverySystemPath;
@property(retain) NSString *choiceChangesPath; // @synthesize choiceChangesPath=_choiceChangesPath;
@property(retain) NSString *distributionPath; // @synthesize distributionPath=_distributionPath;
- (void)_resolveTargetWithPath:(id)arg1 name:(id)arg2 orUUID:(id)arg3;
- (id)alternateBlessTarget;
- (void)dealloc;
- (id)initWithDefaultSettings;
- (id)initWithFile:(id)arg1;

@end

