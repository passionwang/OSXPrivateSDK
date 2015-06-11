/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/GKBasicCollectionViewController.h>

@class GKPlayer;

@interface GKFriendRequestsViewController : GKBasicCollectionViewController
{
    GKPlayer *_selectedPlayer;
}

+ (id)friendRequestsViewController;
@property(retain, nonatomic) GKPlayer *selectedPlayer; // @synthesize selectedPlayer=_selectedPlayer;
- (void)dataSource:(id)arg1 performBatchUpdate:(id)arg2 complete:(void)arg3;
- (void)refreshPresenter;
- (void)didTouchIgnoreForPlayer:(id)arg1;
- (void)didTouchAcceptForPlayer:(id)arg1;
- (void)collectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)preservedIndexPathForSelectedItem;
- (void)selectPlayer:(id)arg1;
- (id)friendRequestsDataSource;
- (void)didEnterNoContentState;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 title:(id)arg2;

@end

