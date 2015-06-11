//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "CKAccountAuthenticationDelegate.h"

@class CKAccountAuthentication, CKStoreClient, ISAuthenticationContext, NSButton, NSImageView, NSNumber, NSProgressIndicator, NSString, NSTextField, NSURL;

@interface CKSignInPrompt : NSWindowController <CKAccountAuthenticationDelegate>
{
    NSTextField *titleField;
    NSTextField *messageField;
    NSImageView *imageView;
    NSButton *defaultButton;
    NSButton *otherButton;
    NSButton *alternateButton;
    NSButton *forgotButton;
    NSButton *helpButton;
    NSProgressIndicator *progressIndicator;
    NSTextField *usernameField;
    NSTextField *passwordField;
    NSTextField *errorField;
    struct CGRect windowFactoryFrame;
    struct CGRect titleFieldFactoryFrame;
    struct CGRect defaultButtonFactoryFrame;
    NSURL *authenticateAccountURL;
    NSString *mSuppressionCheckboxTitle;
    NSNumber *mSuppressionCheckboxState;
    BOOL mForceActivate;
    ISAuthenticationContext *context;
    CKAccountAuthentication *authentication;
    long long attempts;
    CKStoreClient *storeClient;
    long long mExitCode;
    BOOL mDemoMode;
    BOOL mDemoAutologinMode;
}

@property BOOL forceActivate; // @synthesize forceActivate=mForceActivate;
@property(retain, nonatomic) NSNumber *suppressionCheckboxState; // @synthesize suppressionCheckboxState=mSuppressionCheckboxState;
@property(retain, nonatomic) NSString *suppressionCheckboxTitle; // @synthesize suppressionCheckboxTitle=mSuppressionCheckboxTitle;
@property(readonly) CKAccountAuthentication *authentication; // @synthesize authentication;
@property(retain, nonatomic) CKStoreClient *storeClient; // @synthesize storeClient;
@property(retain, nonatomic) ISAuthenticationContext *context; // @synthesize context;
@property(retain, nonatomic) NSURL *authenticateAccountURL; // @synthesize authenticateAccountURL;
- (void).cxx_destruct;
- (void)forgotPassword:(id)arg1;
- (void)helpButtonAction:(id)arg1;
- (void)alternateButtonAction:(id)arg1;
- (void)otherButtonAction:(id)arg1;
- (void)defaultButtonAction:(id)arg1;
- (id)_customIconImage;
@property BOOL usernameFieldIsEnabled;
@property(readonly) NSString *password;
@property(retain, nonatomic) NSString *username;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setOtherButtonTitle:(id)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setMessageString:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)_didCompleteAuthenticate:(id)arg1;
- (void)didCompleteAuthenticate:(long long)arg1 error:(id)arg2;
- (void)signIn;
- (void)controlTextDidChange:(id)arg1;
- (long long)runModal;
- (void)_textField:(id)arg1 sizeToWidth:(double)arg2;
- (void)_dismissPanelWithCode:(long long)arg1;
- (void)_alertSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_hideProgressIndicator;
- (void)_showProgressIndicator:(id)arg1;
- (void)_alertSheetDidDismiss:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (void)_showError:(id)arg1;
- (void)_prepare;
- (void)_cleanupAuthentication;
- (void)_setButtonState:(id)arg1 withString:(id)arg2;

@end

