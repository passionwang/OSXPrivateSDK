/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PFMeta-Protocol.h"

@class IFDiskObject, IFInstallPlan, IFSearchContext, NSDictionary, NSLock, NSString, NSURL, PFPackage, PFReceipt;

@interface IFPackageController : NSObject <PFMeta>
{
    PFPackage *_package;
    PFReceipt *_receipt;
    BOOL _lookedForReceipt;
    BOOL _DBRefMadeInvalidByFsck;
    BOOL _noReceiptFound;
    BOOL _homeInstall;
    NSURL *_sourceURL;
    NSDictionary *_installState;
    BOOL _shouldBackRev;
    NSLock *_targetLock;
    int installKey;
    IFDiskObject *_targetVolume;
    NSString *_destinationLocation;
    IFInstallPlan *_installPlan;
    IFSearchContext *_searchContext;
}

- (BOOL)shouldBackRev;
- (void)setShouldBackRev:(BOOL)arg1;
- (id)destinationPath;
- (id)destinationLocation;
- (void)setDestinationLocation:(id)arg1;
- (id)digestOfType:(id)arg1;
- (id)catalogInfo;
- (id)searchDefinitions;
- (id)installPlan;
- (id)taints;
- (id)groups;
- (id)dependencies;
- (id)information;
- (id)title;
- (id)version;
- (id)identifier;
- (id)name;
- (id)location;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 localization:(id)arg2;
- (BOOL)hasReceipt;
- (id)receipt;
- (void)invalidateDBHandle;
- (id)absolutePathFromRelativePath:(id)arg1;
- (id)searchContext;
- (id)resolvedPathForComponent:(id)arg1;
- (void)setResolvedPath:(id)arg1 forComponent:(id)arg2;
- (id)targetVolume;
- (void)setTargetVolume:(id)arg1;
- (id)package;
- (BOOL)isHomeInstall;
- (void)setInstallKey:(int)arg1;
- (int)installKey;
- (id)sourceURL;
- (void)dealloc;
- (id)initWithPackageRep:(id)arg1 error:(id *)arg2;
- (id)_pathsForUserLocation;
- (BOOL)_readTokenDefintions;

@end

