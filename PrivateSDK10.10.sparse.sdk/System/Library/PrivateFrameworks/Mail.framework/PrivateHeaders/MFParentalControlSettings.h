/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MFParentalControlSettings : NSObject
{
}

+ (BOOL)isEmail:(id)arg1 inEmailList:(id)arg2;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (double)parentalControlEnabledTimeIntervalSince1970;
- (id)rejectEmails:(id)arg1;
- (BOOL)_rejectEmail:(id)arg1;
- (id)approveEmails:(id)arg1;
- (BOOL)_approveEmail:(id)arg1;
- (id)_dictionaryFromEmail:(id)arg1;
- (BOOL)haveEmailsBeenApproved:(id)arg1 unapprovedOnes:(id)arg2;
- (BOOL)hasEmailBeenApproved:(id)arg1;
- (id)_approvedEmails;
- (BOOL)_isSelfEmail:(id)arg1;
- (BOOL)isParentEmail:(id)arg1;
- (id)parentEmails;
- (BOOL)isParentalControlEnabled;
- (void)_approveEmailListChanged:(id)arg1;
- (void)_defaultsDidChange;
- (void)_reallyHandleDefaultsChange;
- (void)_updateCachedDataForEnabledState:(BOOL)arg1 approvedList:(BOOL)arg2 postNotification:(BOOL)arg3;
- (void)dealloc;
- (id)init;

@end

