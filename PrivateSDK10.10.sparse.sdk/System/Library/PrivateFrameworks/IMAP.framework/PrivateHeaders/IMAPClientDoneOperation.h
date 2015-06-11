/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMAP/IMAPSingleClientOperation.h>

@class NSDate;

@interface IMAPClientDoneOperation : IMAPSingleClientOperation
{
    BOOL _isReallyReady;
    BOOL _shouldQueueIdleWhenFinished;
    BOOL _didQueueIdle;
    NSDate *_resetDate;
}

- (void).cxx_destruct;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)alwaysAllowToComplete;
- (void)setResetDateEarlierThanNow;
- (BOOL)updateReadiness;
- (BOOL)isReady;
- (void)cancel;
- (BOOL)executeOnConnection:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
@property(retain) NSDate *resetDate; // @synthesize resetDate=_resetDate;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (id)activityString;
- (id)commandTypeString;
- (BOOL)_shouldQueueIdleNow;
- (BOOL)setShouldQueueIdleWhenFinished:(BOOL)arg1;
- (BOOL)shouldQueueIdleWhenFinished;
- (id)init;

@end

