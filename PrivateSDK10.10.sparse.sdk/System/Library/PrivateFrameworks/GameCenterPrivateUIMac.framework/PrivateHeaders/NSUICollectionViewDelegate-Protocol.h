/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol NSUICollectionViewDelegate <NSObject>

@optional
- (void)collectionView:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateSections:(id)arg2;
- (void)collectionView:(id)arg1 didPrepareForOverdraw:(struct CGRect)arg2;
- (void)collectionView:(id)arg1 itemWasRightClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (void)collectionView:(id)arg1 itemWasDoubleClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 indexPathsForSelectedItemsDidAdd:(id)arg2 remove:(id)arg3 animated:(BOOL)arg4;
- (void)collectionView:(id)arg1 indexPathsForSelectedItemsWillAdd:(id)arg2 remove:(id)arg3 animated:(BOOL)arg4;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionViewDidEndDecelerating:(id)arg1;
- (void)collectionViewWillBeginDecelerating:(id)arg1 targetContentOffset:(struct CGPoint)arg2;
- (void)collectionViewDidEndScrolling:(id)arg1;
- (void)collectionViewDidScroll:(id)arg1;
- (void)collectionViewWillBeginScrolling:(id)arg1;
@end

