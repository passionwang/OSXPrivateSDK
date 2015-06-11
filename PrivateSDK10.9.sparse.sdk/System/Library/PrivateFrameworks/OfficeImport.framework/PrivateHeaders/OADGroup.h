//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADDrawable.h>

#import "OADDrawableContainer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADGroup : OADDrawable <OADDrawableContainer>
{
    struct CGRect mLogicalBounds;
    NSMutableArray *mChildren;
}

- (id).cxx_construct;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (id)children;
- (id)childAtIndex:(unsigned long long)arg1;
- (void)addChildren:(id)arg1;
- (void)addChild:(id)arg1;
- (unsigned long long)childCount;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (struct CGRect)logicalBounds;
- (id)groupProperties;
- (void)dealloc;
- (id)init;

@end

