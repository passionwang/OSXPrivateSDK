//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/FlippedView.h>

@class NSImage, NSMutableArray, NSView;

__attribute__((visibility("hidden")))
@interface SegmentedTabBar : FlippedView
{
    id _delegate;
    NSMutableArray *_tabs;
    unsigned long long _selectedIndex;
    NSImage *_separatorImage;
    unsigned long long _focusedIndex;
    NSView *_externalNextKeyView;
    BOOL _updatesInProgress;
}

@property(nonatomic) unsigned long long focusedIndex; // @synthesize focusedIndex=_focusedIndex;
@property(retain, nonatomic) NSView *externalNextKeyView; // @synthesize externalNextKeyView=_externalNextKeyView;
@property(retain, nonatomic) NSImage *separatorImage; // @synthesize separatorImage=_separatorImage;
@property(nonatomic) id <SegmentedTabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateKeyViewLoop;
- (void)_drawSeparatorImage:(id)arg1 inRect:(struct CGRect)arg2;
- (void)_layOutTabs;
- (void)_updateSelectedTabIfNecessary;
- (void)tabClicked:(id)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (void)setSize:(struct CGSize)arg1 ofTabWithIdentifier:(id)arg2;
- (void)setSize:(struct CGSize)arg1 ofTabAtIndex:(unsigned long long)arg2;
- (struct CGRect)frameOfTabWithIdentifier:(id)arg1;
- (struct CGRect)frameOfTabAtIndex:(unsigned long long)arg1;
- (BOOL)containsTabWithIdentifier:(id)arg1;
- (void)removeTabWithIdentifier:(id)arg1;
- (void)removeTabAtIndex:(unsigned long long)arg1;
- (void)insertTab:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addTab:(id)arg1;
@property(retain, nonatomic) id selectedTabIdentifier;
@property(nonatomic) unsigned long long selectedTabIndex;
@property(readonly, nonatomic) unsigned long long tabCount;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)setNextKeyView:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

