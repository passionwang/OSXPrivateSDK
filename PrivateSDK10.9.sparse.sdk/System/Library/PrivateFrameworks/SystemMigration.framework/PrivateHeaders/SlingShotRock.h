//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SlingShotRock : NSObject
{
    int dataFileDescriptor;
    BOOL cancelled;
}

+ (id)currentSystemDescription;
+ (id)decodeSystemDescription:(id)arg1;
+ (void)decodeTXTRecord:(id)arg1 inTXTDict:(id)arg2 into:(id)arg3;
+ (id)rockWithPayload:(id)arg1;
+ (id)rockID;
- (void)cancelTransfer;
- (id)description;
- (void)cleanupAfterSend;
- (int)sendResult;
- (void)cleanupAfterReceive;
- (int)receiveResultFromData:(id)arg1;
- (int)receiveResult;
- (void)setDataFileDescriptor:(int)arg1;
- (BOOL)success;
- (BOOL)returnsData;
- (id)requestData;
- (id)requestPayload;
- (id)resultData;
- (BOOL)keepAlive;
- (id)rockID;
- (id)init;
- (BOOL)_writeData:(id)arg1;
- (BOOL)_readData:(id *)arg1;

@end

