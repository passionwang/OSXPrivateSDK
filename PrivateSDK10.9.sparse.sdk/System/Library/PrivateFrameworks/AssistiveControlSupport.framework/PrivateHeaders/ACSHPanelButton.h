//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHPanelElement.h>

@class NSArray, NSIndexPath, NSString;

@interface ACSHPanelButton : ACSHPanelElement
{
    double _fontSize;
    BOOL _isKeyboardKey;
    int _textDisplayLocation;
    int _textDisplaySize;
    int _textDisplayPosition;
    int _imageDisplayLocation;
    int _imageDisplayPosition;
    NSString *_displayText;
    NSArray *_actions;
    NSString *_localizedDisplayTextKey;
    NSString *_displayKeyTitleText;
    NSString *_displayShiftText;
    NSString *_displayOptionText;
    NSString *_displayCommandText;
    NSString *_displayControlText;
    NSString *_displayImageIdentifier;
    NSIndexPath *_indexPath;
    unsigned long long _modifierMask;
    struct CGPoint _positionIndex;
}

+ (id)buttonWithRect:(struct CGRect)arg1 text:(id)arg2 actions:(id)arg3;
+ (id)keysForValuesToObserveForView;
@property(nonatomic) struct CGPoint positionIndex; // @synthesize positionIndex=_positionIndex;
@property(nonatomic) int imageDisplayPosition; // @synthesize imageDisplayPosition=_imageDisplayPosition;
@property(nonatomic) int imageDisplayLocation; // @synthesize imageDisplayLocation=_imageDisplayLocation;
@property(nonatomic) int textDisplayPosition; // @synthesize textDisplayPosition=_textDisplayPosition;
@property(nonatomic) int textDisplaySize; // @synthesize textDisplaySize=_textDisplaySize;
@property(nonatomic) int textDisplayLocation; // @synthesize textDisplayLocation=_textDisplayLocation;
@property(nonatomic) unsigned long long modifierMask; // @synthesize modifierMask=_modifierMask;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSString *displayImageIdentifier; // @synthesize displayImageIdentifier=_displayImageIdentifier;
@property(retain, nonatomic) NSString *displayControlText; // @synthesize displayControlText=_displayControlText;
@property(retain, nonatomic) NSString *displayCommandText; // @synthesize displayCommandText=_displayCommandText;
@property(retain, nonatomic) NSString *displayOptionText; // @synthesize displayOptionText=_displayOptionText;
@property(retain, nonatomic) NSString *displayShiftText; // @synthesize displayShiftText=_displayShiftText;
@property(retain, nonatomic) NSString *displayKeyTitleText; // @synthesize displayKeyTitleText=_displayKeyTitleText;
@property(retain, nonatomic) NSString *localizedDisplayTextKey; // @synthesize localizedDisplayTextKey=_localizedDisplayTextKey;
@property(nonatomic) BOOL isKeyboardKey; // @synthesize isKeyboardKey=_isKeyboardKey;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void)dealloc;
@property(readonly, nonatomic) BOOL allowsDisplayTextChange; // @dynamic allowsDisplayTextChange;
@property(nonatomic) double fontSize;
- (id)spokenDescription;
- (id)descriptionForDepth:(unsigned long long)arg1;
- (void)updateResourceIdentifiers:(id)arg1;
- (void)updateKeyboardText;
- (id)_pressKeyCodeAction;
- (void)_updateIsKeyboardKeyStatus;
@property(readonly, nonatomic) BOOL canInvertImage;
- (id)dictionaryForSaving;
- (id)allRequiredResourceIDs;
- (void)_didUnregisterAssets:(id)arg1;
- (void)_initWithPlistDictionary:(id)arg1;
- (id)init;

@end

