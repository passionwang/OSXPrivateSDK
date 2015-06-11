//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "CloudTabsPopoverTableViewDelegate.h"
#import "NSPopoverDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class BrowserWindowControllerMac, FadingScrollView, NSArray, NSImageView, NSPopover, NSTableView, NSTextField;

__attribute__((visibility("hidden")))
@interface CloudTabsPopoverViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, NSPopoverDelegate, CloudTabsPopoverTableViewDelegate>
{
    NSTextField *_titleLabel;
    NSImageView *_iCloudImageView;
    NSTextField *_emptyTabsLabel;
    FadingScrollView *_scrollView;
    NSTableView *_tableView;
    NSPopover *_popover;
    BrowserWindowControllerMac *_controller;
    NSArray *_cloudTabDevices;
    double _deviceRowHeight;
    double _tabRowHeight;
    BOOL _isNavigatingToCloudTab;
    BOOL _shouldReloadCloudTabDevicesAndTable;
    struct OwnPtr<Safari::IconObserver> _iconObserver;
}

@property(retain, nonatomic) BrowserWindowControllerMac *controller; // @synthesize controller=_controller;
@property(nonatomic) NSPopover *popover; // @synthesize popover=_popover;
@property(copy, nonatomic) NSArray *cloudTabDevices; // @synthesize cloudTabDevices=_cloudTabDevices;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)cloudTabsPopoverTableView:(id)arg1 accessibilityPerformAction:(id)arg2 forCellView:(id)arg3;
- (id)cloudTabsPopoverTableView:(id)arg1 accessibilityGetDescriptionForCellView:(id)arg2;
- (BOOL)cloudTabsPopoverTableView:(id)arg1 handleKeyDown:(id)arg2;
- (void)cloudTabsPopoverTableView:(id)arg1 mouseDown:(id)arg2;
- (BOOL)goToCloudTabAtRow:(long long)arg1;
- (BOOL)_shouldDrawSeparatorForRow:(long long)arg1;
- (BOOL)_shouldDrawBackgroundForRow:(long long)arg1;
- (void)_goToCloudTabUsingWindowPolicyFromCurrentEvent:(id)arg1;
- (void)_didRemoveAllIcons;
- (void)_didChangeIconForPageURL:(id)arg1;
- (id)_imageForCloudTab:(id)arg1;
- (id)_cloudTabOrDeviceForIndex:(unsigned long long)arg1;
- (void)_syncedCloudTabDevicesDidChange:(id)arg1;
- (void)_reloadCloudTabDevicesAndTableSoon;
- (void)_reloadCloudTabDevicesAndTable;
- (void)_loadCloudTabDevices;
- (void)_updatePopoverViewsVisibility;
- (struct CGSize)_bestSizeForPopover;
- (double)_maxHeightForPopover;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithPopover:(id)arg1;

@end

