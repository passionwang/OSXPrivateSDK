/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

@class CMArchiveManager, NSMutableArray, NSString;

// Not exported
@interface CSVMapper : CMMapper
{
    CMArchiveManager *mArchiver;
    NSMutableArray *mRows;
    NSString *mFileName;
    unsigned long long mColumnCount;
    struct CGSize mPageSize;
}

- (id).cxx_construct;
- (struct CGSize)pageSize;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)dealloc;
- (id)initWithRows:(id)arg1 fileName:(id)arg2 columnCount:(unsigned long long)arg3 archiver:(id)arg4;

@end

