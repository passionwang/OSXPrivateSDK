/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOutputStream.h"

@class ResourceForkOutputStream;

@interface ForkedFileOutputStream : NSOutputStream
{
    NSOutputStream *_dataForkStream;
    ResourceForkOutputStream *_rsrcForkStream;
    unsigned long long _curPt;
    struct BigRange _dataForkRange;
    struct BigRange _rsrcForkRange;
    unsigned long long _status;
}

- (id)initToFileAtPath:(id)arg1 append:(BOOL)arg2;
- (void)close;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)open;
- (BOOL)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)dealloc;
- (void)setResourceForkRange:(struct BigRange)arg1;
- (void)setDataForkRange:(struct BigRange)arg1;

@end

