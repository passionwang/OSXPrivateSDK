//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAMPMediaEntity : SADomainObject
{
}

+ (id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mediaEntity;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *sortTitle;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

