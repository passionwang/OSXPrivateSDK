/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperationQueue.h"

@class CKDClientProxy;

// Not exported
@interface CKDProxyOperationQueue : NSOperationQueue
{
    CKDClientProxy *_proxy;
}

@property(nonatomic) __weak CKDClientProxy *proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (id)initWithProxy:(id)arg1;

@end

