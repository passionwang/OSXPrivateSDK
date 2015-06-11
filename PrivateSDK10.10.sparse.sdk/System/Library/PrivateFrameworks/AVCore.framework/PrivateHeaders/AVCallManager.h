/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray;

@interface AVCallManager : NSObject
{
    unsigned int _callState;
    NSDate *_lastCallStateChange;
    unsigned int _telephonyCallState;
    int _token;
    unsigned int _globalCallState;
    NSMutableArray *_chatArray;
}

+ (id)sharedInstance;
@property(nonatomic, setter=_setTelephonyCallState:) unsigned int _telephonyCallState; // @synthesize _telephonyCallState;
- (void)_updateOverallChatState;
@property(readonly, nonatomic) unsigned int callState;
- (BOOL)_hasActiveFaceTimeCall;
- (BOOL)_hasActiveTelephonyCall;
@property(readonly, nonatomic) BOOL hasActiveCall;
- (void)__setTelephonyCallState:(unsigned int)arg1;
- (void)_setCallState:(unsigned int)arg1 quietly:(BOOL)arg2;
@property(nonatomic, setter=_setCallState:) unsigned int _callState;
- (void)_postStateChangeIfNecessary;
- (void)_postStateChangeNamed:(id)arg1 fromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (id)_nonRetainingChatList;
@property(readonly, retain, nonatomic) NSArray *_FTCalls;
@property(readonly, retain, nonatomic) NSArray *calls;
- (void)dealloc;
- (id)init;

@end

