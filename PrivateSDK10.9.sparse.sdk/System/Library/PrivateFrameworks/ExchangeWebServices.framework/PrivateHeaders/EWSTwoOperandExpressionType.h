//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSSearchExpressionType.h>

@class EWSBasePathToElementType, EWSFieldURIOrConstantType;

@interface EWSTwoOperandExpressionType : EWSSearchExpressionType
{
    EWSBasePathToElementType *Path;
    EWSFieldURIOrConstantType *FieldURIOrConstant;
}

+ (id)definition;
@property(retain, nonatomic) EWSFieldURIOrConstantType *FieldURIOrConstant; // @synthesize FieldURIOrConstant;
@property(retain, nonatomic) EWSBasePathToElementType *Path; // @synthesize Path;
- (void)dealloc;
- (id)description;

@end

