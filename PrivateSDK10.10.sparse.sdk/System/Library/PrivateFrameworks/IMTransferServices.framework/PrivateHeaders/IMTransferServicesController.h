/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface IMTransferServicesController : NSObject
{
}

+ (id)sharedInstance;
- (void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 fileSize:(unsigned long long)arg8 progressBlock:(id)arg9 completionBlock:(void)arg10;
- (void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 retries:(int)arg8 fileSize:(unsigned long long)arg9 progressBlock:(id)arg10 completionBlock:(void)arg11;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 encryptFile:(BOOL)arg4 progressBlock:(id)arg5 completionBlock:(void)arg6;
- (void)_sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 encryptFile:(BOOL)arg4 retries:(int)arg5 progressBlock:(id)arg6 completionBlock:(void)arg7;

@end

