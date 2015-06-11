/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDOperation.h>

@class CKShareID, NSArray;

// Not exported
@interface CKDModifyShareCommentsOperation : CKDOperation
{
    id _saveCompletionBlock;
    id _deleteCompletionBlock;
    CKShareID *_shareID;
    NSArray *_commentsToSave;
    NSArray *_commentIDsToDelete;
}

@property(retain, nonatomic) NSArray *commentIDsToDelete; // @synthesize commentIDsToDelete=_commentIDsToDelete;
@property(retain, nonatomic) NSArray *commentsToSave; // @synthesize commentsToSave=_commentsToSave;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(copy, nonatomic) id deleteCompletionBlock; // @synthesize deleteCompletionBlock=_deleteCompletionBlock;
@property(copy, nonatomic) id saveCompletionBlock; // @synthesize saveCompletionBlock=_saveCompletionBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_handleDeleteProgressWithCommentID:(id)arg1 result:(id)arg2;
- (void)_handleSaveProgressWithComment:(id)arg1 result:(id)arg2;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

