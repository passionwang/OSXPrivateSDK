/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_IPropertySizeController.h>

@class NSColor;

// Not exported
@interface FI_TPropertyInfoWindowSizeController : FI_IPropertySizeController
{
    NSColor *_textColor;
}

@property(retain) NSColor *textColor; // @synthesize textColor=_textColor;
- (void)updateWithNodes:(const struct TFENodeVector *)arg1;
- (void)setView:(id)arg1;
- (void)initCommon;

@end

