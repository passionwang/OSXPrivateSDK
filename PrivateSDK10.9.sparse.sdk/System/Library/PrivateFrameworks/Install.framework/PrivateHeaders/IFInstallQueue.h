//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface IFInstallQueue : NSObject
{
    NSString *_queueDescription;
    NSString *_extraInfo;
    int _currentElementIndex;
    id _sessionID;
    NSMutableArray *_elements;
    NSMutableDictionary *_typeStats;
    id _clientMessagingDelegate;
    double _initialEstimatedTotalTime;
    double _timeForCompletedElements;
    double _totalProgress;
    double _lastProgress;
    BOOL _messageTimeEstimatedBasedProgress;
}

- (id)elementAtIndex:(int)arg1;
- (int)indexOfCurrentElement;
- (int)count;
- (void)distributeProgressWithTimeEstimates;
- (void)distributeProgress:(double)arg1 forType:(id)arg2;
- (void)setClientMessagingDelegate:(id)arg1;
- (BOOL)shouldContinue;
- (id)advanceToNextElement;
- (id)currentElement;
- (void)addElement:(id)arg1 withType:(id)arg2;
- (void)addElement:(id)arg1;
- (id)sessionID;
- (void)dealloc;
- (id)initWithSession:(id)arg1;
- (double)initialEstimatedTotalTime;
- (id)typeStats;
- (void)dumpTypeStats;
- (void)dumpPerformanceWithIndentLevel:(int)arg1 withStatus:(long long)arg2;
- (void)analyzeProgress;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)queueDescription;
- (void)setQueueDescription:(id)arg1;
- (void)setPartialProgress:(double)arg1;
- (void)sendClientError:(id)arg1;
- (void)sendClientStatusMessage:(id)arg1 ofType:(id)arg2;
- (id)_typeStats;
- (void)_collectPerformanceWithElement:(id)arg1;

@end

