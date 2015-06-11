/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface UserUtilities : NSObject
{
}

+ (void)CRSetIsThirdPartyApplicationDataSubmissionEnabled:(BOOL)arg1;
+ (void)CRSetIsAutoSubmitEnabled:(BOOL)arg1;
+ (id)availableUserTemplateLocalizations;
+ (int)launchFibreConfig:(id)arg1;
+ (void)kickMCXCacher;
+ (void)setLockSecurePrefs:(BOOL)arg1 authArray:(id)arg2;
+ (void)setLockSecurePrefs:(BOOL)arg1 authString:(id)arg2;
+ (void)setXServeLockEnclosureState:(BOOL)arg1;
+ (BOOL)hasOtherConsolerUsers;
+ (void)kickKextcache;
+ (void)touchEFIResourceBuilder;
+ (unsigned long long)directorySizeAtPath:(id)arg1;
+ (void)setFMMGoodSamaritanMessage:(id)arg1;
+ (void)setMachinePreferencesForDomain:(id)arg1;
+ (void)setMachineArray:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setMachineDictionary:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setMachineData:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setMachineBOOLValue:(BOOL)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setMachineIntValue:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setMachineString:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setCopyPermissionsForNodeAtPath:(id)arg1 delegate:(id)arg2;
+ (BOOL)movePath:(id)arg1 toPath:(id)arg2;
+ (void)asyncSecurelyRemoveFileAtPath:(id)arg1 withOptions:(unsigned long long)arg2 delegate:(id)arg3;
+ (BOOL)asyncRemoveFileAtPath:(id)arg1 delegate:(id)arg2;
+ (BOOL)removeFileAtPath:(id)arg1;
+ (void)createPath:(id)arg1 attributes:(id)arg2;
+ (void)createFileWithContents:(id)arg1 path:(id)arg2 attributes:(id)arg3;
+ (void)killProcessID:(int)arg1 withSignal:(int)arg2;
+ (void)setOwner:(id)arg1 group:(id)arg2 forDirectory:(id)arg3;
+ (void)setOwner:(id)arg1 forDirectory:(id)arg2;

@end

