/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCRUIElement.h>

@class NSMutableDictionary;

// Not exported
@interface SCRFauxUIElement : SCRUIElement
{
    NSMutableDictionary *_fauxUIElementAttributes;
}

- (id)_valueForAttribute:(struct __CFString *)arg1;
- (id)_realUIElement;
- (BOOL)isArrayEmptyForAXAttribute:(struct __CFString *)arg1;
- (unsigned long long)arrayCountForAXAttribute:(struct __CFString *)arg1;
- (id)uiElementArrayForAXAttribute:(struct __CFString *)arg1;
- (id)urlForAXAttribute:(struct __CFString *)arg1;
- (struct _NSRange)rangeForAXAttribute:(struct __CFString *)arg1;
- (struct CGRect)rectForAXAttribute:(struct __CFString *)arg1;
- (struct CGSize)sizeForAXAttribute:(struct __CFString *)arg1;
- (struct CGPoint)pointForAXAttribute:(struct __CFString *)arg1;
- (id)numberForAXAttribute:(struct __CFString *)arg1;
- (long long)longForAXAttribute:(struct __CFString *)arg1;
- (float)floatForAXAttribute:(struct __CFString *)arg1;
- (BOOL)boolForAXAttribute:(struct __CFString *)arg1;
- (id)objectForAXAttribute:(struct __CFString *)arg1;
- (id)stringForAXAttribute:(struct __CFString *)arg1;
- (id)arrayForAXAttribute:(struct __CFString *)arg1;
- (id)uiElementArrayForAXAttribute:(struct __CFString *)arg1 atIndex:(unsigned long long)arg2 length:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (id)uiElementForAXAttribute:(struct __CFString *)arg1;
- (id)uiElementForAXAttribute:(struct __CFString *)arg1 options:(unsigned long long)arg2;
- (BOOL)supportsAXAttribute:(struct __CFString *)arg1;
- (void)fillStaticCache;
- (void)disableCache;
- (void)enableCache;
- (BOOL)isFauxUIElement;
- (id)objectForAXAttribute:(struct __CFString *)arg1 parameter:(void *)arg2 expectedType:(unsigned long long)arg3;
- (id)objectForAXAttribute:(struct __CFString *)arg1 parameter:(void *)arg2;
- (BOOL)canSetAXAttribute:(struct __CFString *)arg1;
- (BOOL)isValid;
- (void)setValue:(id)arg1 forAXAttribute:(struct __CFString *)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

