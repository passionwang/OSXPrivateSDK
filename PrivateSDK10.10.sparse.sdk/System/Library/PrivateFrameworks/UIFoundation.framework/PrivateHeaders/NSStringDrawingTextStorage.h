/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIFoundation/NSTextStorage.h>

#import "NSLayoutManagerDelegate-Protocol.h"

@class CUICatalog, CUIStyleEffectConfiguration, NSConcreteNotifyingMutableAttributedString, NSGraphicsContext, NSLayoutManager, NSString, NSTextContainer;

@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate>
{
    NSConcreteNotifyingMutableAttributedString *_contents;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    double _baselineDelta;
    struct {
        unsigned int _typesetterBehavior:4;
        unsigned int _needToFlushCache:1;
        unsigned int _baselineMode:1;
        unsigned int _forceWordWrapping:1;
        unsigned int _usesSimpleTextEffects:1;
        unsigned int _reserved:24;
    } _sdflags;
    CUICatalog *_catalog;
    CUIStyleEffectConfiguration *_styleEffects;
    double _defaultTighteningFactor;
    NSGraphicsContext *_graphicsContext;
}

+ (BOOL)_hasCustomSettings;
+ (void)_setHasCustomSettings:(BOOL)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)stringDrawingTextStorage;
+ (void)initialize;
@property(retain) NSGraphicsContext *graphicsContext; // @synthesize graphicsContext=_graphicsContext;
@property(retain) CUIStyleEffectConfiguration *cuiStyleEffects; // @synthesize cuiStyleEffects=_styleEffects;
@property(retain) CUICatalog *cuiCatalog; // @synthesize cuiCatalog=_catalog;
@property double defaultTighteningFactor; // @synthesize defaultTighteningFactor=_defaultTighteningFactor;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (unsigned long long)length;
- (void)processEditing;
- (id)init;
- (BOOL)_shouldSetOriginalFontAttribute;
- (BOOL)_isStringDrawingTextStorage;
- (void)fontSetChanged;
- (id)textContainerForAttributedString:(id)arg1 containerSize:(struct CGSize)arg2 lineFragmentPadding:(double)arg3;
- (id)textContainerForAttributedString:(id)arg1;
- (struct CGPoint)defaultTextContainerOriginForRect:(struct CGRect)arg1;
- (void)drawTextContainer:(id)arg1 withRect:(struct CGRect)arg2 graphicsContext:(struct CGContext *)arg3 baselineMode:(BOOL)arg4 scrollable:(BOOL)arg5 padding:(double)arg6;
- (void)_setForceWordWrapping:(BOOL)arg1;
- (BOOL)_forceWordWrapping;
@property(getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) BOOL usesSimpleTextEffects;
- (BOOL)_baselineMode;
- (void)_setBaselineMode:(BOOL)arg1;
- (double)_baselineDelta;
- (void)_setBaselineDelta:(double)arg1;
- (struct CGRect)usedRectForTextContainer:(id)arg1;
- (long long)typesetterBehavior;
- (id)textContainer;
- (id)layoutManager;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

