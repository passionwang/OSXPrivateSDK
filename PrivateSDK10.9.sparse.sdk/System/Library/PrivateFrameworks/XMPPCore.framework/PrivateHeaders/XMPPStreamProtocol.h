//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<XMPPStreamProtocolDelegate>, NSString, XMPPConnection;

@interface XMPPStreamProtocol : NSObject
{
    NSObject<XMPPStreamProtocolDelegate> *_delegate;
    NSString *_initiator;
    NSString *_target;
    BOOL _isIncoming;
    NSString *_sid;
    XMPPConnection *_connection;
}

+ (id)namespace;
- (void)negotiateOutgoingStreamFrom:(id)arg1 to:(id)arg2 sid:(id)arg3 withConnection:(id)arg4;
- (void)_negotiateOutgoingStream;
- (BOOL)handleIncomingNode:(id)arg1;
- (void)setSID:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setInitiator:(id)arg1;
- (id)sid;
- (BOOL)isIncoming;
- (id)target;
- (id)initiator;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end

