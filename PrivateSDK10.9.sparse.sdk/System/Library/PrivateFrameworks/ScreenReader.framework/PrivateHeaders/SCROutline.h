//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRTable.h>

__attribute__((visibility("hidden")))
@interface SCROutline : SCRTable
{
}

- (void)_disclosureLevelDidChange:(id)arg1;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (void)addDescendantsToArray:(id)arg1 additionalToRetain:(id)arg2 additionalToSkip:(id)arg3;
- (id)focusOntoUIElement:(id)arg1 withScrolling:(BOOL)arg2 withSelection:(BOOL)arg3;
- (id)setFocusedCell:(struct SCRDataCell)arg1 scrolling:(BOOL)arg2 selection:(BOOL)arg3 request:(id)arg4 event:(id)arg5;
- (BOOL)addRowSummaryWithRowIndex:(unsigned long long)arg1 fromColumnIndex:(unsigned long long)arg2 includeHeader:(BOOL)arg3 includeBlanks:(BOOL)arg4 toRequest:(id)arg5;
- (void)addActionDescription:(id)arg1 toRequest:(id)arg2;
- (void)addDescriptionForSelectedRowElement:(id)arg1 atCell:(struct SCRDataCell)arg2 toRequest:(id)arg3;
- (void)addItemDescriptionToRequest:(id)arg1;
- (id)_currentRowStatusDescription;
- (id)_statusForRowAtIndex:(unsigned long long)arg1;
- (id)statusDescription;
- (id)typeDescription;
- (BOOL)handleUntaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToParentRowWithRequest:(id)arg1;
- (BOOL)toggleDisclosureTriangleWithRequest:(id)arg1;
- (unsigned long long)disclosureLevel;
- (unsigned long long)numberOfDisclosedRows;
- (void)setDisclosing:(BOOL)arg1;
- (BOOL)isDisclosing;
- (BOOL)hasDisclosureTriangle;
- (void)_navigationLevelsPrevious:(long long *)arg1 current:(long long *)arg2;
- (void)_setNavigationLevelsPrevious:(long long)arg1 current:(long long)arg2;
- (id)currentPreviousLevelKey;

@end

