/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SystemMigration/SMViewController.h>

#import "SMSystemScannerClient-Protocol.h"
#import "SMSystemScannerClientChangesProtocol-Protocol.h"

@class IASPickerViewController, NSArrayController, NSImageView, NSLayoutConstraint, NSObject<SMSelectSourceDelegate>, NSProgressIndicator, NSScrollView, NSString, NSTextField, NSView, SMAuthenticatedMountWindowController, SMSystemScanner_Client, SMSystem_Client;

@interface SMSelectSourceViewController : SMViewController <SMSystemScannerClientChangesProtocol, SMSystemScannerClient>
{
    BOOL _settingUpCustomize;
    unsigned long long _migrateMode;
    NSView *_selectSystemViewContainer;
    NSObject<SMSelectSourceDelegate> *_delegate;
    IASPickerViewController *_systemPickerViewController;
    SMSystem_Client *_selectShareSystem;
    SMSystem_Client *_selectBackupsSystem;
    SMSystem_Client *_selectVolumeSystem;
    NSArrayController *_selectSharesArrayController;
    NSArrayController *_selectBackupsArrayController;
    NSArrayController *_selectVolumesArrayController;
    NSScrollView *_selectSharesScrollView;
    NSScrollView *_selectBackupsScrollView;
    NSScrollView *_selectVolumesScrollView;
    NSProgressIndicator *_noSourcesProgressIndicator;
    NSTextField *_noSourcesTextField;
    NSView *_accessoryMountingContainerView;
    SMSystem_Client *_highlightedSystem;
    SMAuthenticatedMountWindowController *_authMountWindowController;
    NSImageView *_highlightingView;
    NSLayoutConstraint *_highlightingViewYPosConstraint;
    NSLayoutConstraint *_highlightingViewXPosConstraint;
    NSLayoutConstraint *_highlightingViewHeightConstraint;
    NSLayoutConstraint *_highlightingViewWidthConstraint;
    SMSystemScanner_Client *_scannerClient;
    SMViewController *_connectOtherServerSheet;
    NSString *_connectOtherServerStatus;
    NSString *_connectOtherServer;
    unsigned long long _requestedClientScannerState;
    SMSystem_Client *_finalSelectedSystem;
}

+ (id)keyPathsForValuesAffectingDetailViewTabIndex;
+ (id)keyPathsForValuesAffectingSelectActionAvailable;
+ (id)keyPathsForValuesAffectingOtherActionAvailable;
+ (id)keyPathsForValuesAffectingHeadingText;
+ (id)keyPathsForValuesAffectingStatusText;
+ (id)keyPathsForValuesAffectingShouldShowStatus;
@property __weak SMSystem_Client *finalSelectedSystem; // @synthesize finalSelectedSystem=_finalSelectedSystem;
@property(getter=isSettingUpCustomize) BOOL settingUpCustomize; // @synthesize settingUpCustomize=_settingUpCustomize;
@property unsigned long long requestedClientScannerState; // @synthesize requestedClientScannerState=_requestedClientScannerState;
@property(retain) NSString *connectOtherServer; // @synthesize connectOtherServer=_connectOtherServer;
@property(retain) NSString *connectOtherServerStatus; // @synthesize connectOtherServerStatus=_connectOtherServerStatus;
@property(retain) SMViewController *connectOtherServerSheet; // @synthesize connectOtherServerSheet=_connectOtherServerSheet;
@property(retain) SMSystemScanner_Client *scannerClient; // @synthesize scannerClient=_scannerClient;
@property(retain) NSLayoutConstraint *highlightingViewWidthConstraint; // @synthesize highlightingViewWidthConstraint=_highlightingViewWidthConstraint;
@property(retain) NSLayoutConstraint *highlightingViewHeightConstraint; // @synthesize highlightingViewHeightConstraint=_highlightingViewHeightConstraint;
@property(retain) NSLayoutConstraint *highlightingViewXPosConstraint; // @synthesize highlightingViewXPosConstraint=_highlightingViewXPosConstraint;
@property(retain) NSLayoutConstraint *highlightingViewYPosConstraint; // @synthesize highlightingViewYPosConstraint=_highlightingViewYPosConstraint;
@property(retain) NSImageView *highlightingView; // @synthesize highlightingView=_highlightingView;
@property(retain) SMAuthenticatedMountWindowController *authMountWindowController; // @synthesize authMountWindowController=_authMountWindowController;
@property __weak SMSystem_Client *highlightedSystem; // @synthesize highlightedSystem=_highlightedSystem;
@property NSView *accessoryMountingContainerView; // @synthesize accessoryMountingContainerView=_accessoryMountingContainerView;
@property NSTextField *noSourcesTextField; // @synthesize noSourcesTextField=_noSourcesTextField;
@property NSProgressIndicator *noSourcesProgressIndicator; // @synthesize noSourcesProgressIndicator=_noSourcesProgressIndicator;
@property NSScrollView *selectVolumesScrollView; // @synthesize selectVolumesScrollView=_selectVolumesScrollView;
@property NSScrollView *selectBackupsScrollView; // @synthesize selectBackupsScrollView=_selectBackupsScrollView;
@property NSScrollView *selectSharesScrollView; // @synthesize selectSharesScrollView=_selectSharesScrollView;
@property NSArrayController *selectVolumesArrayController; // @synthesize selectVolumesArrayController=_selectVolumesArrayController;
@property NSArrayController *selectBackupsArrayController; // @synthesize selectBackupsArrayController=_selectBackupsArrayController;
@property NSArrayController *selectSharesArrayController; // @synthesize selectSharesArrayController=_selectSharesArrayController;
@property __weak SMSystem_Client *selectVolumeSystem; // @synthesize selectVolumeSystem=_selectVolumeSystem;
@property __weak SMSystem_Client *selectBackupsSystem; // @synthesize selectBackupsSystem=_selectBackupsSystem;
@property __weak SMSystem_Client *selectShareSystem; // @synthesize selectShareSystem=_selectShareSystem;
@property(retain) IASPickerViewController *systemPickerViewController; // @synthesize systemPickerViewController=_systemPickerViewController;
@property NSObject<SMSelectSourceDelegate> *delegate; // @synthesize delegate=_delegate;
@property NSView *selectSystemViewContainer; // @synthesize selectSystemViewContainer=_selectSystemViewContainer;
@property unsigned long long migrateMode; // @synthesize migrateMode=_migrateMode;
- (void).cxx_destruct;
- (void)daemonConnectionLost;
- (void)clickConnectOtherCancel;
- (void)clickConnectOtherOK;
- (void)displayConnectOtherShowMessage:(id)arg1;
- (void)connectOtherSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)pressedConnectOther:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)systemScannerSystemChanged:(id)arg1 onSystem:(id)arg2;
- (void)systemScannerRemovedSystem:(id)arg1;
- (void)systemScannerAddedSystem:(id)arg1;
- (void)unhighlightSystem;
- (void)highlightSystem;
- (void)presentBadSystemAlertAndClear:(BOOL)arg1;
@property(readonly) unsigned long long detailViewTabIndex;
@property(readonly) BOOL selectActionAvailable;
@property(readonly) BOOL otherActionAvailable;
@property(readonly) NSString *headingText;
@property(readonly) BOOL atLeastOneSource;
- (BOOL)pressedBackButton:(id)arg1;
- (BOOL)pressedSelectButton:(id)arg1;
- (void)signalSelection:(id)arg1;
@property(readonly) NSString *statusText;
@property(readonly) BOOL shouldShowStatus;
- (void)resetForNewSelection:(BOOL)arg1;
- (id)selectedShareSystem;
- (id)selectedVolumeSystem;
- (id)selectedBackupSystem;
- (id)selectedSystem;
- (id)selectedSystemFromArrayController:(id)arg1;
- (void)systemScannerRequestsHighlightOfSystem:(id)arg1;
- (void)setupHighlightingView;
- (void)awakeFromNib;
- (void)installSelectViewInSuperview:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

