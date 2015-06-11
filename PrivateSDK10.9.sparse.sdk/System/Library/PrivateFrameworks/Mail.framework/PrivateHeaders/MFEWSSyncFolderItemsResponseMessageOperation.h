//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSResponseOperation.h>

@class EWSFolderIdType, MFEWSStore, NSArray, NSMutableArray, NSString;

@interface MFEWSSyncFolderItemsResponseMessageOperation : MFEWSResponseOperation
{
    NSMutableArray *_messagesWithoutHeaders;
    MFEWSStore *_store;
    EWSFolderIdType *_folderId;
    NSString *_startSyncState;
    NSString *_endSyncState;
}

+ (void)initialize;
@property(retain) NSString *endSyncState; // @synthesize endSyncState=_endSyncState;
@property(retain) NSString *startSyncState; // @synthesize startSyncState=_startSyncState;
@property(retain) EWSFolderIdType *folderId; // @synthesize folderId=_folderId;
@property(retain) MFEWSStore *store; // @synthesize store=_store;
- (void)_addMessageWithoutHeaders:(id)arg1;
@property(readonly) NSArray *messagesWithoutHeaders;
- (BOOL)_addressList:(id)arg1 isEqualToAddressList:(id)arg2;
- (void)_addFlagChanges:(unsigned int)arg1 mask:(unsigned int)arg2 forMessageWithEWSItemId:(id)arg3 toFlagChangesByMessage:(id)arg4;
- (void)_handleSyncFolderItemsCreateOrUpdate:(id)arg1 forStore:(id)arg2 messagesToUpdate:(id)arg3 libraryIDs:(id)arg4 messagesToCreate:(id)arg5 updatedFlagsByMessage:(id)arg6 messagesThatFinished:(id)arg7;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;
- (void)dealloc;

@end

