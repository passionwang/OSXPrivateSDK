//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BrowserKit/BKArrangedItemsModule.h>

@class BKImageBrowserView, NSArray, NSMutableArray, NSProBox, NSProScroller;

__attribute__((visibility("hidden")))
@interface BKImageBrowserModule : BKArrangedItemsModule
{
    BKImageBrowserView *_browserView;
    NSProScroller *_browserVerticalScroller;
    NSProBox *_box;
    NSMutableArray *_browserItems;
    struct {
        unsigned int _reloadPending:1;
        unsigned int _unused:31;
    } _imageBrowserModuleFlags;
    NSArray *_sortMenuContents;
    void *_reservedImageBrowserModule2;
    void *_reservedImageBrowserModule3;
}

+ (id)defaultModuleNibName;
+ (Class)itemClass;
+ (id)sortMenuDictionary;
+ (id)sortKeysDictionary;
+ (id)itemFormatManager;
+ (void)updateConfigurationWith:(id)arg1;
+ (void)updateSortingDictionary:(id)arg1;
+ (id)sortMenuContentsWithName:(id)arg1;
+ (id)sortKeysWithName:(id)arg1;
@property(readonly) NSArray *sortMenuContents; // @synthesize sortMenuContents=_sortMenuContents;
@property(readonly) BKImageBrowserView *browserView; // @synthesize browserView=_browserView;
- (void)_changeToLook:(id)arg1;
- (void)reloadData;
- (void)configureView;
- (void)imageBrowserItemNeedsDisplay:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)awakeFromNib;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)imageBrowserSelectionDidChange:(id)arg1;
- (void)imageBrowser:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2;
- (unsigned long long)imageBrowser:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInImageBrowser:(id)arg1;
- (id)menuForEvent:(id)arg1 itemIndex:(long long)arg2;
- (void)viewWillBeRemoved;
- (void)viewWasInstalled;
- (struct CGSize)viewMinSize;
- (BOOL)setSelectionPath:(id)arg1;
- (void)_registerForDraggedTypes:(id)arg1;
- (void)setAllowsEmptySelection:(BOOL)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setSelectedItems:(id)arg1;
- (id)selectedItems;
- (double)itemSize;
- (void)setItemSize:(double)arg1;

@end

