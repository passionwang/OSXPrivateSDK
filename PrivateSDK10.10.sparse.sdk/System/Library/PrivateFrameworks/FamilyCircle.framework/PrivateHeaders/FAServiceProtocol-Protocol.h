/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol FAServiceProtocol <NSObject>
- (void)launchiCloudFamilySettings;
- (void)didReceiveFamilyEventPushNotificationWithPayload:(id)arg1 options:(id)arg2 replyBlock:(id)arg3;
- (void)clearFamilyCircleCacheWithReplyBlock:(id)arg1;
- (void)registerPushToken:(id)arg1 options:(id)arg2 replyBlock:(id)arg3;
- (void)dispatchFamilyPushNotificationWithPayload:(id)arg1 options:(id)arg2 replyBlock:(id)arg3;
- (void)fetchFamilyMemberPhotoWithDSID:(id)arg1 hashedDSID:(id)arg2 size:(long long)arg3 localFallback:(BOOL)arg4 options:(id)arg5 replyBlock:(id)arg6;
- (void)removeFamilyMemberWithDSID:(id)arg1 options:(id)arg2 replyBlock:(id)arg3;
- (void)addFamilyMemberWithAppleID:(id)arg1 password:(id)arg2 isUnder13:(BOOL)arg3 options:(id)arg4 replyBlock:(id)arg5;
- (void)fetchFamilyCircleWithExpectedDSIDs:(id)arg1 signedInAccountShouldBeApprover:(BOOL)arg2 forceServerFetch:(BOOL)arg3 doNotFetchFromServer:(BOOL)arg4 options:(id)arg5 replyBlock:(id)arg6;
@end

