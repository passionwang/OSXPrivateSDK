/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSArray, NSMenuItem;

@interface CWMenuItemView : NSView
{
    NSMenuItem *_menuItem;
    NSArray *_images;
    BOOL _isPopupMenuItem;
}

- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)__drawLTRRect:(struct CGRect)arg1;
- (void)__drawRTLRect:(struct CGRect)arg1;
- (unsigned long long)idealMenuItemWidth;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 menuItem:(id)arg2 images:(id)arg3 isPopupMenuItem:(BOOL)arg4;

@end

