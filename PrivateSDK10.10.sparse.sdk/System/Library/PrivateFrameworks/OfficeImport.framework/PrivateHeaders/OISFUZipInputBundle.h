/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SFUInputBundle-Protocol.h"

@class NSString, OISFUZipArchive;

// Not exported
@interface OISFUZipInputBundle : NSObject <SFUInputBundle>
{
    OISFUZipArchive *_zipArchive;
}

- (void)copyEntry:(id)arg1 toFile:(id)arg2;
- (unsigned int)crc32ForEntry:(id)arg1;
- (long long)lengthOfEntry:(id)arg1;
- (id)bufferedInputStreamForEntry:(id)arg1;
- (id)inputStreamForEntry:(id)arg1;
- (BOOL)hasEntryWithName:(id)arg1;
- (void)dealloc;
- (id)initWithZipArchive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

