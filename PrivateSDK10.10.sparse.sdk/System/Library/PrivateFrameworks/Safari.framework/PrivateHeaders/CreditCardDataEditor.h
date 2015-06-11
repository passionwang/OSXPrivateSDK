/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/SheetWithTableController.h>

#import "CreditCardDataEditorCellViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "PanelPlusDelegate-Protocol.h"

@class NSArray, NSButton, NSLayoutConstraint, NSString, SFAuthorization;

// Not exported
@interface CreditCardDataEditor : SheetWithTableController <PanelPlusDelegate, CreditCardDataEditorCellViewDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    BOOL _shouldPreventResigningFirstResponder;
    unsigned long long _ignoringCreditCardDataChangeNotifications;
    NSArray *_creditCardData;
    SFAuthorization *_showCardNumbersAuthorization;
    NSButton *_addCreditCardButton;
    NSLayoutConstraint *_addRemoveButtonEqualWidthsConstraint;
}

+ (id)_creditCardIconForNumberAllowingPartialMatch:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *addRemoveButtonEqualWidthsConstraint; // @synthesize addRemoveButtonEqualWidthsConstraint=_addRemoveButtonEqualWidthsConstraint;
@property(nonatomic) __weak NSButton *addCreditCardButton; // @synthesize addCreditCardButton=_addCreditCardButton;
@property(retain, nonatomic) SFAuthorization *showCardNumbersAuthorization; // @synthesize showCardNumbersAuthorization=_showCardNumbersAuthorization;
@property(copy, nonatomic) NSArray *creditCardData; // @synthesize creditCardData=_creditCardData;
- (void).cxx_destruct;
- (void)creditCardDataEditorCellView:(id)arg1 willAbortEditingForTextFieldWithIdentifier:(id)arg2;
- (void)creditCardDataEditorCellView:(id)arg1 didSetObjectValue:(id)arg2 forTextFieldWithIdentifier:(id)arg3;
- (void)creditCardDataEditorCellView:(id)arg1 textDidChangeInFieldEditor:(id)arg2 forTextFieldWithIdentifier:(id)arg3;
- (BOOL)creditCardDataEditorCellView:(id)arg1 shouldEndEditingTextInFieldEditor:(id)arg2 forTextFieldWithIdentifier:(id)arg3;
- (BOOL)panelPlus:(id)arg1 shouldMakeFirstResponder:(id)arg2;
- (BOOL)_isCreditCardNumberTextField:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_updateCreditCard:(id)arg1 withCreditCardData:(id)arg2;
- (BOOL)_shouldSetNumberOfCreditCardData:(id)arg1 toCreditCardNumber:(id)arg2;
- (id)_indexesOfCreditCardsWithNumber:(id)arg1 excludingCard:(id)arg2;
- (id)_expirationDateForDate:(id)arg1;
- (void)_preventResigningFirstResponderWhilePerformingBlock:(id)arg1;
- (void)_performBlockIgnoringCreditCardDataChangeNotifications:(id)arg1;
- (void)addCreditCard:(id)arg1;
- (void)_addCreditCard:(id)arg1;
- (BOOL)_canShowCardNumbers;
- (BOOL)_showCardNumbersRightExists;
- (void)removeSelectedItems:(id)arg1;
- (void)_removeCreditCardsAtIndexes:(id)arg1;
- (void)hideSheet:(id)arg1;
- (void)showSheetInWindow:(id)arg1;
- (void)dealloc;
- (void)unregisterForNotifications;
- (void)registerForNotifications;
- (void)creditCardDataChanged;
- (void)resetCreditCardData;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

