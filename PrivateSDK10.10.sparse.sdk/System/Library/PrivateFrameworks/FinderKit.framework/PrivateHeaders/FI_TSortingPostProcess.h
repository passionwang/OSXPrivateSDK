/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TNodeEventPostProcess-Protocol.h"

@class NSString;

// Not exported
@interface FI_TSortingPostProcess : NSObject <TNodeEventPostProcess>
{
    struct TRef<TBaseNodeComparator *, TRetainReleasePolicy<TBaseNodeComparator *>> _comparator;
    struct TGroupManager *_groupManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)validateNodeProcessing:(struct TFENodeVector *)arg1 forComparator:(struct TBaseNodeComparator *)arg2 andGroups:(struct TGroupedNodes *)arg3 withManager:(struct TGroupManager *)arg4;
- (void)processNodes:(struct TFENodeVector *)arg1 andGroup:(struct TGroupedNodes *)arg2 withCanceledFlag:(_Bool *)arg3;
- (id)initWithComparator:(struct TBaseNodeComparator *)arg1 andGroupManager:(struct TGroupManager *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

