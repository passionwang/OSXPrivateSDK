//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSMessageType.h>

@class EWSItemIdType, NSDate, NSString;

@interface EWSMeetingMessageType : EWSMessageType
{
    EWSItemIdType *AssociatedCalendarItemId;
    BOOL IsDelegated;
    BOOL IsOutOfDate;
    BOOL HasBeenProcessed;
    int ResponseType;
    NSString *UID;
    NSDate *RecurrenceId;
    NSDate *DateTimeStamp;
}

+ (id)definition;
@property(retain, nonatomic) NSDate *DateTimeStamp; // @synthesize DateTimeStamp;
@property(retain, nonatomic) NSDate *RecurrenceId; // @synthesize RecurrenceId;
@property(retain, nonatomic) NSString *UID; // @synthesize UID;
@property(nonatomic) int ResponseType; // @synthesize ResponseType;
@property(nonatomic) BOOL HasBeenProcessed; // @synthesize HasBeenProcessed;
@property(nonatomic) BOOL IsOutOfDate; // @synthesize IsOutOfDate;
@property(nonatomic) BOOL IsDelegated; // @synthesize IsDelegated;
@property(retain, nonatomic) EWSItemIdType *AssociatedCalendarItemId; // @synthesize AssociatedCalendarItemId;
- (void)dealloc;

@end

