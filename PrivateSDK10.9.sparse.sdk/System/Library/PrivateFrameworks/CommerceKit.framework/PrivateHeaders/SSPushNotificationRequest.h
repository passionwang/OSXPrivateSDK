//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CommerceKit/SSRequest.h>

@class NSData, NSString;

@interface SSPushNotificationRequest : SSRequest
{
    int _registerType;
    int _mediaTypeMask;
    NSData *_deviceToken;
    NSString *_dsIDString;
}

@property int mediaTypeMask; // @synthesize mediaTypeMask=_mediaTypeMask;
@property(copy) NSString *dsIDString; // @synthesize dsIDString=_dsIDString;
@property(retain) NSData *deviceToken; // @synthesize deviceToken=_deviceToken;
@property int registerType; // @synthesize registerType=_registerType;
- (void).cxx_destruct;
- (void)callback:(id)arg1 connectionIsValid:(BOOL)arg2;
- (id)requestInfo;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id *)arg2;
- (id)requestQueueSelectorName;

@end

