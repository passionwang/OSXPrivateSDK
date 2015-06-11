/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "AKFontChooserUserInterfaceItem-Protocol.h"
#import "AKTextAttributesUserInterfaceItem-Protocol.h"

@class AKController, AKFontChooserUIItemDelegate, AKPopoverColorWell, AKTextAttributesUIItemDelegate, NSPopUpButton, NSSegmentedControl, NSStepper, NSString, NSTextField;

@interface AKTextAttributesViewController : NSViewController <AKFontChooserUserInterfaceItem, AKTextAttributesUserInterfaceItem>
{
    BOOL _buildingFontFamilyMenu;
    NSPopUpButton *_fontFamilyPopup;
    NSPopUpButton *_fontFacePopup;
    NSTextField *_fontSizeText;
    NSStepper *_fontSizeStepper;
    NSSegmentedControl *_textStyleSegmented;
    AKPopoverColorWell *_fontColorWell;
    NSSegmentedControl *_alignmentHorizontal;
    AKController *_controller;
    long long _lastActionID;
    id _lastActionValue;
    AKFontChooserUIItemDelegate *_fontUIItemDelegate;
    AKTextAttributesUIItemDelegate *_textAttributesUIItemDelegate;
}

+ (void)_setupTextStyleImages:(id)arg1;
+ (id)_buildFontFamilyMenuOperationQueue;
@property BOOL buildingFontFamilyMenu; // @synthesize buildingFontFamilyMenu=_buildingFontFamilyMenu;
@property(retain) AKTextAttributesUIItemDelegate *textAttributesUIItemDelegate; // @synthesize textAttributesUIItemDelegate=_textAttributesUIItemDelegate;
@property(retain) AKFontChooserUIItemDelegate *fontUIItemDelegate; // @synthesize fontUIItemDelegate=_fontUIItemDelegate;
@property(retain) id lastActionValue; // @synthesize lastActionValue=_lastActionValue;
@property long long lastActionID; // @synthesize lastActionID=_lastActionID;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSSegmentedControl *alignmentHorizontal; // @synthesize alignmentHorizontal=_alignmentHorizontal;
@property(retain, nonatomic) AKPopoverColorWell *fontColorWell; // @synthesize fontColorWell=_fontColorWell;
@property(retain, nonatomic) NSSegmentedControl *textStyleSegmented; // @synthesize textStyleSegmented=_textStyleSegmented;
@property(retain, nonatomic) NSStepper *fontSizeStepper; // @synthesize fontSizeStepper=_fontSizeStepper;
@property(retain, nonatomic) NSTextField *fontSizeText; // @synthesize fontSizeText=_fontSizeText;
@property(retain, nonatomic) NSPopUpButton *fontFacePopup; // @synthesize fontFacePopup=_fontFacePopup;
@property(retain, nonatomic) NSPopUpButton *fontFamilyPopup; // @synthesize fontFamilyPopup=_fontFamilyPopup;
- (void).cxx_destruct;
- (void)_sendTextAttributesAction;
- (void)_sendFontAction;
- (void)_updateFontFacePopupForFaceName:(id)arg1;
- (void)_updateFontFamilyPopupForFamilyName:(id)arg1;
- (void)_buildFontFaceMenuForFamily:(id)arg1;
- (void)_buildFontFamilyMenu;
- (BOOL)validateMenuItem:(id)arg1;
- (void)fontColorAction:(id)arg1;
- (void)alignmentHorizontalAction:(id)arg1;
- (void)fontSizeControlAction:(id)arg1;
- (void)textStyleSegmentedAction:(id)arg1;
- (void)fontFaceMenuAction:(id)arg1;
- (void)fontFamilyMenuAction:(id)arg1;
- (void)syncTextAttributesToUI:(id)arg1;
- (id)convertTextAttributes:(id)arg1;
- (void)syncFontsToUI:(id)arg1;
- (id)convertFont:(id)arg1;
- (BOOL)validateUserInterfaceItems;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

