//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSArray, NSString;

@interface SAAnswerDefinitionVariation : AceObject <SAAceSerializable>
{
}

+ (id)definitionVariationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)definitionVariation;
@property(copy, nonatomic) NSString *variation;
@property(copy, nonatomic) NSArray *examples;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

