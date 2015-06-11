/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray;

@interface EWSDeleteItemType : EWSBaseRequestType
{
    NSArray *_ItemIds;
    int _DeleteType;
    int _SendMeetingCancellations;
    int _AffectedTaskOccurrences;
}

+ (id)definition;
@property(nonatomic) int AffectedTaskOccurrences; // @synthesize AffectedTaskOccurrences=_AffectedTaskOccurrences;
@property(nonatomic) int SendMeetingCancellations; // @synthesize SendMeetingCancellations=_SendMeetingCancellations;
@property(nonatomic) int DeleteType; // @synthesize DeleteType=_DeleteType;
@property(copy, nonatomic) NSArray *ItemIds; // @synthesize ItemIds=_ItemIds;
- (void)dealloc;

@end

