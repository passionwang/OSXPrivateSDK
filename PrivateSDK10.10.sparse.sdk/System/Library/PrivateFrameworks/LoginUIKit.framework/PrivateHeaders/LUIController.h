/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSView;

@interface LUIController : NSObject
{
    id _actionHandler;
    NSView *_contentView;
    int _style;
    NSDictionary *_attributes;
    NSDictionary *_pressedAttributes;
}

@property(readonly) int style; // @synthesize style=_style;
@property(readonly) NSView *contentView; // @synthesize contentView=_contentView;
- (id)imageForCurrentStyleFromImage:(id)arg1 pressed:(BOOL)arg2;
- (id)_pressedAttributedStringFromString:(id)arg1;
- (id)_attributedStringFromString:(id)arg1;
- (void)resumeController;
- (void)pauseController;
- (void)setUIEnabled:(BOOL)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (id)init;
- (void)tearDownController;
- (void)setActionHandler:(id)arg1;

@end

