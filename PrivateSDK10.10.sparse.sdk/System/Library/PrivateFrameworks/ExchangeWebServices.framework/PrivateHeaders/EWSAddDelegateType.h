/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSBaseDelegateType.h>

@class NSArray;

@interface EWSAddDelegateType : EWSBaseDelegateType
{
    NSArray *_DelegateUsers;
    int _DeliverMeetingRequests;
}

+ (id)definition;
@property(nonatomic) int DeliverMeetingRequests; // @synthesize DeliverMeetingRequests=_DeliverMeetingRequests;
@property(copy, nonatomic) NSArray *DelegateUsers; // @synthesize DelegateUsers=_DelegateUsers;
- (void)dealloc;

@end

