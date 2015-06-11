/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreUI/FRToolbarButton.h>

@class NSArray, NSCache;

@interface FRToolbarBadgedButton : FRToolbarButton
{
    long long _badgeNumber;
    NSArray *_badgedGlyphs;
    NSArray *_badgedRects;
    NSCache *_normalImageCache;
    NSCache *_selectedImageCache;
    NSCache *_disabledImageCache;
}

+ (id)badgeAttributes;
@property(nonatomic) long long badgeNumber; // @synthesize badgeNumber=_badgeNumber;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_badgedGlyphForNumber:(long long)arg1;

@end

