//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAReminderPayload.h"

@class NSArray, NSString;

@interface SAReminderEmailPayload : AceObject <SAReminderPayload>
{
}

+ (id)emailPayloadWithDictionary:(id)arg1 context:(id)arg2;
+ (id)emailPayload;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSArray *recipientsTo;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

