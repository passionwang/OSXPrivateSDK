/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSRunLoop, NSString, NSThread;

@interface AOSSynchronizer : NSObject
{
    struct dispatch_queue_s *_serialQueue;
    BOOL _doneWaiting;
    BOOL _responseArrived;
    NSRunLoop *_waitingRunLoop;
    NSThread *_waitingThread;
    NSString *_syncDescription;
    BOOL _timeoutOccurred;
    double _timeout;
}

@property(retain, nonatomic) NSString *syncDescription; // @synthesize syncDescription=_syncDescription;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) BOOL timeoutOccurred; // @synthesize timeoutOccurred=_timeoutOccurred;
@property(retain, nonatomic) NSThread *waitingThread; // @synthesize waitingThread=_waitingThread;
@property(retain, nonatomic) NSRunLoop *waitingRunLoop; // @synthesize waitingRunLoop=_waitingRunLoop;
@property(nonatomic) BOOL responseArrived; // @synthesize responseArrived=_responseArrived;
@property(nonatomic) BOOL doneWaiting; // @synthesize doneWaiting=_doneWaiting;
- (id)loggingID;
- (void)dummyTimerHandler:(id)arg1;
- (void)wait;
- (void)signalAfterExecutingBlock:(id)arg1;
- (id)initWithDescription:(id)arg1 andTimeout:(double)arg2;
- (void)dealloc;

@end

