/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ISOperation.h"

#import "ISStoreURLOperationDelegate-Protocol.h"

@class ISURLBagContext, NSString;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate>
{
    ISURLBagContext *_context;
}

@property(readonly) ISURLBagContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)run;
- (void)dealloc;
- (id)initWithBagContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

