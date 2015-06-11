//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MMCSCProgressIndicatorProtocol.h"
#import "MMLinkTextFieldDelegate.h"

@class MMLinkTextField, NSButton, NSImageView, NSProgressIndicator, NSSecureTextField, NSString, NSTextField;

@interface MMCSCPassPhraseRecoveryViewController : NSViewController <MMLinkTextFieldDelegate, MMCSCProgressIndicatorProtocol>
{
    id <MMCSCPassPhraseRecoveryViewControllerDelegate> _delegate;
    NSImageView *_passPhraseImageView;
    NSTextField *_passPhraseTitle;
    MMLinkTextField *_passPhraseMessageTextField;
    MMLinkTextField *_passPhraseAlternateMessageTextField;
    NSSecureTextField *_passPhraseSecurityCodeTextField;
    NSTextField *_passPhraseRandomCodeTextField;
    NSButton *_passPhraseHelpButton;
    NSButton *_passPhraseConfirmButton;
    NSButton *_passPhraseCancelButton;
    NSProgressIndicator *_passPhraseProgressIndicator;
    BOOL _needsVerification;
    BOOL _showRandomView;
    NSString *_passPhrase;
}

@property(copy) NSString *passPhrase; // @synthesize passPhrase=_passPhrase;
@property BOOL needsVerification; // @synthesize needsVerification=_needsVerification;
@property NSProgressIndicator *passPhraseProgressIndicator; // @synthesize passPhraseProgressIndicator=_passPhraseProgressIndicator;
@property NSButton *passPhraseCancelButton; // @synthesize passPhraseCancelButton=_passPhraseCancelButton;
@property NSButton *passPhraseConfirmButton; // @synthesize passPhraseConfirmButton=_passPhraseConfirmButton;
@property NSButton *passPhraseHelpButton; // @synthesize passPhraseHelpButton=_passPhraseHelpButton;
@property NSTextField *passPhraseRandomCodeTextField; // @synthesize passPhraseRandomCodeTextField=_passPhraseRandomCodeTextField;
@property NSSecureTextField *passPhraseSecurityCodeTextField; // @synthesize passPhraseSecurityCodeTextField=_passPhraseSecurityCodeTextField;
@property MMLinkTextField *passPhraseAlternateMessageTextField; // @synthesize passPhraseAlternateMessageTextField=_passPhraseAlternateMessageTextField;
@property MMLinkTextField *passPhraseMessageTextField; // @synthesize passPhraseMessageTextField=_passPhraseMessageTextField;
@property NSTextField *passPhraseTitle; // @synthesize passPhraseTitle=_passPhraseTitle;
@property NSImageView *passPhraseImageView; // @synthesize passPhraseImageView=_passPhraseImageView;
@property BOOL showRandomView; // @synthesize showRandomView=_showRandomView;
@property id <MMCSCPassPhraseRecoveryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickedOnLink:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)forgotCodeAttributedString;
- (id)_securityCodeFromEntryField;
- (void)_clearSecureSecurityCode;
- (void)stopCSCProgressIndicator:(id)arg1;
- (void)startCSCProgressIndicator:(id)arg1;
- (void)_showNormalMessage;
- (void)_showErrorMessage:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)confirmButtonClicked:(id)arg1;
- (void)setupView:(long long)arg1;
- (void)dealloc;

@end

