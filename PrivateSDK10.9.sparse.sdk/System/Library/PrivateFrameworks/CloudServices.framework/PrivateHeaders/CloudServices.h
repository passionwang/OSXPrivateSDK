//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface CloudServices : NSObject
{
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *replyQueue;
}

+ (id)_CreateLakituConnection;
@property(nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue;
- (void).cxx_destruct;
- (id)verifyCertificateWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)listSMSTargetsWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)changeSMSTargetWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)startSMSChallengeWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)deleteRecordWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)updateRecordWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)recoverRecordWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)storeRecordWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)getAccountInfoWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

