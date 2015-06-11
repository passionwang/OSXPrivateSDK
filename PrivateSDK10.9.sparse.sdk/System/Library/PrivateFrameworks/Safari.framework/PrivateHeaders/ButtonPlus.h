//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSImage;

__attribute__((visibility("hidden")))
@interface ButtonPlus : NSButton
{
    unsigned int _lastMouseDownModifierFlags;
    NSImage *_imageForNonMainWindow;
    BOOL _ignoresFirstMouse;
    BOOL _superviewIsFocusRingClipAncestor;
}

- (id)_focusRingClipAncestor;
- (void)setSuperviewIsFocusRingClipAncestor:(BOOL)arg1;
- (void)enclosingBarDidExpand;
- (void)enclosingBarWillExpand;
- (void)setImageForNonMainWindow:(id)arg1;
- (void)setAcceptsFirstMouse:(BOOL)arg1;
- (unsigned int)lastMouseDownModifierFlags;
- (id)imageForNonMainWindow;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)dealloc;

@end

