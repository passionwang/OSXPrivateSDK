/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray, NSMutableDictionary;

// Not exported
@interface CKDModifySharesOperation : CKDOperation
{
    id _saveCompletionBlock;
    id _deleteCompletionBlock;
    NSArray *_sharesToSave;
    NSArray *_shareIDsToDelete;
    NSMutableDictionary *_sharesByShareID;
}

@property(retain, nonatomic) NSMutableDictionary *sharesByShareID; // @synthesize sharesByShareID=_sharesByShareID;
@property(retain, nonatomic) NSArray *shareIDsToDelete; // @synthesize shareIDsToDelete=_shareIDsToDelete;
@property(retain, nonatomic) NSArray *sharesToSave; // @synthesize sharesToSave=_sharesToSave;
@property(copy, nonatomic) id deleteCompletionBlock; // @synthesize deleteCompletionBlock=_deleteCompletionBlock;
@property(copy, nonatomic) id saveCompletionBlock; // @synthesize saveCompletionBlock=_saveCompletionBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_handleShareDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleShareSaved:(id)arg1 shareID:(id)arg2 responseCode:(id)arg3;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

