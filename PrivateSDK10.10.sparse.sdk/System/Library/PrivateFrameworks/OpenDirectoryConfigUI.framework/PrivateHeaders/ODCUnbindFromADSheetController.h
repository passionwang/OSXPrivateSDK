/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSAlert, NSButton, NSProgressIndicator, NSSecureTextField, NSTextField, NSView, NSWindow, ODCServersViewController, ODCUnbindFromADAction, SFAuthorizationView;

@interface ODCUnbindFromADSheetController : NSObject
{
    NSWindow *_docWindow;
    SFAuthorizationView *_authView;
    ODCServersViewController *_serversViewController;
    NSWindow *_sheet;
    NSAlert *_alert;
    ODCUnbindFromADAction *_action;
    NSButton *_removeButton;
    NSButton *_cancelButton;
    NSView *_accessoryView;
    NSTextField *_adminName;
    NSSecureTextField *_adminPass;
    NSProgressIndicator *_spinner;
    NSTextField *_progressLabel;
}

@property ODCUnbindFromADAction *action; // @synthesize action=_action;
- (void)buttonHit:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initModalForWindow:(id)arg1 authView:(id)arg2 serversViewController:(id)arg3;
- (void)showErrorAlertAndReleaseSelf:(id)arg1;
- (void)actionDidFinish:(id)arg1;
- (void)setControlsEnabled:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

