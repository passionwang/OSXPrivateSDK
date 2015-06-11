/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TKTonePickerViewControllerDelegate-Protocol.h"

@class NSPopUpButton, NSString, TKTonePickerViewController;

@interface TKTonePickerPopUpButtonController : NSObject <TKTonePickerViewControllerDelegate>
{
    id <TKTonePickerPopUpButtonControllerDelegate> _delegate;
    TKTonePickerViewController *_tonePickerViewController;
}

@property(retain, nonatomic, setter=_setTonePickerViewController:) TKTonePickerViewController *_tonePickerViewController; // @synthesize _tonePickerViewController;
@property(nonatomic) id <TKTonePickerPopUpButtonControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
@property(readonly, nonatomic) NSPopUpButton *popUpButton;
@property(copy, nonatomic) NSString *selectedToneIdentifier;
@property(nonatomic, getter=isNoneAtTop) BOOL noneAtTop;
@property(nonatomic) BOOL showsNone;
@property(copy, nonatomic) NSString *defaultToneIdentifier;
@property(nonatomic) BOOL showsDefault;
@property(copy, nonatomic) NSString *accountIdentifier;
@property(readonly, nonatomic) int alertType;
- (void)dealloc;
- (id)initWithAlertType:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

