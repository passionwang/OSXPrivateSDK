//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

@class FI_TTableViewShrinkToFitController;

@interface NSTableView (FI_NSTableViewAdditions)
- (struct CGSize)itemClickOffset_FI:(id)arg1;
- (id)finderPreparedCell_FI:(id)arg1 atColumn:(long long)arg2 row:(long long)arg3;
- (struct CGRect)maxSTFEditorFrameForColumn_FI:(long long)arg1 row:(long long)arg2;
- (void)scrollSTFEditorIntoView_FI;
- (void)finishEditing_FI;
- (void)reloadEditRow:(id)arg1;
- (BOOL)setUpToEditRow_FI:(unsigned long long)arg1 column:(unsigned long long)arg2;
@property(readonly) FI_TTableViewShrinkToFitController *stfEditorController_FI; // @dynamic stfEditorController_FI;
@end

