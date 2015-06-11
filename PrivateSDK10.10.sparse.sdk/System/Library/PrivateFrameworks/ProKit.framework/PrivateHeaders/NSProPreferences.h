/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class NSBox, NSMutableArray, NSMutableDictionary, NSProBox, NSProPanel, NSProThemeFacet, NSString;

@interface NSProPreferences : NSObject <NSWindowDelegate, NSToolbarDelegate>
{
    NSProPanel *_preferencesPanel;
    NSProBox *_preferenceBox;
    NSMutableArray *_preferenceTitles;
    NSMutableArray *_preferenceModules;
    NSMutableDictionary *_masterPreferenceViews;
    NSMutableDictionary *_currentSessionPreferenceViews;
    NSBox *_originalContentView;
    BOOL _isModal;
    double _constrainedWidth;
    id _currentModule;
    union _themeatom_union _iconAtom;
    unsigned long long _iconTheme;
    NSProThemeFacet *_iconFacet;
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (void)setDefaultToolbarIconsFacet:(id)arg1;
+ (id)_defaultIconFacet;
+ (void)setDefaultToolbarIconsAtom:(union _themeatom_union)arg1 withTheme:(unsigned long long)arg2;
+ (Class)defaultPreferencesClass;
+ (void)setDefaultPreferencesClass:(Class)arg1;
+ (id)sharedPreferences;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)toolbarItemClicked:(id)arg1;
- (id)_itemIdentifierForModule:(id)arg1;
- (BOOL)usesButtons;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowDidResize:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)confirmCloseSheetIsDone:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)windowTitle;
- (void)_selectModuleOwner:(id)arg1;
- (void)apply:(id)arg1;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (long long)showModalPreferencesPanel;
- (long long)showModalPreferencesPanelForOwner:(id)arg1;
- (void)showPreferencesPanelForOwner:(id)arg1;
- (void)showPreferencesPanel;
- (struct CGSize)preferencesContentSize;
- (void)_setupUI;
- (void)_setupToolbar;
- (void)addPreferenceNamed:(id)arg1 owner:(id)arg2;
- (void)setToolbarIconsFacet:(id)arg1;
- (void)setToolbarIconsAtom:(union _themeatom_union)arg1 withTheme:(unsigned long long)arg2;
- (id)iconFacet;
- (unsigned long long)iconTheme;
- (union _themeatom_union)iconAtom;
- (void)dealloc;
- (id)init;
- (Class)_proToolbarClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

