/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OCBReader.h>

// Not exported
@interface PBReader : OCBReader
{
    struct PptObjectFactory *mPptObjectFactory;
    const void *mBuffer;
}

- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;
@property(readonly, nonatomic) struct PptBinaryReader *pptReader;
- (id)read;
- (BOOL)start;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;

@end

