/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCRWebArea.h>

@class SCRElement;

// Not exported
@interface SCRiChatWebArea : SCRWebArea
{
    SCRElement *_lastMessageElement;
}

- (struct __AXTextMarkerRange *)_dataDetectorAXRangeForUIElement:(id)arg1;
- (BOOL)chainEvent:(id)arg1 request:(id)arg2;
- (BOOL)openContextualMenu;
- (BOOL)outputVirtualNavigationWithEvent:(id)arg1 commandString:(id)arg2 request:(id)arg3 keyboardSynched:(BOOL)arg4 allowScrolling:(BOOL)arg5;
- (void)layoutCoalescor:(id)arg1;
- (void)registerForLayoutCompleteNotification;
- (void)setLastMessageElement:(id)arg1;
- (id)lastMessageElement;
- (BOOL)focusInto:(id)arg1;
- (void)setFocusedChild:(id)arg1;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (void)dealloc;

@end

