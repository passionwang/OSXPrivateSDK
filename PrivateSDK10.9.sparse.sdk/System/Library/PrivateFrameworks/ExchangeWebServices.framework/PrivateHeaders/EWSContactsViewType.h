//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBasePagingType.h>

@class NSString;

@interface EWSContactsViewType : EWSBasePagingType
{
    NSString *InitialName;
    NSString *FinalName;
}

+ (id)definition;
@property(retain, nonatomic) NSString *FinalName; // @synthesize FinalName;
@property(retain, nonatomic) NSString *InitialName; // @synthesize InitialName;
- (void)dealloc;

@end

