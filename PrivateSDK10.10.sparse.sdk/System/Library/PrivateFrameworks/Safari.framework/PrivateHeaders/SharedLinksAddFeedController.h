/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

@class NSButton, NSPopUpButton;

// Not exported
@interface SharedLinksAddFeedController : NSWindowController
{
    NSPopUpButton *_feedMenu;
    NSButton *_addFeedButton;
}

- (void).cxx_destruct;
- (void)_addFeed:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_updateAddFeedButton:(id)arg1;
- (void)_iconsChanged:(id)arg1;
- (id)_feedMenuItemForActiveTab;
- (id)_feedMenuItemWithSource:(id)arg1;
- (id)_setUpMenuWithSuggestedFeeds:(id)arg1;
- (void)reloadData;
- (BOOL)validateMenuItem:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

