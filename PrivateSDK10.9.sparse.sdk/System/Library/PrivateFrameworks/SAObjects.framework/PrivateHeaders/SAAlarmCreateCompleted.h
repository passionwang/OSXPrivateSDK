//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAAlarmCreateCompleted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)createCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)createCompleted;
@property(copy, nonatomic) NSURL *alarmId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;

@end

