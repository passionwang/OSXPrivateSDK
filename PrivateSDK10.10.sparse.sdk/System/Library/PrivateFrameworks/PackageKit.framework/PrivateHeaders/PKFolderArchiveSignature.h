/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PackageKit/PKArchiveSignature.h>

@interface PKFolderArchiveSignature : PKArchiveSignature
{
    struct __SecCode *_staticCode;
}

- (BOOL)verifySignedDataReturningError:(id *)arg1;
- (BOOL)verifyCodeSignatureIncludingSealedResources:(BOOL)arg1 error:(id *)arg2;
- (id)signatureDataReturningAlgorithm:(id *)arg1;
- (id)signedDataReturningAlgorithm:(id *)arg1;
- (id)algorithmType;
- (id)certificateRefs;
- (void)dealloc;
- (id)initWithArchiveAtPath:(id)arg1;

@end

