/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDOperation.h>

@class CKCommentCursor, CKCommentQuery;

// Not exported
@interface CKDFetchShareCommentsOperation : CKDOperation
{
    id _commentFetchedProgressBlock;
    CKCommentCursor *_nextCursor;
    CKCommentQuery *_query;
    CKCommentCursor *_cursor;
    unsigned long long _resultsLimit;
}

@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKCommentCursor *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) CKCommentQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) CKCommentCursor *nextCursor; // @synthesize nextCursor=_nextCursor;
@property(copy, nonatomic) id commentFetchedProgressBlock; // @synthesize commentFetchedProgressBlock=_commentFetchedProgressBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)main;
- (void)_handleCommentFetched:(id)arg1 responseCode:(id)arg2;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

