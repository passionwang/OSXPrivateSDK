/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TelephonyUtilities/TUFaceTimeCall.h>

@interface TUFaceTimeVideoCall : TUFaceTimeCall
{
}

- (id)audioMode;
- (id)audioCategory;
- (int)endedError;
- (unsigned int)endedReason;
- (BOOL)hasReceivedFirstFrame;
- (void)setIsSendingVideo:(BOOL)arg1;
- (BOOL)isSendingVideo;
- (int)callStatus;
- (BOOL)isVideo;
- (int)supportedModelType;
- (int)service;

@end

