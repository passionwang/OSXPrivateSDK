//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OCMapper.h>

@class CPImportTracing, NSData, NSURL, OCDReader, TSUProgressContext;

__attribute__((visibility("hidden")))
@interface OCImporter : OCMapper
{
    NSURL *mURL;
    NSData *mData;
    OCDReader *mReader;
    CPImportTracing *mTracing;
    BOOL mTryAlternateReader;
    TSUProgressContext *mProgressContext;
}

+ (void)initialize;
@property(readonly, nonatomic) CPImportTracing *tracing; // @synthesize tracing=mTracing;
@property(retain) TSUProgressContext *progressContext; // @synthesize progressContext=mProgressContext;
- (id)displayName;
- (id)filename;
- (BOOL)setPassphrase:(id)arg1;
- (BOOL)isDocumentEncryptedUnsupportedVersion:(char *)arg1 errorMessage:(id *)arg2;
- (BOOL)isDocumentEncryptedUnsupportedVersionHelper:(char *)arg1 errorMessage:(id *)arg2 readError:(char *)arg3;
- (BOOL)tryAlternateReader;
- (void)setURL:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)start;
- (BOOL)isXML;

@end

