/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <BrowserKit/BKBaseContentsModule.h>

#import "BKPaneCapItemOwner-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSProContentViewMenu-Protocol.h"

@class BKPaneCapItemButton, BKPaneCapItemMenu, BKPaneCapItemSidebarHeader, BKPaneCapItemSlider, BKSidebarModule, BKSplitView, NSArray, NSMutableArray, NSString, NSView;

// Not exported
@interface BKSidebarBrowserContentsModule : BKBaseContentsModule <NSProContentViewMenu, NSMenuDelegate, BKPaneCapItemOwner>
{
    BKSplitView *_splitView;
    NSView *_headerContents;
    NSView *_footerContents;
    BKSidebarModule *_sidebarModule;
    BKPaneCapItemSidebarHeader *_sidebarHeaderPaneCapItem;
    BKPaneCapItemMenu *_contentViewMenuPaneCapItem;
    BKPaneCapItemMenu *_viewTypeMenuPaneCapItem;
    BKPaneCapItemButton *_searchPaneCapItem;
    BKPaneCapItemButton *_showHideSidebarPaneCapItem;
    BKPaneCapItemMenu *_actionMenuPaneCapItem;
    BKPaneCapItemMenu *_sortingMenuPaneCapItem;
    BKPaneCapItemSlider *_auxiliarySliderPaneCapItem;
    NSMutableArray *_headerItems;
    NSMutableArray *_footerItems;
    NSArray *_paneCSelectionPath;
    BOOL _showingSearchField;
    BOOL _noSidebar;
}

+ (id)defaultModuleNibName;
@property(copy, nonatomic) NSArray *paneCSelectionPath; // @synthesize paneCSelectionPath=_paneCSelectionPath;
@property(readonly) NSView *moduleFooterAccessoryView; // @synthesize moduleFooterAccessoryView=_footerContents;
@property(readonly) NSView *moduleHeaderAccessoryView; // @synthesize moduleHeaderAccessoryView=_headerContents;
@property(readonly) BKSidebarModule *sidebarModule; // @synthesize sidebarModule=_sidebarModule;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (void)paneCapItemActionHandler:(id)arg1;
- (void)paneCapItemRefresh:(id)arg1;
- (id)contentViewMenuThumbnail;
- (id)contentViewMenuSubtitle;
- (id)contentViewMenuTitle;
- (id)contentViewMenuSegmentedControlAndIndex:(long long *)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)appendRootItems:(id)arg1 toSelectionPath:(id)arg2;
- (BOOL)setSelectionPath:(id)arg1;
- (id)selectionPath;
- (BOOL)handlesPathComponent:(id)arg1;
- (id)nextSelectionModule;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (id)firstKeyView;
- (struct CGSize)viewMinSize;
- (void)menuNeedsUpdate:(id)arg1;
- (void)moduleConnectorStateUpdated;
- (void)updateModuleConnectorStateCacheIfNeeded;
- (id)_isSidebarHiddenKey;
- (void)installViewForModule:(id)arg1;
- (void)changePaneCModuleToClassNamed:(id)arg1 withItemsControlsModuleContent:(id)arg2 withModuleUserContents:(id)arg3;
- (id)defaultItemsForItemsControlsModule;
- (id)actionMenuTargetModule;
- (id)itemsStringForCell:(id)arg1 displayWidth:(double)arg2 centeringRect:(struct CGRect *)arg3;
- (void)refreshItemsCountFrame;
- (id)keywordSearchString;
- (BOOL)isKeywordSearching;
- (BOOL)needToShowScopeBar;
- (BOOL)sortMenuHidden;
- (void)setSortMenuHidden:(BOOL)arg1;
- (void)sortingMenuSelectionChanged;
- (void)disconnectHistoryAndPathControls;
- (void)connectHistoryAndPathControls;
- (void)searchAction:(id)arg1;
- (void)setItemViewType:(long long)arg1;
- (long long)itemViewType;
- (void)itemViewTypeAction:(id)arg1;
- (void)toggleSidebarHidden:(id)arg1;
@property BOOL noSidebar;
@property(copy) NSString *paneCapSidebarHeaderTitleString;
- (void)removePaneCapItem:(id)arg1;
- (void)addPaneCapItem:(id)arg1;
@property(retain) NSView *bottomAccessoryView;
@property(retain) NSView *topAccessoryView;
- (BOOL)wantsFooterBar;
- (BOOL)wantsHeaderBar;
- (void)_setSidebarHidden:(BOOL)arg1;
- (void)_searchAction:(id)arg1;
- (double)_sidebarUserWidth;
- (void)_setSidebarUserWidth:(double)arg1;
- (id)_sidebarUserWidthKey;
- (void)_updateSortingMenuLabel;
- (void)_sortingMenuItemAction:(id)arg1;
- (id)_facetForItemViewType:(long long)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)_refreshItemViewTypeMenu;
- (void)_setAuxiliarySlider:(id)arg1 andGlyph:(id)arg2;
- (void)_layoutPaneCapContents:(unsigned long long)arg1;
- (void)_layoutPaneCapContents:(id)arg1 withPaneCapItems:(id)arg2 segmentedControlFactoryMethod:(SEL)arg3 edgeMargin:(double)arg4;
- (void)_layoutPaneCapViews:(id)arg1 edgeMargin:(double)arg2;
- (id)_newLightFooterSegmentedControl;
- (id)_newDarkFooterSegmentedControl;
- (id)_newHeaderSegmentedControl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

