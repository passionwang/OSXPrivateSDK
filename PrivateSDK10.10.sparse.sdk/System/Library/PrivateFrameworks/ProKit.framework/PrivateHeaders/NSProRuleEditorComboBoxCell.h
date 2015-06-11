/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProKit/NSProComboBoxCell.h>

@class NSBezierPath;

// Not exported
@interface NSProRuleEditorComboBoxCell : NSProComboBoxCell
{
    NSBezierPath *_outlinePath;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)_drawFocusRingWithFrame:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (BOOL)_isInset;
- (int)_basicButtonThemeElement;
- (void)_calculateOutlinePathWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;

@end

