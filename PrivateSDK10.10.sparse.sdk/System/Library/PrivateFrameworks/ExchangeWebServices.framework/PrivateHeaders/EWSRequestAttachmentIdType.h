/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSBaseItemIdType.h>

@class NSString;

@interface EWSRequestAttachmentIdType : EWSBaseItemIdType
{
    NSString *_Id;
}

+ (id)definition;
@property(copy, nonatomic) NSString *Id; // @synthesize Id=_Id;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

