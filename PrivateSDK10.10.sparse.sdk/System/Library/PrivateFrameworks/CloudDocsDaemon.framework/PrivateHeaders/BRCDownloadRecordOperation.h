/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudDocsDaemon/BRCMultiplexableOperation.h>

@class CKRecordID, NSDictionary, NSString;

// Not exported
@interface BRCDownloadRecordOperation : BRCMultiplexableOperation
{
    CKRecordID *_recordID;
    id _downloadCompletionBlock;
    NSDictionary *_desiredPackageFileIndices;
    NSString *_etag;
}

@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSDictionary *desiredPackageFileIndices; // @synthesize desiredPackageFileIndices=_desiredPackageFileIndices;
@property(copy, nonatomic) id downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithMultiplexer:(id)arg1;
- (id)name;
- (id)initWithDownloadContext:(id)arg1 desiredKeys:(id)arg2;

@end

