/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSMenuDelegate-Protocol.h"

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSProCommandSet, NSString;

@interface NSProCommandsController : NSObject <NSMenuDelegate>
{
    NSMutableDictionary *_commands;
    NSMutableArray *_commandGroups;
    NSMutableArray *_invisibleGroups;
    NSMutableArray *_menuGroups;
    NSMutableDictionary *_commandSets;
    NSMutableDictionary *_actionTable;
    NSMapTable *_representedObjects;
    NSProCommandSet *_commandSet;
    void *_menuPopulateHandler;
    struct __PCCFlags {
        unsigned int changeSetsAlert:1;
        unsigned int areCommandsLoaded:1;
        unsigned int _proReserved:30;
    } _pccFlags;
    NSMutableDictionary *_pendingGroupCommands;
    void *_proReserved2;
}

+ (Class)commandClass;
+ (id)sharedController;
+ (BOOL)_canUseCommands;
- (void)orderFrontCommandCustomizationPanel:(id)arg1;
- (void)exportPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)exportCurrentCommandSet:(id)arg1;
- (void)importPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)importCommandSet:(id)arg1;
- (void)saveAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)_changeCommandSets:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)_updateMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_installCommandMenuItems;
- (void)_scanMenu:(id)arg1 intoGroup:(id)arg2;
- (void)_scanMenu:(id)arg1;
- (void)_scanMainMenus;
- (id)targetForCommand:(id)arg1;
- (BOOL)performCommand:(id)arg1 withTarget:(id)arg2;
- (BOOL)performCommand:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1 withTarget:(id)arg2;
- (BOOL)_handleKeyEquivalent:(id)arg1;
- (void)addCommandWithIdentifier:(id)arg1 toGroupWithIdentifier:(id)arg2;
- (void)registerGroupWithIdentifier:(id)arg1 andProperties:(id)arg2;
- (id)displayNameOfGroup:(id)arg1;
- (id)commandsWithGroupIdentifier:(id)arg1;
- (id)_groupWithIdentifier:(id)arg1;
- (id)groupIdentifiers;
- (id)_menuGroupIdentifiers;
- (id)_appGroupIdentifiers;
- (id)_menuGroups;
- (id)_appGroups;
- (void)_replaceCommand:(id)arg1 withCommand:(id)arg2;
- (id)keyEquivalentsForCommand:(id)arg1 textOnly:(BOOL)arg2;
- (id)commandWithAction:(SEL)arg1 tag:(long long)arg2;
- (id)commandWithCharacter:(unsigned short)arg1 modifierMask:(unsigned long long)arg2;
- (id)commandWithIdentifier:(id)arg1;
- (id)commandForEvent:(id)arg1;
- (id)_commandForMenuItem:(id)arg1;
- (id)_commandWithRepresentedObject:(id)arg1;
- (id)commands;
- (void)_cacheCommand:(id)arg1 forRepresentedObject:(id)arg2;
- (void)unregisterCommand:(id)arg1;
- (void)registerCommand:(id)arg1;
- (id)_uniqueCommandSetNameWithDesiredName:(id)arg1;
- (id)_commandSetWithName:(id)arg1;
- (void)_removeCommandSet:(id)arg1;
- (void)_addCommandSet:(id)arg1;
- (id)_userCommandSets;
- (id)_appCommandSets;
- (void)_setActiveCommandSet:(id)arg1;
- (id)_activeCommandSet;
- (BOOL)_importCommandSetAtPath:(id)arg1;
- (void)_assignPendingCommands;
- (void)_loadDefaultCommandSet;
- (id)_localizedCommandSetForName:(id)arg1;
- (id)_commandSetWithName:(id)arg1 localization:(id)arg2;
- (void)_loadCommandSetsAtPath:(id)arg1 withDomain:(id)arg2;
- (void)_loadUserCommandSets;
- (void)_loadCommandSets;
- (void)_loadGroups;
- (void)_loadCommands;
- (id)_commandSetExtension;
- (void)finalize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

