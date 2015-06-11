/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "PMXPCSupportDelegate-Protocol.h"
#import "SUSoftwareUpdateControllerDelegate-Protocol.h"

@class NSArray, NSArrayController, NSDictionary, NSString, NSView, PKBrowser, PKDriver, PKNode, PMXPCSupport, PPInstallableOptionsView;

@interface PKQueueCreationController : NSWindowController <SUSoftwareUpdateControllerDelegate, PMXPCSupportDelegate>
{
    NSView *progressView;
    NSView *optionsView;
    NSView *browserView;
    PPInstallableOptionsView *installableOptionsView;
    NSArrayController *deviceList;
    PKBrowser *browser;
    PKNode *printer;
    PKDriver *driver;
    PMXPCSupport *xpc;
    NSString *name;
    NSString *location;
    NSDictionary *options;
    id <PKServerQueueCreationDelegate> delegate;
    NSString *ppdPath;
    struct ppd_file_s *ppd;
    NSString *ppdDeviceID;
    NSString *queueID;
    NSString *stateString;
    BOOL canCancel;
    BOOL canConfigure;
    BOOL isCancelled;
    BOOL canContinue;
    BOOL isIndeterminate;
    BOOL driversDownloaded;
    double progressPercentage;
    double progressMinimum;
    double progressMaximum;
    unsigned long long state;
    long long suState;
    NSArray *topLevelNibObjects;
}

@property(retain) NSArray *topLevelNibObjects; // @synthesize topLevelNibObjects;
@property long long suState; // @synthesize suState;
@property unsigned long long state; // @synthesize state;
@property double progressMaximum; // @synthesize progressMaximum;
@property double progressMinimum; // @synthesize progressMinimum;
@property double progressPercentage; // @synthesize progressPercentage;
@property BOOL isIndeterminate; // @synthesize isIndeterminate;
@property BOOL canContinue; // @synthesize canContinue;
@property BOOL driversDownloaded; // @synthesize driversDownloaded;
@property BOOL isCancelled; // @synthesize isCancelled;
@property BOOL canConfigure; // @synthesize canConfigure;
@property BOOL canCancel; // @synthesize canCancel;
@property(retain) NSString *stateString; // @synthesize stateString;
@property(retain) NSString *ppdDeviceID; // @synthesize ppdDeviceID;
@property(retain) NSString *queueID; // @synthesize queueID;
@property struct ppd_file_s *ppd; // @synthesize ppd;
@property(retain) NSString *ppdPath; // @synthesize ppdPath;
@property id <PKServerQueueCreationDelegate> delegate; // @synthesize delegate;
@property(retain) NSDictionary *options; // @synthesize options;
@property(retain) NSString *location; // @synthesize location;
@property(retain) NSString *name; // @synthesize name;
@property(retain) PMXPCSupport *xpc; // @synthesize xpc;
@property(retain) PKDriver *driver; // @synthesize driver;
@property(retain) PKNode *printer; // @synthesize printer;
@property(retain) PKBrowser *browser; // @synthesize browser;
- (void)stateUpdated:(id)arg1;
- (void)setStateIcon:(id)arg1;
- (id)stateIcon;
- (void)setIcon:(id)arg1;
@property(readonly) NSString *titleString; // @dynamic titleString;
- (id)icon;
- (void)filterChanged:(id)arg1;
- (void)configureDone:(id)arg1;
- (void)configureButtonClick:(id)arg1;
- (void)cancelButtonClick:(id)arg1;
- (void)printerSelected:(id)arg1;
- (void)groupingChanged:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)finalize;
- (id)initForNode:(id)arg1 use:(id)arg2 options:(id)arg3 delegate:(id)arg4;
- (const char *)ppdAutoSetupTool;
- (BOOL)ppdHasInstallableOptions;
- (BOOL)ppdIsPostscript;
- (const char *)ppdIconPath;
- (id)printerURIForAutoSetup;
- (int)addPPDBasedPrinter;
- (int)verifyFilter:(const char *)arg1 type:(int)arg2;
- (BOOL)ppdWarnings:(int *)arg1 errors:(int *)arg2 fatal:(char *)arg3;
- (void)updateDriver:(id)arg1;
- (void)notifyQueueCompleted:(long long)arg1;
- (void)buttonPressed:(id)arg1;
- (void)presentErrorWithMessageText:(id)arg1 buttons:(id)arg2 alertStyle:(unsigned long long)arg3 informativeTextWithFormat:(id)arg4;
- (void)switchPanelTo:(id)arg1;
- (void)handleEventForCommand:(int)arg1 status:(int)arg2 event:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

