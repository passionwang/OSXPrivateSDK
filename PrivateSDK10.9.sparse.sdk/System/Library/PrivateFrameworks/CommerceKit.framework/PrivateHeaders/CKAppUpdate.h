//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, SSPurchase;

@interface CKAppUpdate : NSObject <NSCoding>
{
    NSMutableDictionary *_dictionary;
    long long _softwareUpdateState;
}

@property(nonatomic) long long softwareUpdateState; // @synthesize softwareUpdateState=_softwareUpdateState;
@property(readonly) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *autoUpdateAbortReason;
@property(nonatomic) BOOL hasBeenSeenByUser;
@property(readonly, nonatomic) BOOL didFailToAutoInstall;
- (double)_autoInstallUpdateMaximumRetryInterval;
@property(copy, nonatomic) NSDate *firstAutoUpdateAttemptDate;
@property(nonatomic) long long autoUpdateAbortCode;
@property(nonatomic) BOOL isStaged;
- (id)description;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSDate *releaseDate;
@property(readonly, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(readonly, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(readonly, nonatomic) NSString *actionParams; // @dynamic actionParams;
@property(readonly, nonatomic) NSNumber *itemIdentifier; // @dynamic itemIdentifier;
@property(readonly, nonatomic) SSPurchase *purchase;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

