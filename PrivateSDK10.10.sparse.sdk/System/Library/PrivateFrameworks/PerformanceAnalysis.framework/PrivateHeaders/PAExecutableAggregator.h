/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PerformanceAnalysis/PASampleAggregator.h>

@interface PAExecutableAggregator : PASampleAggregator
{
}

- (id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (void)filterToWallTimeRangeStart:(double)arg1 end:(double)arg2;

@end

