/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IKImageFlowDelegate <NSObject>

@optional
- (void)imageFlow:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2;
- (void)imageFlow:(id)arg1 startResizingWithEvent:(id)arg2;
- (void)imageFlow:(id)arg1 didLoadItemAtIndex:(unsigned long long)arg2;
- (void)imageFlowDidStabilize:(id)arg1;
- (void)imageFlowWillStabilize:(id)arg1;
- (void)imageFlow:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
@end

