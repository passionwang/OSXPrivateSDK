//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSToolbarItem.h"

@class ProThemeImageSource;

@interface NSProToolbarItem : NSToolbarItem
{
    ProThemeImageSource *_imageSource;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
}

+ (id)standardItemWithItemIdentifier:(id)arg1;
+ (id)newStandardItemWithItemIdentifier:(id)arg1;
+ (id)_newPrintItem;
+ (id)_newCustomizeToolbarItem;
+ (id)_newShowFontsItem;
+ (id)_newShowColorsItem;
- (void)_resetItemImage;
- (id)_printItemFacet;
- (id)_customizeToolbarItemFacet;
- (id)_showFontsItemFacet;
- (id)_showColorsItemFacet;
- (id)imageSource;
- (void)setImageSource:(id)arg1;
- (void)dealloc;
- (BOOL)wantsToDrawLabelInDisplayMode:(unsigned long long)arg1;
- (void)setView:(id)arg1;
- (void)_forceSetView:(id)arg1;
- (struct CGSize)_buttonFrameSizeForSizeMode:(unsigned long long)arg1;
- (id)_allocDefaultView;
- (Class)_toolbarButtonClass;
- (id)initWithItemIdentifier:(id)arg1 imageSource:(id)arg2;

@end

