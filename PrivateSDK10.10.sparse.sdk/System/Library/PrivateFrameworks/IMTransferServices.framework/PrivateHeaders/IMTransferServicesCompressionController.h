/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface IMTransferServicesCompressionController : NSObject
{
    NSMutableDictionary *_blockMap;
}

+ (id)sharedInstance;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (void)compressFileTransfer:(id)arg1 completionBlock:(id)arg2;
- (id)_blockForCopier:(SEL)arg1;
- (void)_unmapCopier:(id)arg1;
- (void)_mapCopier:(id)arg1 toBlock:(id)arg2;

@end

