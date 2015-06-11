//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MailCore/MCMessage.h>

@class MCMutableMessageHeaders, NSData, NSString, _MCOutgoingMessageBody;

@interface MCOutgoingMessage : MCMessage
{
    NSString *_remoteID;
    NSData *_rawData;
    _MCOutgoingMessageBody *_messageBody;
    unsigned long long _localAttachmentsSize;
    MCMutableMessageHeaders *_messageHeaders;
    NSString *_existingRemoteID;
}

@property(retain, nonatomic) NSString *existingRemoteID; // @synthesize existingRemoteID=_existingRemoteID;
@property(retain, nonatomic) MCMutableMessageHeaders *mutableHeaders; // @synthesize mutableHeaders=_messageHeaders;
- (void)setRemoteID:(id)arg1;
- (id)remoteID;
- (void)setLocalAttachmentsSize:(unsigned long long)arg1;
- (void)_setRawData:(id)arg1;
- (unsigned long long)messageSize;
- (id)headersIfAvailable;
- (id)headers;
- (id)messageDataIncludingFromSpace:(BOOL)arg1;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2;
- (id)messageBodyIfAvailable;
- (void)_setMessageBody:(id)arg1;
- (id)messageBody;
- (id)dataSource;
- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)bodyData;
- (void)dealloc;
- (id)init;

@end

