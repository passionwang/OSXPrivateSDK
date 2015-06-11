/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_IPropertyValueExtractor.h>

// Not exported
@interface FI_IPropertySizeExtractor : FI_IPropertyValueExtractor
{
    struct TFENodeVector _nodesToSize;
    struct map<TFENode, TNSRef<NSMutableDictionary *>, std::__1::less<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TNSRef<NSMutableDictionary *>>>> _nodesAndSizeMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)flush;
- (_Bool)updateNeededWithUpdateList:(const vector_614ab7ad *)arg1;
- (_Bool)updateNeededWithChangedMap:(const map_39732344 *)arg1;
- (id)value;
- (_Bool)isWaitingForPendingNode:(const struct TFENode *)arg1;
- (_Bool)isWaitingForPendingNodes;
- (long long)sumValueForProperty:(unsigned int)arg1;
- (long long)valueForProperty:(unsigned int)arg1 ofNode:(const struct TFENode *)arg2;
- (void)setValue:(long long)arg1 forProperty:(unsigned int)arg2 ofNode:(const struct TFENode *)arg3;
- (id)computeValue;
- (int)extractValueFromNode:(const struct TFENode *)arg1;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
- (_Bool)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1;

@end

