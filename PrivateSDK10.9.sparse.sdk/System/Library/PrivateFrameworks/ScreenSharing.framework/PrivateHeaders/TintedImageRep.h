//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageRep.h"

@class NSColor, NSImage;

__attribute__((visibility("hidden")))
@interface TintedImageRep : NSImageRep
{
    NSImage *_imageToTint;
    NSColor *_tintColor;
}

- (BOOL)hasAlpha;
- (void)dealloc;
- (BOOL)draw;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1 tintColor:(id)arg2;

@end

