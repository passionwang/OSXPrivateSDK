/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/GKFriendsSplittingDataSource.h>

@class GKChallenge;

@interface GKChallengesPickerDataSource : GKFriendsSplittingDataSource
{
    GKChallenge *_challenge;
}

@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
- (BOOL)canSelectPlayerInfo:(id)arg1;
- (void)configureDataSource;
- (void)dealloc;
- (id)initWithChallenge:(id)arg1;

@end

