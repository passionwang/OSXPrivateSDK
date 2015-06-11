/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate;

@interface PCPSourceRecorder : NSObject
{
    id _delegate;
    double _elapsedRecordingTime;
    BOOL _isStarting;
    BOOL _isRecording;
    BOOL _isPaused;
    BOOL _isCancelled;
    NSDate *_mostRecentStartDate;
}

@property(retain) NSDate *mostRecentStartDate; // @synthesize mostRecentStartDate=_mostRecentStartDate;
@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property BOOL isPaused; // @synthesize isPaused=_isPaused;
@property BOOL isRecording; // @synthesize isRecording=_isRecording;
@property BOOL isStarting; // @synthesize isStarting=_isStarting;
@property double elapsedRecordingTime; // @synthesize elapsedRecordingTime=_elapsedRecordingTime;
@property id delegate; // @synthesize delegate=_delegate;
- (void)failedToCancelRecordingWithError:(id)arg1;
- (void)didCancelRecording;
- (void)failedToStopRecordingWithError:(id)arg1;
- (void)didStopRecording;
- (void)failedToResumeRecordingWithError:(id)arg1;
- (void)didResumeRecording;
- (void)failedToPauseRecordingWithError:(id)arg1;
- (void)didPauseRecording;
- (void)failedToStartRecordingWithError:(id)arg1;
- (void)didStartRecording;
- (void)dispatchDelegateMethodWithArguments:(id)arg1;
- (void)updateElapsedRecordingTime;
- (void)updateMostRecentStartDate;
@property(readonly) BOOL isRemote; // @dynamic isRemote;
- (void)cancel;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)startWithDelay:(double)arg1;
- (void)start;
- (void)bootstrap;
- (void)dealloc;
- (id)init;

@end

