//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface SCRUIElement : NSObject
{
    struct __CFDictionary *_staticAttributes;
    struct __CFDictionary *_cachedAttributes;
    unsigned long long _cachedRefCount;
    struct __AXUIElement *_axElement;
    BOOL _isValid;
    NSMutableSet *_supportedAttributes;
}

+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 forApplication:(id)arg2;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;
+ (id)uiElementWithAXElement:(struct __AXUIElement *)arg1 options:(unsigned long long)arg2;
+ (id)uiElementWithAXElement:(struct __AXUIElement *)arg1;
+ (void)initialize;
- (id)fullDescription;
- (id)description;
- (struct __AXTextMarker *)textMarkerForPosition:(struct CGPoint)arg1;
- (id)uiElementForTextMarker:(struct __AXTextMarker *)arg1;
- (struct __AXTextMarkerRange *)textMarkerRangeForUIElement:(id)arg1;
- (struct __AXTextMarkerRange *)orderedRangeForMarkerArray:(id)arg1;
- (void)setAXAttribute:(struct __CFString *)arg1 withMarkerRange:(struct __AXTextMarkerRange *)arg2;
- (struct __AXTextMarkerRange *)textMarkerRangeForAXAttribute:(struct __CFString *)arg1;
- (struct __AXTextMarker *)textMarkerForParameterizedAXAttribute:(struct __CFString *)arg1 parameterValue:(void *)arg2;
- (struct __AXTextMarker *)textMarkerForAXAttribute:(struct __CFString *)arg1;
- (BOOL)isWebTextSelectable;
- (BOOL)isTextSelectable;
- (unsigned long long)permutatedHashCode;
- (id)elementIsDescendantOfRole:(struct __CFString *)arg1;
- (long long)compareGeometry:(id)arg1;
- (id)cellUIElementForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (struct _NSRange)styleRangeForIndex:(unsigned long long)arg1;
- (id)rtfForRange:(struct _NSRange)arg1;
- (struct CGRect)boundsForRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeForIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeForPosition:(struct CGPoint)arg1;
- (id)attributedStringForRange:(struct _NSRange)arg1;
- (id)stringForRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeForLine:(unsigned long long)arg1;
- (id)lineForInsertionPoint;
- (id)lineForIndex:(unsigned long long)arg1;
- (BOOL)supportsAction:(struct __CFString *)arg1;
- (id)actionNameAtIndex:(unsigned long long)arg1;
- (id)actionNames;
- (id)descriptionForAction:(id)arg1;
- (BOOL)performAction:(struct __CFString *)arg1;
- (void)setAXAttribute:(struct __CFString *)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(struct __CFString *)arg1 withArray:(id)arg2;
- (void)setAXAttribute:(struct __CFString *)arg1 withUIElementArray:(id)arg2;
- (void)setAXAttribute:(struct __CFString *)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(struct __CFString *)arg1 withRange:(struct _NSRange)arg2;
- (void)setAXAttribute:(struct __CFString *)arg1 withRect:(struct CGRect)arg2;
- (void)setAXAttribute:(struct __CFString *)arg1 withSize:(struct CGSize)arg2;
- (void)setAXAttribute:(struct __CFString *)arg1 withPoint:(struct CGPoint)arg2;
- (void)setAXAttribute:(struct __CFString *)arg1 withNumber:(id)arg2;
- (void)setAXAttribute:(struct __CFString *)arg1 withFloat:(double)arg2;
- (void)setAXAttribute:(struct __CFString *)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(struct __CFString *)arg1 withString:(id)arg2;
- (void)setAXAttribute:(struct __CFString *)arg1 withBOOL:(BOOL)arg2;
- (id)valueArrayForAXAttributes:(struct __CFArray *)arg1 axOptions:(unsigned int)arg2;
- (id)valueArrayForAXAttributes:(struct __CFArray *)arg1;
- (id)objectForAXAttribute:(struct __CFString *)arg1 parameter:(void *)arg2 expectedType:(unsigned long long)arg3;
- (id)objectForAXAttribute:(struct __CFString *)arg1 parameter:(void *)arg2;
- (id)objectForAXAttribute:(struct __CFString *)arg1 expectedType:(unsigned long long)arg2;
- (id)objectForAXAttribute:(struct __CFString *)arg1;
- (BOOL)isArrayEmptyForAXAttribute:(struct __CFString *)arg1;
- (unsigned long long)arrayCountForAXAttribute:(struct __CFString *)arg1;
- (unsigned long long)indexOfUIElement:(id)arg1 visibleOnly:(BOOL)arg2;
- (id)uiElementArrayForAXAttribute:(struct __CFString *)arg1 atIndex:(unsigned long long)arg2 length:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (id)uiElementArrayForAXAttribute:(struct __CFString *)arg1 atIndex:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (id)uiElementArrayForAXAttribute:(struct __CFString *)arg1 options:(unsigned long long)arg2;
- (id)uiElementArrayForAXAttribute:(struct __CFString *)arg1;
- (id)uiElementFromArrayForAXAttribute:(struct __CFString *)arg1 atIndex:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)uiElementFromArrayForAXAttribute:(struct __CFString *)arg1 atIndex:(unsigned long long)arg2;
- (id)uiElementForAXAttribute:(struct __CFString *)arg1 options:(unsigned long long)arg2;
- (id)uiElementForAXAttribute:(struct __CFString *)arg1;
- (id)urlForAXAttribute:(struct __CFString *)arg1;
- (struct _NSRange)rangeForPrivateAXAttribute:(struct __CFString *)arg1;
- (struct _NSRange)rangeForAXAttribute:(struct __CFString *)arg1;
- (struct CGRect)rectForAXAttribute:(struct __CFString *)arg1;
- (BOOL)getValueForAXAttribute:(struct __CFString *)arg1 valueType:(int)arg2 value:(void *)arg3;
- (struct CGSize)sizeForAXAttribute:(struct __CFString *)arg1;
- (struct CGPoint)pointForAXAttribute:(struct __CFString *)arg1;
- (id)numberForPrivateAXAttribute:(struct __CFString *)arg1;
- (id)numberForAXAttribute:(struct __CFString *)arg1;
- (unsigned long long)unsignedIntegerForAXAttribute:(struct __CFString *)arg1;
- (long long)longForAXAttribute:(struct __CFString *)arg1;
- (float)floatForAXAttribute:(struct __CFString *)arg1;
- (BOOL)boolForPrivateAXAttribute:(struct __CFString *)arg1;
- (BOOL)boolForAXAttribute:(struct __CFString *)arg1;
- (id)stringForAXAttribute:(struct __CFString *)arg1;
- (id)arrayForAXAttribute:(struct __CFString *)arg1;
- (id)parameterizedAttributeNames;
- (struct __CFArray *)_copyParameterizedAttributeNames;
- (id)attributeNames;
- (struct __CFArray *)_copyAttributeNames;
- (BOOL)hasAXSubrole:(struct __CFString *)arg1;
- (BOOL)hasAXRole:(struct __CFString *)arg1;
- (BOOL)supportsAXAttribute:(struct __CFString *)arg1;
- (void)removeSupportedAXAttribute:(struct __CFString *)arg1;
- (void)addIfSupportedAXAttribute:(struct __CFString *)arg1;
- (void)addSupportedAXAttribute:(struct __CFString *)arg1;
- (BOOL)canSetAXAttribute:(struct __CFString *)arg1;
- (void)resetIsValid;
- (BOOL)isValidIgnoringCommunicationErrors:(BOOL)arg1;
- (BOOL)isValid;
- (BOOL)isPromotable;
- (BOOL)shouldMap;
- (struct __CFDictionary *)_createCache;
- (void)disableCache;
- (void)enableCache;
- (BOOL)isCacheEnabled;
- (void *)modifyStaticCacheValue:(void *)arg1;
- (void)fillStaticCache;
- (void)_invalidate;
- (void)setAXElement:(struct __AXUIElement *)arg1;
- (struct __AXUIElement *)axElement;
- (struct __AXUIElement *)_axElementForIsEqual;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAXElement:(struct __AXUIElement *)arg1 options:(unsigned long long)arg2;
- (long long)_sortSpotlightUIByYPosition:(id)arg1;
- (BOOL)isMailMessageContentScrollArea;
- (BOOL)isMailMessageBodyGroup;
- (BOOL)isShortcutResultTable;
- (BOOL)isShortcutSearchField;
- (BOOL)isSafariStatusText;
- (BOOL)isFinderIconView;
- (BOOL)isVersionsUIControlsWindow;
- (BOOL)isTimeMachineControlsWindow;
- (BOOL)isLanguageTable;
- (BOOL)isAutocorrectionMultipleSuggestions;
- (BOOL)isAutocorrectionReversion;
- (BOOL)isAutocorrectionSuggestion;
- (BOOL)isAutocorrection;
- (id)_axIdentifier;
- (BOOL)isMockUIElement;

@end

