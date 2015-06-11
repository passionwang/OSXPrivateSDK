/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSError;

@interface SHKServiceCompletionInfo : NSObject
{
    BOOL _success;
    BOOL _viewServiceHasAnimated;
    NSError *_error;
    NSArray *_items;
    id _completionHandler;
}

@property BOOL viewServiceHasAnimated; // @synthesize viewServiceHasAnimated=_viewServiceHasAnimated;
@property(copy) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSArray *items; // @synthesize items=_items;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly) BOOL success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)initWithItems:(id)arg1 completionHandler:(id)arg2;
- (id)initWithError:(id)arg1;

@end

