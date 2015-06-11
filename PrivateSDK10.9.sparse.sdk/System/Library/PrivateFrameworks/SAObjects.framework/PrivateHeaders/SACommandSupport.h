//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSArray, NSString, NSURL, SAObjectSupport;

@interface SACommandSupport : AceObject <SAAceSerializable>
{
}

+ (id)commandSupportWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandSupport;
@property(nonatomic) long long weight;
@property(copy, nonatomic) NSArray *supportedConstraints;
@property(copy, nonatomic) NSURL *serverEndpoint;
@property(retain, nonatomic) SAObjectSupport *resultSupport;
@property(copy, nonatomic) NSString *commandId;
@property(copy, nonatomic) NSString *aceVersion;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

