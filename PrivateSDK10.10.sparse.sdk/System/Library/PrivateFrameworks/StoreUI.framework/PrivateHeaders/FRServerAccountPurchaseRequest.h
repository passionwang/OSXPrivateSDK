/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreUI/FRServerAccountRequest.h>

@class NSString;

@interface FRServerAccountPurchaseRequest : FRServerAccountRequest
{
    NSString *_productURLString;
    NSString *_productNumberString;
}

@property(copy) NSString *productNumberString; // @synthesize productNumberString=_productNumberString;
@property(copy) NSString *productURLString; // @synthesize productURLString=_productURLString;
- (void).cxx_destruct;
- (void)handleServerResponse:(id)arg1;
- (id)requestDictionary;

@end

