//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TRenameOperationDelegate.h>

__attribute__((visibility("hidden")))
@interface FI_TRenameUndoRedoOperationDelegate : FI_TRenameOperationDelegate
{
    struct TRenameUndoRedoOperationHelper *_actionHelper;
    BOOL _needToReselectNode;
    BOOL _isRenaming;
    BOOL _isUndo;
    struct TriStateBool _pendingIsUndo;
}

- (id).cxx_construct;
- (int)configureNewName:(struct TString *)arg1 forNode:(const struct TFENode *)arg2 isDisplayName:(BOOL)arg3 allowInteraction:(BOOL)arg4;
- (int)asyncNodeOperation:(id)arg1 subOperationCompleted:(unsigned int)arg2 targetNode:(const struct TFENode *)arg3;
- (int)asyncNodeOperation:(id)arg1 subOperationStarted:(unsigned int)arg2;
- (void)setNeedToReselectNode:(BOOL)arg1;
- (void)setIsUndo:(BOOL)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithRenameAction:(struct TRenameAction *)arg1;

@end

