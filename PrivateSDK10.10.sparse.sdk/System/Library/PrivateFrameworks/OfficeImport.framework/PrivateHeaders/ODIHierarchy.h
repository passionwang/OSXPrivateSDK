/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, ODIState;

// Not exported
@interface ODIHierarchy : NSObject
{
    int mType;
    int mMaxMappableTreeDepth;
    ODIState *mState;
    NSMutableDictionary *mNodeInfoMap;
}

+ (BOOL)mapIdentifier:(id)arg1 state:(id)arg2;
- (void)dealloc;
- (void)map;
- (void)mapNode:(id)arg1;
- (struct CGRect)boundsOfNode:(id)arg1;
- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3;
- (void)mapLogicalBoundsWithXRanges:(const struct ODIHRangeVector *)arg1;
- (struct ODIHRangeVector *)mapRangesForNode:(id)arg1;
- (void)createInfoForNode:(id)arg1 depth:(int)arg2;
- (id)infoForNode:(id)arg1;
- (id)initWithType:(int)arg1 state:(id)arg2;

@end

