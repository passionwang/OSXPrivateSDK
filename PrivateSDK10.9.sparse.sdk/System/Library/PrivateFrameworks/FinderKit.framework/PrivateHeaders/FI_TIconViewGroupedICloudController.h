//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TIconViewController.h>

__attribute__((visibility("hidden")))
@interface FI_TIconViewGroupedICloudController : FI_TIconViewController
{
    struct TFENodeVector _subFolders;
    struct CGRect _oldDocumentViewBounds;
    struct CGRect _oldDocumentVisibleRect;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)imageBrowser:(id)arg1 backgroundWasRightClickedWithEvent:(id)arg2;
- (void)closeTarget;
- (_Bool)closeContainer:(const struct TFENode *)arg1;
- (_Bool)openContainer:(const struct TFENode *)arg1;
- (void)updatePropertiesForNodes:(const vector_614ab7ad *)arg1 inContainerNode:(const struct TFENode *)arg2;
- (BOOL)updateNodesGroup:(const struct TGroupedNodes *)arg1 forContainer:(const struct TFENode *)arg2 groupChanges:(struct TGroupChanges *)arg3;
- (void)folderContentChanged:(const struct FolderContentChangeDescriptor *)arg1;
- (id)postProcessOperationOfKind:(int)arg1 forContainer:(const struct TFENode *)arg2;
- (void)setArrangeBy:(int)arg1;
- (double)scrollDistanceFromTop;
- (void)updateScrollPosition;
- (_Bool)shouldSaveAndRestoreScrollDistanceFromTop;
- (void)finishViewInitialization;
- (BOOL)allowsDraggingToMoveFilesOut;
- (void)setUpFreeFormLayoutMargins;
- (void)setSpecificImageBrowserFlavor;
- (long long)groupStyleHack;
- (void)aboutToTearDown:(id)arg1;

@end

