/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/SiteMetadataRequest.h>

@class WebBookmark;

// Not exported
@interface TouchIconRequest : SiteMetadataRequest
{
}

+ (id)requestWithBookmark:(id)arg1 minimumIconSize:(struct CGSize)arg2 maximumIconSize:(struct CGSize)arg3;
+ (id)requestWithURL:(id)arg1 minimumIconSize:(struct CGSize)arg2 maximumIconSize:(struct CGSize)arg3;
- (id)_initWithBookmark:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize)arg3 maximumIconSize:(struct CGSize)arg4;
@property(readonly, nonatomic) struct CGSize maximumIconSize;
@property(readonly, nonatomic) struct CGSize minimumIconSize;
@property(readonly, nonatomic) WebBookmark *bookmark;
- (id)initWithBookmark:(id)arg1 minimumIconSize:(struct CGSize)arg2 maximumIconSize:(struct CGSize)arg3;
- (id)initWithURL:(id)arg1 minimumIconSize:(struct CGSize)arg2 maximumIconSize:(struct CGSize)arg3;
- (id)folderUUID;

@end

