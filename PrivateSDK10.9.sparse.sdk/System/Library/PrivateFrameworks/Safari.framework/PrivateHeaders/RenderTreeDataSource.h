//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSOutlineViewDataSource.h"

@class RenderObject;

__attribute__((visibility("hidden")))
@interface RenderTreeDataSource : NSObject <NSOutlineViewDataSource>
{
    RenderObject *root;
}

- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)dealloc;
- (id)initWithRenderTreeRoot:(const struct RenderObject *)arg1;

@end

