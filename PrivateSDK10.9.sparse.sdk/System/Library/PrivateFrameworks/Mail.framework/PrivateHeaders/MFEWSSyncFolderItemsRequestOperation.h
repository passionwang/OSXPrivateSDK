//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSRequestOperation.h>

@class EWSFolderIdType, EWSTargetFolderIdType, NSString;

@interface MFEWSSyncFolderItemsRequestOperation : MFEWSRequestOperation
{
    NSString *_syncState;
    EWSTargetFolderIdType *_targetFolder;
}

+ (unsigned long long)maxChangesReturned;
+ (Class)classForResponse;
+ (id)keyPathsForValuesAffectingTargetFolderName;
+ (id)keyPathsForValuesAffectingTargetFolderId;
@property(retain, nonatomic) EWSTargetFolderIdType *targetFolder; // @synthesize targetFolder=_targetFolder;
@property(readonly, nonatomic) NSString *syncState; // @synthesize syncState=_syncState;
@property(readonly, nonatomic) NSString *targetFolderName;
@property(readonly, nonatomic) EWSFolderIdType *targetFolderId;
- (id)prepareRequest;
- (id)activityString;
- (void)dealloc;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)initWithTargetFolder:(id)arg1 syncState:(id)arg2 gateway:(id)arg3;

@end

