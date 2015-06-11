/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTabViewItem.h"

@class BrowserWKView, ContinuousReadingListViewController, NSSet, NSString, ScrollableTabBarView, ScrollableTabButton, TabContentView;

// Not exported
@interface BrowserTabViewItem : NSTabViewItem
{
    NSString *_urlFromScript;
    BrowserWKView *_wkView;
    struct RefPtr<Safari::BrowserTab> m_browserTab;
    BOOL _firedOpenEvent;
    BOOL _firedCloseEvent;
    ContinuousReadingListViewController *_continuousReadingListViewController;
    ScrollableTabBarView *_scrollableTabBarView;
    ScrollableTabButton *_scrollableTabButton;
}

@property(nonatomic) __weak ScrollableTabButton *scrollableTabButton; // @synthesize scrollableTabButton=_scrollableTabButton;
@property(nonatomic) __weak ScrollableTabBarView *scrollableTabBarView; // @synthesize scrollableTabBarView=_scrollableTabBarView;
@property(readonly, retain, nonatomic) ContinuousReadingListViewController *continuousReadingListViewController; // @synthesize continuousReadingListViewController=_continuousReadingListViewController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cachedWKViewInContinuousMode;
- (void)exitContinuousMode;
- (BOOL)continuousPageViewIsHandlingPageTransition;
- (BOOL)isInContinuousMode;
- (id)currentContinuousReadingListPageItem;
- (void)loadContinuousReadingListPageItem:(id)arg1;
- (struct BrowserTab *)browserTab;
- (id)handleSearchTheWebCommand:(id)arg1;
- (id)handleEmailContentsCommand:(id)arg1;
- (id)handleDoJavaScriptCommand:(id)arg1;
- (id)text;
- (id)source;
- (void)setURLString:(id)arg1;
- (id)URLString;
- (void)rememberCurrentURLString;
- (BOOL)isVisible;
- (unsigned int)orderedIndex;
- (id)title;
- (void)handleCloseScriptCommand:(id)arg1;
- (id)objectSpecifier;
- (void)updateLabelSoon;
- (void)updateLabelNow;
- (id)wkView;
- (struct BrowserContentViewController *)browserContentViewController;
- (BOOL)canBeClosed;
- (void)setLabel:(id)arg1;
@property(retain) TabContentView *view; // @dynamic view;
- (void)dealloc;
- (id)initWithScrollableTabBarView:(id)arg1 browserTab:(struct BrowserTab *)arg2;
@property(readonly, copy, nonatomic) NSSet *allWKViews;

@end

