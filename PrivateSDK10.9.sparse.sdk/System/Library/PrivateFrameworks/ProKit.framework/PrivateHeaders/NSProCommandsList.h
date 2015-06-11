//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSArrayController, NSMutableSet, NSOutlineView, NSProCommand, NSProCommandsUIController, NSTabView, NSTableView;

__attribute__((visibility("hidden")))
@interface NSProCommandsList : NSObject
{
    NSProCommandsUIController *_controller;
    NSOutlineView *_sourcesList;
    NSTableView *_commandsList;
    NSTabView *_detailTab;
    NSArrayController *_commandArrayController;
    NSArray *_selectedGroups;
    NSProCommand *_selectedCommand;
    NSMutableSet *_commandMappings;
}

- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)updateCommandDetail;
- (void)reloadCommandMappings;
- (id)commandMappings;
- (void)setSelectedCommand:(id)arg1;
- (id)selectedCommand;
- (void)setSelectedGroups:(id)arg1;
- (id)selectedGroups;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

@end

