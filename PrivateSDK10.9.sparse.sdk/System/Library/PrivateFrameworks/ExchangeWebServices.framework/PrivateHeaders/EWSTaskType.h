//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSItemType.h>

@class EWSTaskRecurrenceType, NSArray, NSDate, NSString;

@interface EWSTaskType : EWSItemType
{
    long long ActualWork;
    BOOL ActualWorkSpecified;
    NSDate *AssignedTime;
    NSString *BillingInformation;
    long long ChangeCount;
    BOOL ChangeCountSpecified;
    NSArray *Companies;
    NSDate *CompleteDate;
    NSArray *Contacts;
    int DelegationState;
    NSString *Delegator;
    NSDate *DueDate;
    long long IsAssignmentEditable;
    BOOL IsAssignmentEditableSpecified;
    BOOL IsComplete;
    BOOL IsCompleteSpecified;
    BOOL IsRecurring;
    BOOL IsRecurringSpecified;
    BOOL IsTeamTask;
    BOOL IsTeamTaskSpecified;
    NSString *Mileage;
    NSString *Owner;
    double PercentComplete;
    BOOL PercentCompleteSpecified;
    EWSTaskRecurrenceType *Recurrence;
    NSDate *StartDate;
    int Status;
    NSString *StatusDescription;
    long long TotalWork;
    BOOL TotalWorkSpecified;
}

+ (id)definition;
@property(nonatomic) BOOL TotalWorkSpecified; // @synthesize TotalWorkSpecified;
@property(nonatomic) long long TotalWork; // @synthesize TotalWork;
@property(retain, nonatomic) NSString *StatusDescription; // @synthesize StatusDescription;
@property(nonatomic) int Status; // @synthesize Status;
@property(retain, nonatomic) NSDate *StartDate; // @synthesize StartDate;
@property(retain, nonatomic) EWSTaskRecurrenceType *Recurrence; // @synthesize Recurrence;
@property(nonatomic) BOOL PercentCompleteSpecified; // @synthesize PercentCompleteSpecified;
@property(nonatomic) double PercentComplete; // @synthesize PercentComplete;
@property(retain, nonatomic) NSString *Owner; // @synthesize Owner;
@property(retain, nonatomic) NSString *Mileage; // @synthesize Mileage;
@property(nonatomic) BOOL IsTeamTaskSpecified; // @synthesize IsTeamTaskSpecified;
@property(nonatomic) BOOL IsTeamTask; // @synthesize IsTeamTask;
@property(nonatomic) BOOL IsRecurringSpecified; // @synthesize IsRecurringSpecified;
@property(nonatomic) BOOL IsRecurring; // @synthesize IsRecurring;
@property(nonatomic) BOOL IsCompleteSpecified; // @synthesize IsCompleteSpecified;
@property(nonatomic) BOOL IsComplete; // @synthesize IsComplete;
@property(nonatomic) BOOL IsAssignmentEditableSpecified; // @synthesize IsAssignmentEditableSpecified;
@property(nonatomic) long long IsAssignmentEditable; // @synthesize IsAssignmentEditable;
@property(retain, nonatomic) NSDate *DueDate; // @synthesize DueDate;
@property(retain, nonatomic) NSString *Delegator; // @synthesize Delegator;
@property(nonatomic) int DelegationState; // @synthesize DelegationState;
@property(retain, nonatomic) NSArray *Contacts; // @synthesize Contacts;
@property(retain, nonatomic) NSDate *CompleteDate; // @synthesize CompleteDate;
@property(retain, nonatomic) NSArray *Companies; // @synthesize Companies;
@property(nonatomic) BOOL ChangeCountSpecified; // @synthesize ChangeCountSpecified;
@property(nonatomic) long long ChangeCount; // @synthesize ChangeCount;
@property(retain, nonatomic) NSString *BillingInformation; // @synthesize BillingInformation;
@property(retain, nonatomic) NSDate *AssignedTime; // @synthesize AssignedTime;
@property(nonatomic) BOOL ActualWorkSpecified; // @synthesize ActualWorkSpecified;
@property(nonatomic) long long ActualWork; // @synthesize ActualWork;
- (void)dealloc;

@end

