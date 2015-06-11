/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GKSessionDelegate-Protocol.h"
#import "GKSessionPrivateDelegate-Protocol.h"

@class GKConnection, GKSession, GKThreadsafeDictionary, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface GKMatch : NSObject <GKSessionDelegate, GKSessionPrivateDelegate>
{
    unsigned char _version;
    BOOL _needHostScore;
    BOOL _hostScoreForQuery;
    unsigned int _packetSequenceNumber;
    GKThreadsafeDictionary *_playersByIdentifier;
    id <GKMatchDelegate> _delegateWeak;
    GKSession *_session;
    GKConnection *_connection;
    unsigned long long _expectedPlayerCount;
    NSMutableDictionary *_playerEventQueues;
    NSMutableArray *_reinvitedPlayers;
    NSData *_selfBlob;
    id <GKMatchDelegate> _inviteDelegateWeak;
    NSMutableDictionary *_playerPushTokens;
    NSMutableArray *_opponentIDs;
    NSString *_rematchID;
    long long _rematchCount;
    NSDictionary *_networkStatistics;
    NSMutableDictionary *_hostScores;
    id _chooseHostCompletion;
}

@property(copy, nonatomic) id chooseHostCompletion; // @synthesize chooseHostCompletion=_chooseHostCompletion;
@property(nonatomic) BOOL hostScoreForQuery; // @synthesize hostScoreForQuery=_hostScoreForQuery;
@property(nonatomic) BOOL needHostScore; // @synthesize needHostScore=_needHostScore;
@property(retain, nonatomic) NSMutableDictionary *hostScores; // @synthesize hostScores=_hostScores;
@property(retain, nonatomic) NSDictionary *networkStatistics; // @synthesize networkStatistics=_networkStatistics;
@property(nonatomic) long long rematchCount; // @synthesize rematchCount=_rematchCount;
@property(retain, nonatomic) NSString *rematchID; // @synthesize rematchID=_rematchID;
@property(retain, nonatomic) NSMutableArray *opponentIDs; // @synthesize opponentIDs=_opponentIDs;
@property(retain, nonatomic) NSMutableDictionary *playerPushTokens; // @synthesize playerPushTokens=_playerPushTokens;
@property(nonatomic) unsigned int packetSequenceNumber; // @synthesize packetSequenceNumber=_packetSequenceNumber;
@property(nonatomic) unsigned char version; // @synthesize version=_version;
@property(retain, nonatomic) NSData *selfBlob; // @synthesize selfBlob=_selfBlob;
@property(retain, nonatomic) NSMutableArray *reinvitedPlayers; // @synthesize reinvitedPlayers=_reinvitedPlayers;
@property(retain, nonatomic) NSMutableDictionary *playerEventQueues; // @synthesize playerEventQueues=_playerEventQueues;
@property(readonly, nonatomic) unsigned long long expectedPlayerCount; // @synthesize expectedPlayerCount=_expectedPlayerCount;
@property(retain, nonatomic) GKConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) GKSession *session; // @synthesize session=_session;
@property(retain, nonatomic) GKThreadsafeDictionary *playersByIdentifier; // @synthesize playersByIdentifier=_playersByIdentifier;
- (id)dataFromBase64String:(id)arg1;
- (void)session:(id)arg1 updateRelay:(id)arg2 forPeer:(id)arg3;
- (void)session:(id)arg1 initiateRelay:(id)arg2 forPeer:(id)arg3;
- (BOOL)shouldStartRelay:(id)arg1;
- (void)preemptRelay:(id)arg1;
- (void)initRelayResponse:(id)arg1 player:(id)arg2;
- (void)acceptRelayResponse:(id)arg1 player:(id)arg2;
- (void)updateRelayConnectionForPlayer:(id)arg1;
- (void)initRelayConnectionForPlayer:(id)arg1;
- (void)updateRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2;
- (void)requestRelayUpdateForPlayer:(id)arg1;
- (void)requestRelayInitForPlayer:(id)arg1;
- (void)updateRelayInfo:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayInfoFromPush:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayInfoFromServerResponse:(id)arg1 forPlayer:(id)arg2;
- (void)relayPush:(id)arg1;
- (void)relayPushNotification:(id)arg1;
- (void)session:(id)arg1 networkStatisticsChanged:(id)arg2;
- (void)receiveData:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void *)arg4;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (void)sendHostScoreAsQuery:(BOOL)arg1;
- (void)calculateHostScore;
- (BOOL)selectHostIfRequestedAndAllScored;
- (BOOL)haveAllHostScores;
- (void)addHostScore:(int)arg1 forPlayer:(id)arg2;
- (void)receivedChooseHostData:(id)arg1 fromPlayer:(id)arg2;
- (void)chooseBestHostingPlayerWithCompletionHandler:(id)arg1;
- (void)chooseBestHostPlayerWithCompletionHandler:(id)arg1;
- (void)rematchWithCompletionHandler:(id)arg1;
- (void)conditionallyRelaunchPlayer:(id)arg1;
- (void)conditionallyReinvitePlayer:(id)arg1 sessionToken:(id)arg2;
- (void)reinviteeDeclinedNotification:(id)arg1;
- (void)reinviteeAcceptedNotification:(id)arg1;
- (void)sendStateCallbackToDelegate:(id)arg1 forPlayer:(id)arg2 state:(long long)arg3;
- (void)sendStateCallbackForPlayer:(id)arg1 state:(long long)arg2;
- (void)updateStateForPlayer:(id)arg1 state:(long long)arg2;
- (void)deferStateCallbackForPlayer:(id)arg1 state:(long long)arg2;
- (void)sendQueuedPacketsForPlayer:(id)arg1;
- (void)sendData:(id)arg1 fromPlayer:(id)arg2;
- (void)_delegate:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;
- (void)queueData:(id)arg1 forPlayer:(id)arg2;
- (id)peerFromPlayer:(id)arg1;
- (id)playerFromPeer:(id)arg1;
- (void)addPlayers:(id)arg1;
- (id)voiceChatWithName:(id)arg1;
- (void)disconnect;
- (void)sendVersionData:(unsigned char)arg1 toPeer:(id)arg2;
- (void)sendVersionData:(unsigned char)arg1;
- (BOOL)sendInviteData:(id)arg1 error:(id *)arg2;
- (BOOL)sendDataToAllPlayers:(id)arg1 withDataMode:(long long)arg2 error:(id *)arg3;
- (BOOL)sendData:(id)arg1 toPlayers:(id)arg2 withDataMode:(long long)arg3 error:(id *)arg4;
- (BOOL)sendData:(id)arg1 toPlayers:(id)arg2 dataMode:(long long)arg3 error:(id *)arg4;
- (id)packet:(unsigned char)arg1 data:(id)arg2;
- (void)inviteeComboMatched:(long long)arg1;
- (void)connectToNearbyPlayer:(id)arg1 withConnectionData:(id)arg2;
- (void)connectToPlayers:(id)arg1 withPeerDictionaries:(id)arg2 version:(unsigned char)arg3 sessionToken:(id)arg4 cdxTicket:(id)arg5;
- (void)updateRematchID;
- (void)preLoadInviter:(id)arg1 sessionToken:(id)arg2;
- (void)withEventQueueForPlayer:(id)arg1 create:(id)arg2 perform:(void)arg3;
- (void)withEventQueueForPlayer:(id)arg1 createIfNeeded:(BOOL)arg2 perform:(id)arg3;
- (void)withEventQueueForPlayer:(id)arg1 perform:(id)arg2;
- (id)nearbyConnectionData;
- (void)getLocalConnectionDataWithCompletionHandler:(id)arg1;
- (void)localPlayerDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
@property(nonatomic) id <GKMatchDelegate> inviteDelegate; // @synthesize inviteDelegate=_inviteDelegateWeak;
@property(nonatomic) id <GKMatchDelegate> delegate; // @synthesize delegate=_delegateWeak;
- (BOOL)connected:(id)arg1;
- (id)allIDs;
- (id)playerIDs;
@property(readonly, nonatomic) NSArray *players;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

