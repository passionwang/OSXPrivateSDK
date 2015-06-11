/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface WebBookmarkGroup : NSObject
{
    struct BookmarkGroup *_group;
}

- (void)setShouldNotifyBookmarksControllerOfReloads:(BOOL)arg1;
- (id)_insertNewBookmarkAtIndex:(unsigned int)arg1 ofBookmark:(id)arg2 withTitle:(id)arg3 type:(int)arg4;
- (id)insertNewBookmarkListAtIndex:(unsigned int)arg1 ofBookmark:(id)arg2 withTitle:(id)arg3;
- (id)addNewBookmarkListToBookmark:(id)arg1 withTitle:(id)arg2;
- (id)topBookmark;
- (void)removeBookmark:(id)arg1;
- (id)bookmarkForUUID:(id)arg1;
- (id)bookmarksForURLString:(id)arg1;
- (struct BookmarkGroup *)bookmarkGroup;
- (id)initWithBookmarkGroup:(struct BookmarkGroup *)arg1;

@end

