/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ServerFoundation/XSAdminAction.h>

#import "XSActionContainerProtocol-Protocol.h"

@class NSMutableArray, NSSet;

@interface XSBatchedAdminAction : XSAdminAction <XSActionContainerProtocol>
{
    NSMutableArray *_actions;
}

- (void)stopExecution;
- (void)startExecution;
- (BOOL)addAction:(id)arg1;
@property(readonly) NSSet *actions;
- (void)dealloc;
- (id)init;

@end

