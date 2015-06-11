/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface BKSequencer : NSObject
{
    unsigned long long _minimumPaddedDigits;
    unsigned long long _paddedMiminumSequenceLength;
    unsigned long long _unpaddedMinimumSequenceLength;
    unsigned long long _sequenceMaximumMissingFrameGap;
    BOOL _allowSequencesWithMultiframeIncrements;
}

+ (id)defaultSequencer;
@property(readonly) unsigned long long sequenceMaximumMissingFrameGap; // @synthesize sequenceMaximumMissingFrameGap=_sequenceMaximumMissingFrameGap;
@property(readonly) BOOL allowSequencesWithMultiframeIncrements; // @synthesize allowSequencesWithMultiframeIncrements=_allowSequencesWithMultiframeIncrements;
@property(readonly) unsigned long long unpaddedMinimumSequenceLength; // @synthesize unpaddedMinimumSequenceLength=_unpaddedMinimumSequenceLength;
@property(readonly) unsigned long long paddedMiminumSequenceLength; // @synthesize paddedMiminumSequenceLength=_paddedMiminumSequenceLength;
@property(readonly) unsigned long long minimumPaddedDigits; // @synthesize minimumPaddedDigits=_minimumPaddedDigits;
- (id)sequenceItems:(id)arg1 nameKey:(id)arg2 sequenceClass:(Class)arg3;
- (id)properties;
- (id)initWithProperties:(id)arg1;
- (id)initWithMinimumPaddedDigits:(unsigned long long)arg1 paddedMinimumSequenceLength:(unsigned long long)arg2 unpaddedMinimumSequenceLength:(unsigned long long)arg3 sequenceMaximumMissingFrameGap:(unsigned long long)arg4 allowSequencesWithMultiframeIncrements:(BOOL)arg5;
- (id)init;

@end

