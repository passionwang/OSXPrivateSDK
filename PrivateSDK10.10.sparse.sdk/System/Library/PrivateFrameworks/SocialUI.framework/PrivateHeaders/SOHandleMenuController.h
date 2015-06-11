/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDSBatchIDQueryControllerDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class IDSBatchIDQueryController, NSMenu, NSMutableDictionary, NSString, SOChatDisplayController, SOChatViewController;

@interface SOHandleMenuController : NSObject <IDSBatchIDQueryControllerDelegate, NSMenuDelegate>
{
    IDSBatchIDQueryController *_batchIDQueryController;
    NSMutableDictionary *_iMessageIDSIDToMenuItemDictionary;
    NSMutableDictionary *_smsIDSIDToMenuItemDictionary;
    BOOL _showingMenu;
    BOOL _includeAVOptions;
    BOOL _includeHandleAlternatives;
    NSMenu *_menu;
    id _handleBlock;
    SOChatViewController *_chatViewController;
}

+ (id)_handleMenuItemLabelParagraphStyle;
@property BOOL includeHandleAlternatives; // @synthesize includeHandleAlternatives=_includeHandleAlternatives;
@property BOOL includeAVOptions; // @synthesize includeAVOptions=_includeAVOptions;
@property BOOL showingMenu; // @synthesize showingMenu=_showingMenu;
@property __weak SOChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
@property(copy) id handleBlock; // @synthesize handleBlock=_handleBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (id)_alternativeHandlesIncludingABCombinations:(BOOL)arg1;
- (id)_actionItemForHandle:(id)arg1 errorCode:(unsigned long long)arg2;
- (void)_cleanupMenuManagement;
- (void)updateMenu;
- (void)_resolveErrorForHandle:(id)arg1;
- (void)performRelayPhoneCall:(id)arg1;
- (void)askToShareRecipientScreen:(id)arg1;
- (void)inviteToShareMyScreen:(id)arg1;
- (void)performFaceTimeVideoCall:(id)arg1;
- (void)performFaceTimeAudioCall:(id)arg1;
- (void)ignore:(id)arg1;
- (void)composeEmail:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (void)switchToHandle:(id)arg1;
@property(readonly) SOChatDisplayController *chatDisplayController; // @dynamic chatDisplayController;
@property(retain) NSMenu *menu; // @synthesize menu=_menu;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

