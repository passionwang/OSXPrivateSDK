/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

// Not exported
@interface XPCClientUser : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    id block;
}

@property(copy, nonatomic) id block; // @synthesize block;
@property NSObject<OS_dispatch_queue> *queue; // @synthesize queue;

@end

