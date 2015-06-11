/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Install/IFFileEntry.h>

@class IFXARArchive, NSDictionary, NSString;

@interface IFXARFileEntry : IFFileEntry
{
    int _compressionType;
    unsigned long long _rawSize;
    long long _rawOffset;
    unsigned long long _size;
    NSString *_path;
    struct stat _statInfo;
    IFXARArchive *_archive;
    struct __xar_file_t *_file;
    NSDictionary *_rawChecksums;
}

- (struct stat *)statInfo;
- (unsigned long long)size;
- (id)fileType;
- (unsigned long long)rawSize;
- (long long)rawOffset;
- (id)rawHashForType:(id)arg1;
- (id)rawHashTypes;
- (int)compressionType;
- (id)path;
- (struct __xar_file_t *)xarFile;
- (void)dealloc;
- (id)initWithXARFile:(struct __xar_file_t *)arg1 withHeapOffset:(long long)arg2;
- (BOOL)_retrieveRelavantAttributes;
- (void)_printAttributes;

@end

