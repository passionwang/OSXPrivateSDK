/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSControl.h"

@class NSImage, NSImageView, NSLayoutConstraint, NSMutableDictionary, NSMutableString, NSTimer;

@interface LUIStripView : NSControl
{
    id _delegate;
    id _dataSource;
    id _target;
    SEL _action;
    SEL _scrollAction;
    BOOL _needsReload;
    BOOL _loading;
    long long _numItems;
    long long _selectedItem;
    struct CGSize _itemSize;
    double _spaceBetweenItems;
    NSMutableDictionary *_nibForIdentifier;
    NSMutableDictionary *_reusableItems;
    NSMutableDictionary *_itemDict;
    NSImageView *_highlightImageView;
    NSImage *_selectionImage;
    NSImage *_extendedSelectionImage;
    BOOL _focusing;
    BOOL _focused;
    BOOL _highlighted;
    double _previousConstant;
    NSLayoutConstraint *_firstConstraint;
    NSLayoutConstraint *_highlightConstraintX;
    NSLayoutConstraint *_highlightConstraintY;
    NSMutableString *_searchString;
    NSTimer *_searchStringTimeoutTimer;
    NSTimer *_scrollTimer;
    BOOL _touched;
}

+ (BOOL)accessibilityIsSingleCelled;
@property double spaceBetweenItems; // @synthesize spaceBetweenItems=_spaceBetweenItems;
@property struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property SEL scrollAction; // @synthesize scrollAction=_scrollAction;
@property SEL action; // @synthesize action=_action;
@property id target; // @synthesize target=_target;
@property id <LUIStripViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property id <LUIStripViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityChildren;
- (BOOL)accessibilityIsIgnored;
- (void)viewWillDraw;
- (void)loadItemsForView;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (struct CGRect)adjustScroll:(struct CGRect)arg1;
- (void)_scrollUpdate:(id)arg1;
- (void)reloadData;
- (void)selectItemAtIndex:(long long)arg1 highlight:(BOOL)arg2;
- (void)selectItemAtIndex:(long long)arg1;
- (long long)selectedItem;
- (id)itemAtIndex:(long long)arg1;
- (BOOL)isFocusedOnItem;
- (BOOL)isFocusing;
- (void)focusOnItem:(long long)arg1;
- (void)endFocusOnItem;
- (BOOL)moreItemsToRight;
- (BOOL)moreItemsToLeft;
- (void)setNibName:(id)arg1 forIdentifier:(id)arg2;
- (id)makeItemWithIdentifier:(id)arg1 owner:(id)arg2;
- (id)_unarchiveViewWithIdentifier:(id)arg1 owner:(id)arg2;
- (struct CGRect)visibleRect;
- (void)_updateStripView;
- (void)_updateHighlight;
- (void)_updateFocusedItemOrigin;
- (void)_searchStringTimeout:(id)arg1;
- (id)_reusableItems;
- (void)_keyboardNavigateToIndex:(long long)arg1;
- (void)_clearItems;
- (void)_calculateNumVisibleItems:(long long *)arg1 andSetsOfViewsToAdd:(id *)arg2 andRemove:(id *)arg3;
- (void)_addReusableItem:(id)arg1;

@end

