/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSNumber, NSString;

@interface PRRequest : NSObject <NSSecureCoding>
{
    BOOL _requestedOnThisDevice;
    NSString *_requestID;
    NSString *_ask;
    NSDictionary *_requestInfo;
    unsigned long long _requestStatus;
    NSNumber *_requesterDSID;
    NSNumber *_responderDSID;
    NSString *_clientIdentifier;
    NSDate *_dateAddedToLocalCache;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSDate *dateAddedToLocalCache; // @synthesize dateAddedToLocalCache=_dateAddedToLocalCache;
@property BOOL requestedOnThisDevice; // @synthesize requestedOnThisDevice=_requestedOnThisDevice;
@property(copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(copy) NSNumber *responderDSID; // @synthesize responderDSID=_responderDSID;
@property(copy) NSNumber *requesterDSID; // @synthesize requesterDSID=_requesterDSID;
@property unsigned long long requestStatus; // @synthesize requestStatus=_requestStatus;
@property(copy) NSDictionary *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(copy) NSString *ask; // @synthesize ask=_ask;
@property(copy) NSString *requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (id)cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly) NSString *statusDescription;
- (id)initWithAsk:(id)arg1 requestInfo:(id)arg2;

@end

