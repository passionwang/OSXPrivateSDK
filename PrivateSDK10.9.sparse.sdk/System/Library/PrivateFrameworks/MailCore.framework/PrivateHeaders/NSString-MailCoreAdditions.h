//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (MailCoreAdditions)
+ (id)contentIDStringFromCidUrl:(id)arg1;
+ (id)messageIDStringWithDomainHint:(id)arg1;
+ (id)newURLForContentID:(id)arg1;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)stringByReplacingNonBreakingSpacesWithString:(id)arg1;
- (unsigned long long)mf_effectivePrefixLengthOnlyRe:(BOOL)arg1;
- (BOOL)hasReplyPrefix;
- (unsigned long long)effectivePrefixLength;
- (id)MD5Digest;
- (id)messageIDSubstring;
- (id)encodedMessageID;
- (BOOL)isCalendarInvitation;
- (id)newStringByApplyingBodyClassName:(id)arg1;
- (id)stringByApplyingBodyClassName:(id)arg1;
- (id)stringByReplacingString:(id)arg1 withString:(id)arg2;
- (long long)caseInsensitiveCompareExcludingXDash:(id)arg1;
- (BOOL)isEqualToStringIgnoringCase:(id)arg1;
- (BOOL)isEqualToStringIgnoreCaseAndDiacritics:(id)arg1;
- (id)stringWithNoExtraSpaces;
- (id)stringSuitableForHTML;
- (id)stringByLocalizingReOrFwdPrefix;
@end

