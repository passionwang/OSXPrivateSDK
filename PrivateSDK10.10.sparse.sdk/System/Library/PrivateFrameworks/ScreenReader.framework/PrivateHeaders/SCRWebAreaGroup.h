/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCRMapElement.h>

// Not exported
@interface SCRWebAreaGroup : SCRMapElement
{
    BOOL _disableContentSummary;
}

- (BOOL)isGestureContainerElement;
- (void)prepareBrailleItemDescriptionForRequest:(id)arg1 hasBrailleFocus:(BOOL)arg2;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)shouldMap;
- (BOOL)shouldMapElement:(id)arg1;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (id)visibleChildrenDescriptionIgnoringChild:(id)arg1;
- (void)addElementSummaryToRequest:(id)arg1;
- (id)statusDescriptionWithOptionsMask:(int)arg1;
- (BOOL)shouldPromoteUIElement:(id)arg1;
- (void)addItemNameToRequest:(id)arg1;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (BOOL)focusInto:(id)arg1;
- (struct CGRect)visibleBounds;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

