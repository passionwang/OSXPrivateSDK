//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GKVoiceChatDictionary : NSObject
{
    NSMutableDictionary *actualDictionary;
    unsigned long long type;
    unsigned int orignalCallID;
}

+ (BOOL)validateFocus:(id)arg1;
+ (BOOL)validateCancel:(id)arg1;
+ (BOOL)validateReply:(id)arg1;
+ (BOOL)validateInvite:(id)arg1;
+ (BOOL)validateDictionary:(id)arg1;
+ (id)dictionaryFromData:(id)arg1;
+ (id)inviteDictionaryToParticipantID:(id)arg1 fromParticipantID:(id)arg2 connectionData:(id)arg3 callID:(unsigned int)arg4 focus:(BOOL)arg5;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)setRemoteVCPartyID:(id)arg1;
- (id)setLocalVCPartyID:(id)arg1;
- (id)remoteVCPartyID;
- (id)localVCPartyID;
@property unsigned int callID;
- (id)createBlob;
- (id)version;
- (void)setFocus:(BOOL)arg1;
- (BOOL)isFocus;
- (BOOL)matchesNonce:(long long)arg1;
@property long long nonce;
- (id)participantID;
- (void)setFromParticipantID:(id)arg1;
- (id)fromParticipantID;
- (id)connectionData;
- (unsigned long long)response;
- (unsigned long long)type;
- (BOOL)matchesResponse:(id)arg1;
- (BOOL)isFocusDictionary;
- (BOOL)isReplyDictionary;
- (BOOL)isCancelDictionary;
- (BOOL)isInviteDictionary;
- (id)focusDictionary:(BOOL)arg1;
- (id)cancelDictionary;
- (id)replyDictionary:(unsigned long long)arg1 connectionData:(id)arg2 callID:(unsigned int)arg3 focus:(BOOL)arg4;
@property(readonly) unsigned int originalCallID;
- (void)dealloc;

@end

