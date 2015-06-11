/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreFoundation/ISOperation.h>

#import "ISURLOperationDelegate-Protocol.h"

@class ISPurchaseReceipt, NSString;

@interface ISAppleIDLookupOperation : ISOperation <ISURLOperationDelegate>
{
    ISPurchaseReceipt *mReceipt;
    NSString *mAppleID;
}

+ (id)appleIDLookupOperationForReceipt:(id)arg1 storeClient:(id)arg2;
@property(readonly) NSString *appleID; // @synthesize appleID=mAppleID;
- (void).cxx_destruct;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)run;
- (id)initWithReceipt:(id)arg1 storeClient:(id)arg2;
- (id)_newURLOperationWithURLBagType:(unsigned long long)arg1;
- (id)_requestBodyData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

