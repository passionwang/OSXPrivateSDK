//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSSearchExpressionType.h>

@class EWSBasePathToElementType, EWSConstantValueType;

@interface EWSContainsExpressionType : EWSSearchExpressionType
{
    EWSConstantValueType *Constant;
    int ContainmentComparison;
    int ContainmentMode;
    EWSBasePathToElementType *Path;
}

+ (id)definition;
@property(retain, nonatomic) EWSBasePathToElementType *Path; // @synthesize Path;
@property(nonatomic) int ContainmentMode; // @synthesize ContainmentMode;
@property(nonatomic) int ContainmentComparison; // @synthesize ContainmentComparison;
@property(retain, nonatomic) EWSConstantValueType *Constant; // @synthesize Constant;
- (void)dealloc;
- (id)description;

@end

