/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class ABBookSearchField, CNContactListView, CNContactPickerBorderView, CNContactPickerViewLayout, CNGroupListBackgroundView, CNGroupListView, NSArray, NSMutableDictionary, NSScrollView, NSStackView;

@interface CNContactPickerView : NSView
{
    BOOL _groupListVisible;
    BOOL _searchFieldVisible;
    CNContactListView *_contactListView;
    CNGroupListView *_groupListView;
    ABBookSearchField *_searchField;
    NSScrollView *_contactListScrollView;
    NSView *_groupListScrollView;
    CNGroupListBackgroundView *_groupListBackgroundView;
    CNContactPickerBorderView *_horizontalBorderView;
    CNContactPickerBorderView *_verticalBorderView;
    NSStackView *_stackView;
    NSView *_searchFieldRowView;
    NSView *_mainRowView;
    CNContactPickerViewLayout *_pickerLayout;
    NSMutableDictionary *_sections;
    NSView *_contentView;
    NSView *_rightTopBarView;
    NSArray *_customConstraints;
}

@property(retain) NSArray *customConstraints; // @synthesize customConstraints=_customConstraints;
@property(retain, nonatomic) NSView *rightTopBarView; // @synthesize rightTopBarView=_rightTopBarView;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain) NSMutableDictionary *sections; // @synthesize sections=_sections;
@property(retain) CNContactPickerViewLayout *pickerLayout; // @synthesize pickerLayout=_pickerLayout;
@property(retain) NSView *mainRowView; // @synthesize mainRowView=_mainRowView;
@property(retain) NSView *searchFieldRowView; // @synthesize searchFieldRowView=_searchFieldRowView;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) CNContactPickerBorderView *verticalBorderView; // @synthesize verticalBorderView=_verticalBorderView;
@property(retain) CNContactPickerBorderView *horizontalBorderView; // @synthesize horizontalBorderView=_horizontalBorderView;
@property(retain) CNGroupListBackgroundView *groupListBackgroundView; // @synthesize groupListBackgroundView=_groupListBackgroundView;
@property(retain) NSView *groupListScrollView; // @synthesize groupListScrollView=_groupListScrollView;
@property(retain) NSScrollView *contactListScrollView; // @synthesize contactListScrollView=_contactListScrollView;
@property(nonatomic) BOOL searchFieldVisible; // @synthesize searchFieldVisible=_searchFieldVisible;
@property(nonatomic) BOOL groupListVisible; // @synthesize groupListVisible=_groupListVisible;
@property(retain) ABBookSearchField *searchField; // @synthesize searchField=_searchField;
@property __weak CNGroupListView *groupListView; // @synthesize groupListView=_groupListView;
@property __weak CNContactListView *contactListView; // @synthesize contactListView=_contactListView;
- (void).cxx_destruct;
- (void)showSectionWithIdentifier:(id)arg1;
- (id)sectionWithIdentifier:(id)arg1;
- (void)addSection:(id)arg1;
- (void)updateLayout;
- (void)setupResponderChain;
- (id)views;
- (void)updateConstraints;
- (void)awakeFromNib;
- (BOOL)canSmoothFontsInLayer;

@end

