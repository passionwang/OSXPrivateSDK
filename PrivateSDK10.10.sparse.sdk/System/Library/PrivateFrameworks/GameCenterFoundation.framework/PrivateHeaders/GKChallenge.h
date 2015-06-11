/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GKChallengeInternal, GKGame, GKPlayer, NSDate, NSOrderedSet, NSString;

@interface GKChallenge : NSObject <NSCoding, NSSecureCoding>
{
    GKChallengeInternal *_internal;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)loadReceivedChallengesWithCompletionHandler:(id)arg1;
+ (void)loadChallengesForReceivingPlayer:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadChallengesForGame:(id)arg1 receivingPlayer:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)getCountOfChallenges:(id)arg1;
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withAchievement:(id)arg3;
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withScore:(id)arg3;
+ (id)challengeForInternalRepresentation:(id)arg1;
+ (id)stringForState:(long long)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain) GKChallengeInternal *internal; // @synthesize internal=_internal;
- (void)loadDetailsWithCompletionHandler:(id)arg1;
@property(readonly, nonatomic) BOOL detailsLoaded;
- (id)infoTextForIssuingPlayer:(id)arg1;
- (void)loadUIDetailsWithHandler:(id)arg1;
- (BOOL)hasLoadedUIDetails;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, copy, nonatomic) GKPlayer *receivingPlayer; // @dynamic receivingPlayer;
@property(readonly, copy, nonatomic) GKPlayer *issuingPlayer; // @dynamic issuingPlayer;
@property(readonly, copy, nonatomic) NSString *receivingPlayerID;
@property(readonly, copy, nonatomic) NSString *issuingPlayerID;
@property(readonly, nonatomic) GKGame *game; // @dynamic game;
- (void)decline;
- (void)declineWithCompletionHandler:(id)arg1;
- (void)issueToPlayers:(id)arg1 message:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(readonly, copy, nonatomic) NSString *challengeID; // @dynamic challengeID;
@property(readonly, copy, nonatomic) NSOrderedSet *compatibleBundleIDs; // @dynamic compatibleBundleIDs;
@property(readonly, retain, nonatomic) NSDate *completionDate; // @dynamic completionDate;
@property(readonly, retain, nonatomic) NSDate *issueDate; // @dynamic issueDate;
@property(readonly, copy, nonatomic) NSString *message; // @dynamic message;
@property(readonly, nonatomic) long long state; // @dynamic state;

@end

