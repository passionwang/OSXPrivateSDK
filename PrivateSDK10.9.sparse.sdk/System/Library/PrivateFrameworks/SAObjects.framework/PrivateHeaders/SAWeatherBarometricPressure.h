//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSString;

@interface SAWeatherBarometricPressure : AceObject <SAAceSerializable>
{
}

+ (id)barometricPressureWithDictionary:(id)arg1 context:(id)arg2;
+ (id)barometricPressure;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *trend;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

