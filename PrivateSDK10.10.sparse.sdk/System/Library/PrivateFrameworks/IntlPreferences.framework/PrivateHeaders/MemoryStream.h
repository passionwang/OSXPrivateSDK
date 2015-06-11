/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MemoryStream : NSObject
{
    char *mPtr;
    unsigned int mMarker;
    unsigned int mLength;
    unsigned char mOwnsPtr;
}

+ (id)memoryStreamWithPtr:(char *)arg1 length:(unsigned int)arg2;
+ (id)memoryStreamWithCapacity:(unsigned int)arg1;
- (unsigned int)marker;
- (unsigned int)length;
- (const char *)dataPtr;
- (BOOL)atEnd;
- (void)writeUInt16:(unsigned short)arg1;
- (void)writeSInt16:(short)arg1;
- (void)writeUInt32:(unsigned int)arg1;
- (unsigned short)readUInt16;
- (short)readSInt16;
- (unsigned int)readUInt32;
- (void)dealloc;
- (id)initWithPtr:(char *)arg1 length:(unsigned int)arg2;
- (id)initWithCapacity:(unsigned int)arg1;

@end

