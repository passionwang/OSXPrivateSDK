/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSImageView.h"

@class NSImage;

@interface GKFixedSizeImageView : NSImageView
{
    NSImage *_actualImage;
}

@property(retain, nonatomic) NSImage *actualImage; // @synthesize actualImage=_actualImage;
- (void)invalidateIntrinsicContentSize;
- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;

@end

