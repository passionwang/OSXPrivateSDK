/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

// Not exported
@interface WBSAddressBookValueSpecifier : NSObject
{
    NSString *_property;
    NSString *_component;
    NSString *_label;
}

@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *component; // @synthesize component=_component;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3;

@end

