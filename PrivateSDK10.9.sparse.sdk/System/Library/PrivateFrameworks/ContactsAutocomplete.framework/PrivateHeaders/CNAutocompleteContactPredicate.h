//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNPredicate.h"

@class NSPredicate;

@interface CNAutocompleteContactPredicate : CNPredicate
{
    NSPredicate *_cn_coreDataPredicate;
}

+ (id)predicateForProperties:(id)arg1 term:(id)arg2;
- (void).cxx_destruct;
- (id)cn_coreDataPredicate;
- (id)initWithPredicate:(id)arg1 coreDataPredicate:(id)arg2;

@end

