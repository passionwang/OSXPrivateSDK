/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DDActionsManagerDelegateProtocol-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"

@class LUResultsPopover, LUSearchTermIndicator, NSAttributedString, NSString;

@interface LUPresenter : NSObject <NSPopoverDelegate, DDActionsManagerDelegateProtocol>
{
    LUSearchTermIndicator *_searchTermIndicator;
    LUResultsPopover *_resultsPopover;
    NSAttributedString *_displayedTerm;
    struct CGPoint _displayedTermOrigin;
    id _globalEventMonitor;
    id _localEventMonitor;
    BOOL _observingCarbonEvents;
    BOOL _trackingMenu;
}

+ (id)addressInString:(id)arg1 range:(struct _NSRange)arg2;
+ (id)windowAtScreenLocation:(struct CGPoint)arg1;
+ (id)sharedPresenter;
+ (void)initialize;
@property(getter=isTrackingMenu) BOOL trackingMenu; // @synthesize trackingMenu=_trackingMenu;
@property(getter=isObservingCarbonEvents) BOOL observingCarbonEvents; // @synthesize observingCarbonEvents=_observingCarbonEvents;
@property(retain) id localEventMonitor; // @synthesize localEventMonitor=_localEventMonitor;
@property(retain) id globalEventMonitor; // @synthesize globalEventMonitor=_globalEventMonitor;
@property struct CGPoint displayedTermOrigin; // @synthesize displayedTermOrigin=_displayedTermOrigin;
@property(retain) NSAttributedString *displayedTerm; // @synthesize displayedTerm=_displayedTerm;
@property(retain) LUResultsPopover *resultsPopover; // @synthesize resultsPopover=_resultsPopover;
@property(retain) LUSearchTermIndicator *searchTermIndicator; // @synthesize searchTermIndicator=_searchTermIndicator;
- (void)dataDetectorsUIActionWillStart;
- (void)dataDetectorsUIActionDidEnd;
- (void)popoverWillClose:(id)arg1;
- (void)stopMonitoringCarbonEvents;
- (void)startMonitoringCarbonEvents;
- (void)stopMonitoringScrollEvents;
- (void)startMonitoringScrollEvents;
- (id)resultsViewController;
- (void)hideDefinition;
- (void)showDefinitionForTerm:(id)arg1 atLocation:(struct CGPoint)arg2 options:(id)arg3;
- (void)commonLUPresenterTeardown;
- (void)finalize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

