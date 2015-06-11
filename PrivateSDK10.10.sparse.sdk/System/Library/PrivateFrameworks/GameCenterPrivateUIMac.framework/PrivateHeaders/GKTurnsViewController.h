/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/GKCollectionViewController.h>

@class GKGameTurnInfo, GKTurnBasedMatchesViewController, GKTurnsDataSource, NSIndexPath;

@interface GKTurnsViewController : GKCollectionViewController
{
    GKTurnsDataSource *_turnsDataSource;
    NSIndexPath *_selectedIndexPath;
    GKGameTurnInfo *_selectedTurnInfo;
    GKTurnBasedMatchesViewController *_detailController;
}

@property(retain) GKTurnBasedMatchesViewController *detailController; // @synthesize detailController=_detailController;
@property(retain) GKGameTurnInfo *selectedTurnInfo; // @synthesize selectedTurnInfo=_selectedTurnInfo;
@property(retain) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain) GKTurnsDataSource *turnsDataSource; // @synthesize turnsDataSource=_turnsDataSource;
- (void)restoreSelectedTurnInfo;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didEnterNoContentState;
- (void)didExitRefreshingState;
- (void)didExitLoadingState;
- (void)didEnterLoadingState;
- (void)configureDataSource;
- (void)dealloc;
- (id)init;

@end

