/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeMediaBrowser/ILMediaBrowserTableThumbnailCell.h>

@interface ILMediaBrowserTableImageCell : ILMediaBrowserTableThumbnailCell
{
    double mFrameInset;
}

@property double frameInset; // @synthesize frameInset=mFrameInset;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSize;
- (struct CGRect)textFrameForCellFrame:(struct CGRect)arg1;
- (struct CGRect)imageFrameForCellFrame:(struct CGRect)arg1;

@end

