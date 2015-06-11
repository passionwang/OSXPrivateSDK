/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PASampleThreadData;

@interface PATimestampIndexedSampleThread : NSObject
{
    unsigned long long _lastTimestampIndex;
    PASampleThreadData *_sampleThread;
}

@property(readonly) PASampleThreadData *sampleThread; // @synthesize sampleThread=_sampleThread;
@property unsigned long long lastTimestampIndex; // @synthesize lastTimestampIndex=_lastTimestampIndex;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2;

@end

