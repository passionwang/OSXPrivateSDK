/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSScrollView.h"

@class EKEventViewController, EKUIGadgetContainer;

@interface EKEventViewScrollView : NSScrollView
{
    BOOL _isEnabled;
    BOOL _shouldScrollToTop;
    EKUIGadgetContainer *_container;
    EKEventViewController *_eventViewController;
}

@property BOOL shouldScrollToTop; // @synthesize shouldScrollToTop=_shouldScrollToTop;
@property BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property __weak EKEventViewController *eventViewController; // @synthesize eventViewController=_eventViewController;
@property __weak EKUIGadgetContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)layout;
- (void)scrollToTop;
- (void)dealloc;
- (BOOL)accessibilityIsIgnored;
- (void)scrollWheel:(id)arg1;
- (void)scrollViewFrameDidChange:(id)arg1;
- (id)initWithDocumentView:(id)arg1;

@end

