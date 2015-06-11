//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TIconViewController.h>

__attribute__((visibility("hidden")))
@interface FI_TIconViewICloudController : FI_TIconViewController
{
    struct TFENodeVector _flattenedDataSource;
    struct TFENodeVector fFoldersToCheckAfterDrag;
    BOOL _groupExpanded;
    struct TFENode _newlyCreatedFolderToExpand;
    BOOL _receivingDrop;
}

+ (id)tagImageForNode:(const struct TFENode *)arg1 selected:(_Bool)arg2 dimmed:(_Bool)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)folderContentChanged:(const struct FolderContentChangeDescriptor *)arg1;
- (void)imageBrowser:(id)arg1 titleOfCellAtIndex:(unsigned long long)arg2 didChangeTo:(id)arg3;
- (void)viewFrameChanged;
- (void)imageBrowser:(id)arg1 backgroundWasRightClickedWithEvent:(id)arg2;
- (void)imageBrowser:(id)arg1 dragImage:(id)arg2 at:(struct CGPoint)arg3 offset:(struct CGSize)arg4 event:(id)arg5 pasteboard:(id)arg6 source:(id)arg7 slideBack:(BOOL)arg8;
- (BOOL)checkForTEFFilesInContainer:(const struct TFENode *)arg1;
- (BOOL)prepareForDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (void)reloadDataAfterGrouping;
- (void)concludeDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (BOOL)receiveDrop:(struct TDropOperation *)arg1 draggingInfo:(id)arg2;
- (BOOL)imageBrowser:(id)arg1 moveItemsAtIndexes:(id)arg2 toIndex:(unsigned long long)arg3;
- (BOOL)deleteEmptyContainersAfterMove;
- (void)deleteEmptyFoldersAfterDrop;
- (void)expandFolderAndStartEditing:(const struct TFENode *)arg1;
- (void)expandFolderAndStartEditingDetails:(id)arg1;
- (void)expandOrCollapseGroup:(const struct TFENode *)arg1;
- (void)startEditing:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1 dropTargetView:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1 dropTargetView:(id)arg2;
- (void)imageBrowser:(id)arg1 groupAtIndexDidCollapse:(unsigned long long)arg2;
- (void)imageBrowser:(id)arg1 groupAtIndexDidExpand:(unsigned long long)arg2;
- (id)imageBrowser:(id)arg1 subtitleOfImageBrowserItem:(id)arg2;
- (void)imageBrowser:(id)arg1 didValidateVisibleCellsAtIndexes:(id)arg2;
- (unsigned long long)numberOfGroupsInImageBrowser:(id)arg1;
- (unsigned long long)numberOfItemsInImageBrowser:(id)arg1;
- (id)imageBrowser:(id)arg1 groupAtIndex:(unsigned long long)arg2;
- (id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (double)scrollDistanceFromTop;
- (_Bool)shouldSaveAndRestoreScrollDistanceFromTop;
- (void)updateScrollPosition;
- (void)closeTarget;
- (void)reloadData;
- (BOOL)mayResortChildrenAfterNameChange;
- (BOOL)removeItems:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2;
- (BOOL)addItems:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2 withOperation:(id)arg3;
- (void)checkForUbquityStatusChange;
- (void)updatePropertiesForNodes:(const vector_614ab7ad *)arg1 inContainerNode:(const struct TFENode *)arg2;
- (unsigned long long)indexForGroup:(const struct TFENode *)arg1;
- (unsigned long long)indexForNode:(const struct TFENode *)arg1;
- (struct TFENode)nodeAtIndex:(unsigned long long)arg1;
- (BOOL)isGrouping;
- (struct TGroupManager *)groupManager:(const struct TFENode *)arg1;
- (void)setArrangeBy:(int)arg1;
- (void)finishViewInitialization;
- (void)setUpFreeFormLayoutMargins;
- (void)setSpecificImageBrowserFlavor;
- (long long)groupStyleHack;
- (void)aboutToTearDown:(id)arg1;
- (void)adjustIconViewAnimationMask;
- (BOOL)shouldUseIKFinderMode;
- (BOOL)allowsDraggingToMoveFilesOut;
- (void)setUpDragging;

@end

