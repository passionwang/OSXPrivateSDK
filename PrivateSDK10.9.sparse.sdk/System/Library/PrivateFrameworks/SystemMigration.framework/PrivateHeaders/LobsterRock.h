//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SlingShotRock.h>

@class NSData, NSString;

@interface LobsterRock : SlingShotRock
{
    NSData *_compressedFileData;
    NSData *_checksum;
    NSString *_infoType;
}

+ (id)rockID;
+ (id)rockWithPayload:(id)arg1;
- (void)setInfoType:(id)arg1;
- (id)infoType;
- (void)setChecksum:(id)arg1;
- (id)checksum;
- (void)setCompressedFileData:(id)arg1;
- (id)compressedFileData;
- (BOOL)keepAlive;
- (BOOL)returnsData;
- (id)requestPayload;
- (id)description;
- (int)receiveResultFromData:(id)arg1;
- (id)resultData;
- (id)_finalDestinationPathForInfoType:(id)arg1;
- (id)dataOfOne:(BOOL)arg1;
- (id)dataFromPath:(id)arg1;
- (id)initWithPath:(id)arg1 pushType:(id)arg2;

@end

