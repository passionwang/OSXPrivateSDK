//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSString, SAUIAppPunchOut;

@interface SALocalSearchOffer : AceObject <SAAceSerializable>
{
}

+ (id)offerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)offer;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SAUIAppPunchOut *offerPunchOut;
@property(copy, nonatomic) NSString *identifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

