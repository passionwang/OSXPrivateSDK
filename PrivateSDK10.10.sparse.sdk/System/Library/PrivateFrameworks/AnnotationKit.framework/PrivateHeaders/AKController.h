/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AKActionController, AKAttributeController, AKCursorController_Mac, AKFontUIController_Mac, AKFormFeatureDetectorController, AKIntelligentSketchController, AKMainEventHandler, AKModelController, AKPageController, AKSignatureModelController, AKTextEditorController, AKToolController, AKToolbarViewController, AKUndoController, NSMapTable, NSMutableArray, NSView, NSWindow;

@interface AKController : NSObject
{
    BOOL overlayShouldPixelate;
    BOOL _isTestingInstance;
    id <AKControllerDelegateProtocol> _delegate;
    AKModelController *_modelController;
    NSView *_toolbarView;
    unsigned long long _currentPageIndex;
    NSMutableArray *_pageControllers;
    NSMapTable *_pageModelControllersToPageControllers;
    AKActionController *_actionController;
    AKToolController *_toolController;
    AKToolbarViewController *_toolbarViewController;
    AKAttributeController *_attributeController;
    AKUndoController *_undoController;
    AKMainEventHandler *_mainEventHandler;
    AKTextEditorController *_textEditorController;
    AKIntelligentSketchController *_intelligentSketchController;
    AKSignatureModelController *_signatureModelController;
    AKCursorController_Mac *_cursorController;
    AKFontUIController_Mac *_fontUIController;
    AKFormFeatureDetectorController *_formDetectionController;
    NSWindow *_cachedWindow;
    unsigned long long _pasteCascadingMultiplier;
    long long _lastPasteboardChangeCount;
    unsigned long long _creationCascadingMultiplier;
    AKPageController *_lastCreationCascadingPageController;
}

+ (id)akBundleIdentifier;
+ (id)akBundle;
+ (id)controllerWithDelegate:(id)arg1;
@property __weak AKPageController *lastCreationCascadingPageController; // @synthesize lastCreationCascadingPageController=_lastCreationCascadingPageController;
@property unsigned long long creationCascadingMultiplier; // @synthesize creationCascadingMultiplier=_creationCascadingMultiplier;
@property long long lastPasteboardChangeCount; // @synthesize lastPasteboardChangeCount=_lastPasteboardChangeCount;
@property unsigned long long pasteCascadingMultiplier; // @synthesize pasteCascadingMultiplier=_pasteCascadingMultiplier;
@property __weak NSWindow *cachedWindow; // @synthesize cachedWindow=_cachedWindow;
@property(retain) AKFormFeatureDetectorController *formDetectionController; // @synthesize formDetectionController=_formDetectionController;
@property(retain) AKFontUIController_Mac *fontUIController; // @synthesize fontUIController=_fontUIController;
@property(retain) AKCursorController_Mac *cursorController; // @synthesize cursorController=_cursorController;
@property(retain) AKSignatureModelController *signatureModelController; // @synthesize signatureModelController=_signatureModelController;
@property(retain) AKIntelligentSketchController *intelligentSketchController; // @synthesize intelligentSketchController=_intelligentSketchController;
@property(retain) AKTextEditorController *textEditorController; // @synthesize textEditorController=_textEditorController;
@property(retain) AKMainEventHandler *mainEventHandler; // @synthesize mainEventHandler=_mainEventHandler;
@property(retain) AKUndoController *undoController; // @synthesize undoController=_undoController;
@property(retain) AKAttributeController *attributeController; // @synthesize attributeController=_attributeController;
@property(retain) AKToolbarViewController *toolbarViewController; // @synthesize toolbarViewController=_toolbarViewController;
@property(retain) AKToolController *toolController; // @synthesize toolController=_toolController;
@property(retain) AKActionController *actionController; // @synthesize actionController=_actionController;
@property(retain) NSMapTable *pageModelControllersToPageControllers; // @synthesize pageModelControllersToPageControllers=_pageModelControllersToPageControllers;
@property(retain) NSMutableArray *pageControllers; // @synthesize pageControllers=_pageControllers;
@property BOOL isTestingInstance; // @synthesize isTestingInstance=_isTestingInstance;
@property unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain) NSView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain) AKModelController *modelController; // @synthesize modelController=_modelController;
@property __weak id <AKControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL overlayShouldPixelate; // @synthesize overlayShouldPixelate;
- (void).cxx_destruct;
- (id)hostingWindow;
- (id)pageControllerForAnnotation:(id)arg1;
- (id)pageControllerForPageModelController:(id)arg1;
- (id)currentPageController;
- (BOOL)_validateCutCopyDelete;
- (BOOL)validateSelectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (BOOL)validateDuplicate:(id)arg1;
- (void)duplicate:(id)arg1;
- (BOOL)validateDelete:(id)arg1;
- (void)delete:(id)arg1;
- (BOOL)validatePaste:(id)arg1;
- (void)paste:(id)arg1;
- (BOOL)validateCopy:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)validateCut:(id)arg1;
- (void)cut:(id)arg1;
- (BOOL)validateRedo:(id)arg1;
- (void)redo:(id)arg1;
- (BOOL)validateUndo:(id)arg1;
- (void)undo:(id)arg1;
- (id)signaturesMenu;
- (void)resetToDefaultToolMode;
- (id)toolbarButtonItemOfType:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (BOOL)handleEvent:(id)arg1;
- (struct CGRect)contentAlignedRectForRect:(struct CGRect)arg1 onPageAtIndex:(unsigned long long)arg2;
- (double)currentModelBaseScaleFactorForPageAtIndex:(unsigned long long)arg1;
- (long long)currentExifOrientationForPageAtIndex:(unsigned long long)arg1;
- (void)reloadVisibleToolbarItemIdentifiers;
- (void)commitEditing;
- (void)renderAnnotation:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)updateOverlayViewAtIndex:(unsigned long long)arg1;
- (void)relinquishOverlayAtIndex:(unsigned long long)arg1;
- (void)prepareOverlayAtIndex:(unsigned long long)arg1;
- (BOOL)isOverlayViewLoadedAtIndex:(unsigned long long)arg1;
- (id)overlayViewAtIndex:(unsigned long long)arg1;
- (void)performActionForSender:(id)arg1;
- (BOOL)validateSender:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)teardown;
- (id)initForTesting;
- (id)initWithDelegate:(id)arg1;

@end

