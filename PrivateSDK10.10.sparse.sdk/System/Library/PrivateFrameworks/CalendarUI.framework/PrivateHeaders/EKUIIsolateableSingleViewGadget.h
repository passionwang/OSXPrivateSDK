/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarUI/EKUISingleViewGadget.h>

@class NSArray;

@interface EKUIIsolateableSingleViewGadget : EKUISingleViewGadget
{
    BOOL _isDoneWithGrouping;
    EKUIIsolateableSingleViewGadget *_linkedGadget;
    NSArray *_groupedGadgets;
}

@property BOOL isDoneWithGrouping; // @synthesize isDoneWithGrouping=_isDoneWithGrouping;
@property(retain) NSArray *groupedGadgets; // @synthesize groupedGadgets=_groupedGadgets;
@property __weak EKUIIsolateableSingleViewGadget *linkedGadget; // @synthesize linkedGadget=_linkedGadget;
- (void).cxx_destruct;
- (BOOL)updateWithDiff:(id)arg1;
- (void)setEvent:(id)arg1;
- (BOOL)shouldDisplayForEvent:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)updateIsDoneGroupingForGroup;
- (BOOL)needsExpansion;
- (BOOL)isGroupedGadget;
- (BOOL)isIsolated;
- (BOOL)hasData;

@end

