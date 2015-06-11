//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTextFieldDelegate.h"

@class CWInterface, NSButton, NSPopUpButton, NSProgressIndicator, NSSecureTextField, NSTextField, NSView, SFAuthorization;

@interface CWHostAPDialog_SL : NSWindowController <NSTextFieldDelegate>
{
    CWInterface *interface_;
    SFAuthorization *_authorization;
    id delegate_;
    BOOL _showingOpen;
    BOOL _showingPassword;
    BOOL _showingManual;
    BOOL _showLegacySecurityTypes;
    NSTextField *windowTitleLabel;
    NSTextField *windowDescriptionLabel;
    NSButton *okButton;
    NSButton *cancelButton;
    NSView *securityTypeView;
    NSPopUpButton *securityTypePopupButton;
    NSView *channelSelectorView;
    NSPopUpButton *channelSelectorPopupButton;
    NSView *networkNameView;
    NSTextField *networkNameField;
    NSView *passwordView;
    NSSecureTextField *passwordField;
    NSSecureTextField *confirmPasswordField;
    NSTextField *securityText;
    NSTextField *statusMessageLabel;
    NSButton *warningButton;
    NSProgressIndicator *progressIndicator;
    NSButton *helpButton;
}

+ (id)hostAPDialogWithInterface:(id)arg1;
+ (id)hostAPDialogWithInterface:(id)arg1 authorization:(id)arg2;
@property id delegate; // @synthesize delegate=delegate_;
@property(retain) CWInterface *interface; // @synthesize interface=interface_;
- (BOOL)validateEntries;
- (void)resetSecurityEntries;
- (id)errorStringForErrorCode:(long long)arg1;
- (void)setSecurityTypeViewForTag:(long long)arg1;
- (void)populateHostAPChannels;
- (void)populateSecurityTypes;
- (id)localizedStringForKey:(id)arg1;
- (void)populateWiFiOptions;
- (void)controlTextDidChange:(id)arg1;
- (void)onSecurityTypePopupButton:(id)arg1;
- (void)onCancelButton:(id)arg1;
- (void)onOKButton:(id)arg1;
- (void)onHelpButton:(id)arg1;
- (void)onChannelPopupButton:(id)arg1;
- (void)securityPopUpWillPopUp:(id)arg1;
- (void)windowDidLoad;
- (void)close;
- (void)awakeFromNib;
- (void)removePasswordView:(struct CGRect *)arg1;
- (void)insertPasswordView;
- (void)expandFrameForPasswordView:(struct CGRect *)arg1;
- (void)insertManualConnectView;
- (void)removeManualConnectView:(struct CGRect *)arg1;
- (void)expandFrameForManualConnectView:(struct CGRect *)arg1;
- (id)initWithInterface:(id)arg1;
- (id)initWithInterface:(id)arg1 authorization:(id)arg2;
- (void)dealloc;

@end

