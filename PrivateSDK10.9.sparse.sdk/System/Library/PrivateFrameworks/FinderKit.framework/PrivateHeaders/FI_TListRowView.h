//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class FI_TListViewController;

__attribute__((visibility("hidden")))
@interface FI_TListRowView : NSTableRowView
{
    struct TFENode _node;
    FI_TListViewController *_listViewController;
    struct TNSRef<FI_TListRowSelectionView *> _selectionView;
    _Bool _isDropTarget;
}

@property(nonatomic) _Bool isDropTarget; // @synthesize isDropTarget=_isDropTarget;
@property(nonatomic) FI_TListViewController *listViewController; // @synthesize listViewController=_listViewController;
@property(nonatomic) struct TFENode node; // @synthesize node=_node;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)openNode;
- (void)setSelected:(BOOL)arg1;
- (void)updateCellSelectedStateAppearance;
- (void)layout;
- (void)setNeedsLayout:(BOOL)arg1;
- (struct CGRect)selectionFrame;
- (void)updateLayer;
- (_Bool)isRowAfterSelected;
- (_Bool)isRowBeforeSelected;
- (long long)selectionHighlightStyle;
- (void)forceDisclosureTriangleBackgroundStyle;
- (id)disclosureTriangleButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

