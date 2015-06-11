/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable-Protocol.h"

@class NSNumber, NSString;

@interface SAMicroblogTwitterPostAuthor : AceObject <SAAceSerializable>
{
}

+ (id)twitterPostAuthorWithDictionary:(id)arg1 context:(id)arg2;
+ (id)twitterPostAuthor;
@property(copy, nonatomic) NSNumber *userId;
@property(copy, nonatomic) NSString *screenName;
@property(copy, nonatomic) NSString *profileImageUrl;
@property(copy, nonatomic) NSString *fullName;
@property(nonatomic) long long followersCount;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

