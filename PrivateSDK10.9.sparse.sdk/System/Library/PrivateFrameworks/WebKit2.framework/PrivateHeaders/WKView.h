//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSTextInputClient.h"

@class NSColor, WKBrowsingContextController, WKViewData;

@interface WKView : NSView <NSTextInputClient>
{
    WKViewData *_data;
    unsigned int _unused;
}

+ (void)hideWordDefinitionWindow;
- (void)_setIsWindowOccluded:(BOOL)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (BOOL)_shouldUseTiledDrawingArea;
- (void)_setDrawingAreaSize:(struct CGSize)arg1;
- (float)_intrinsicDeviceScaleFactor;
- (long long)conversationIdentifier;
- (void)_postFakeMouseMovedEventForFlagsChangedEvent:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityFocusedUIElement;
- (void)enableAccessibilityIfNecessary;
- (void)_updateRemoteAccessibilityRegistration:(BOOL)arg1;
- (void)_accessibilityRegisterUIProcessTokens;
- (void)_activeSpaceDidChange:(id)arg1;
- (void)viewDidChangeBackingProperties;
- (void)viewDidUnhide;
- (void)viewDidHide;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (void)_windowDidChangeOcclusionState:(id)arg1;
- (void)_windowDidChangeBackingProperties:(id)arg1;
- (void)_windowDidOrderOnScreen:(id)arg1;
- (void)_windowDidOrderOffScreen:(id)arg1;
- (void)_windowDidResize:(id)arg1;
- (void)_windowDidMove:(id)arg1;
- (void)_windowDidDeminiaturize:(id)arg1;
- (void)_windowDidMiniaturize:(id)arg1;
- (void)_windowDidResignKey:(id)arg1;
- (void)_windowDidChangeScreen:(id)arg1;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)doWindowDidChangeScreen;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)removeWindowObservers;
- (void)addWindowObserversForWindow:(id)arg1;
- (void)_updateWindowVisibility;
- (BOOL)_windowResizeMouseLocationIsInVisibleScrollerThumb:(struct CGPoint)arg1;
- (id)_hitTest:(struct CGPoint *)arg1 dragTypes:(id)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (int)applicationFlags:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (id)attributedSubstringForProposedRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (struct _NSRange)markedRange;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (id)validAttributesForMarkedText;
- (void)unmarkText;
- (BOOL)hasMarkedText;
- (struct _NSRange)selectedRange;
- (id)inputContext;
- (void)_executeSavedKeypressCommands;
- (void)flagsChanged:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)_tryHandlePluginComplexTextInputKeyDown:(id)arg1;
- (BOOL)_handlePluginComplexTextInputKeyDown:(id)arg1;
- (void)_disableComplexTextInputIfNecessary;
- (void)keyUp:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)_handleStyleKeyEquivalent:(id)arg1;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)shortCircuitedEndGestureWithEvent:(id)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)otherMouseMoved:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)mouseDraggedInternal:(id)arg1;
- (void)mouseUpInternal:(id)arg1;
- (void)mouseDownInternal:(id)arg1;
- (void)mouseMovedInternal:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_setMouseDownEvent:(id)arg1;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (void)displayIfNeeded;
- (void)capitalizeWord:(id)arg1;
- (void)lowercaseWord:(id)arg1;
- (void)uppercaseWord:(id)arg1;
- (void)toggleAutomaticTextReplacement:(id)arg1;
- (void)setAutomaticTextReplacementEnabled:(BOOL)arg1;
- (BOOL)isAutomaticTextReplacementEnabled;
- (void)toggleAutomaticLinkDetection:(id)arg1;
- (void)setAutomaticLinkDetectionEnabled:(BOOL)arg1;
- (BOOL)isAutomaticLinkDetectionEnabled;
- (void)toggleAutomaticDashSubstitution:(id)arg1;
- (void)setAutomaticDashSubstitutionEnabled:(BOOL)arg1;
- (BOOL)isAutomaticDashSubstitutionEnabled;
- (void)toggleAutomaticQuoteSubstitution:(id)arg1;
- (void)setAutomaticQuoteSubstitutionEnabled:(BOOL)arg1;
- (BOOL)isAutomaticQuoteSubstitutionEnabled;
- (void)toggleSmartInsertDelete:(id)arg1;
- (void)orderFrontSubstitutionsPanel:(id)arg1;
- (void)toggleAutomaticSpellingCorrection:(id)arg1;
- (void)toggleGrammarChecking:(id)arg1;
- (void)setGrammarCheckingEnabled:(BOOL)arg1;
- (BOOL)isGrammarCheckingEnabled;
- (void)toggleContinuousSpellChecking:(id)arg1;
- (void)changeSpelling:(id)arg1;
- (void)checkSpelling:(id)arg1;
- (void)showGuessPanel:(id)arg1;
- (void)stopSpeaking:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (void)yankAndSelect:(id)arg1;
- (void)yank:(id)arg1;
- (void)unscript:(id)arg1;
- (void)underline:(id)arg1;
- (void)transpose:(id)arg1;
- (void)takeFindStringFromSelection:(id)arg1;
- (void)swapWithMark:(id)arg1;
- (void)superscript:(id)arg1;
- (void)subscript:(id)arg1;
- (void)setMark:(id)arg1;
- (void)selectWord:(id)arg1;
- (void)selectToMark:(id)arg1;
- (void)selectSentence:(id)arg1;
- (void)selectParagraph:(id)arg1;
- (void)selectLine:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)paste:(id)arg1;
- (void)pageUpAndModifySelection:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)pageDownAndModifySelection:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)outdent:(id)arg1;
- (void)moveWordRightAndModifySelection:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveWordLeftAndModifySelection:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordForwardAndModifySelection:(id)arg1;
- (void)moveWordForward:(id)arg1;
- (void)moveWordBackwardAndModifySelection:(id)arg1;
- (void)moveWordBackward:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveToRightEndOfLineAndModifySelection:(id)arg1;
- (void)moveToRightEndOfLine:(id)arg1;
- (void)moveToLeftEndOfLineAndModifySelection:(id)arg1;
- (void)moveToLeftEndOfLine:(id)arg1;
- (void)moveToEndOfSentenceAndModifySelection:(id)arg1;
- (void)moveToEndOfSentence:(id)arg1;
- (void)moveToEndOfParagraphAndModifySelection:(id)arg1;
- (void)moveToEndOfParagraph:(id)arg1;
- (void)moveToEndOfLineAndModifySelection:(id)arg1;
- (void)moveToEndOfLine:(id)arg1;
- (void)moveToEndOfDocumentAndModifySelection:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToBeginningOfSentenceAndModifySelection:(id)arg1;
- (void)moveToBeginningOfSentence:(id)arg1;
- (void)moveToBeginningOfParagraphAndModifySelection:(id)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveToBeginningOfLineAndModifySelection:(id)arg1;
- (void)moveToBeginningOfLine:(id)arg1;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveParagraphForwardAndModifySelection:(id)arg1;
- (void)moveParagraphBackwardAndModifySelection:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveForwardAndModifySelection:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveBackwardAndModifySelection:(id)arg1;
- (void)moveBackward:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertParagraphSeparator:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertLineBreak:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)indent:(id)arg1;
- (void)ignoreSpelling:(id)arg1;
- (void)deleteWordForward:(id)arg1;
- (void)deleteWordBackward:(id)arg1;
- (void)deleteToMark:(id)arg1;
- (void)deleteToEndOfParagraph:(id)arg1;
- (void)deleteToEndOfLine:(id)arg1;
- (void)deleteToBeginningOfParagraph:(id)arg1;
- (void)deleteToBeginningOfLine:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)delete:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)_setPluginComplexTextInputState:(int)arg1;
- (void)renewGState;
- (void)_updateWindowAndViewFrames;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_updateViewExposedRect;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isFlipped;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
@property BOOL drawsTransparentBackground;
@property BOOL drawsBackground;
@property(readonly) WKBrowsingContextController *browsingContextController;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 processGroup:(id)arg2 browsingContextGroup:(id)arg3 relatedToView:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 processGroup:(id)arg2 browsingContextGroup:(id)arg3;
- (BOOL)_isWindowOccluded;
- (BOOL)_suppressVisibilityUpdates;
- (void)_setSuppressVisibilityUpdates:(BOOL)arg1;
- (void)handleAcceptedAlternativeText:(id)arg1;
- (long long)spellCheckerDocumentTag;
- (void)_cacheWindowBottomCornerRect;
- (void)_setIntrinsicContentSize:(struct CGSize)arg1;
- (_Bool)_executeSavedCommandBySelector:(SEL)arg1;
- (void)closeFullScreenWindowController;
- (id)fullScreenWindowController;
- (BOOL)hasFullScreenWindowController;
- (void)_notifyInputContextAboutDiscardedComposition;
- (void)_resetSecureInputState;
- (void)_updateSecureInputState;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (void)pasteboardChangedOwner:(id)arg1;
- (void)_setPromisedData:(struct Image *)arg1 withFileName:(id)arg2 withExtension:(id)arg3 withTitle:(id)arg4 withURL:(id)arg5 withVisibleURL:(id)arg6 withArchive:(struct SharedBuffer *)arg7 forPasteboard:(id)arg8;
- (void)_setDragImage:(id)arg1 at:(struct CGPoint)arg2 linkDrag:(BOOL)arg3;
- (void)_countStringMatchesInCustomRepresentation:(id)arg1 withFindOptions:(int)arg2 maxMatchCount:(unsigned long long)arg3;
- (void)_findStringInCustomRepresentation:(id)arg1 withFindOptions:(int)arg2 maxMatchCount:(unsigned long long)arg3;
- (void)_setCustomRepresentationZoomFactor:(double)arg1;
- (double)_customRepresentationZoomFactor;
- (void)_didFinishLoadingDataForCustomRepresentationWithSuggestedFilename:(const struct String *)arg1 dataReference:(const struct DataReference *)arg2;
- (void)_setPageHasCustomRepresentation:(BOOL)arg1;
- (void)_setPluginComplexTextInputState:(int)arg1 pluginComplexTextInputIdentifier:(unsigned long long)arg2;
- (void)_pluginFocusOrWindowFocusChanged:(BOOL)arg1 pluginComplexTextInputIdentifier:(unsigned long long)arg2;
- (void)_setAccessibilityWebProcessToken:(id)arg1;
- (void)_setAcceleratedCompositingModeRootLayer:(id)arg1;
- (void)_setFindIndicator:(PassRefPtr_c0ab1a11)arg1 fadeOut:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_toolTipChangedFrom:(id)arg1 to:(id)arg2;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)_sendToolTipMouseEntered;
- (void)_sendToolTipMouseExited;
- (void)_removeTrackingRects:(long long *)arg1 count:(int)arg2;
- (void)removeTrackingRect:(long long)arg1;
- (void)_addTrackingRects:(struct CGRect *)arg1 owner:(id)arg2 userDataList:(void **)arg3 assumeInsideList:(char *)arg4 trackingNums:(long long *)arg5 count:(int)arg6;
- (long long)_addTrackingRect:(struct CGRect)arg1 owner:(id)arg2 userData:(void *)arg3 assumeInside:(BOOL)arg4 useTrackingNum:(int)arg5;
- (long long)addTrackingRect:(struct CGRect)arg1 owner:(id)arg2 userData:(void *)arg3 assumeInside:(BOOL)arg4;
- (struct CGRect)_convertToUserSpace:(struct CGRect)arg1;
- (struct CGRect)_convertToDeviceSpace:(struct CGRect)arg1;
- (BOOL)_interpretKeyEvent:(id)arg1 savingCommandsTo:(Vector_869e4bea *)arg2;
- (void)_doneWithKeyEvent:(id)arg1 eventWasHandled:(BOOL)arg2;
- (BOOL)_tryPostProcessPluginComplexTextInputKeyDown:(id)arg1;
- (void)_setUserInterfaceItemState:(id)arg1 enabled:(BOOL)arg2 state:(int)arg3;
- (void)_setCursor:(id)arg1;
- (void)_preferencesDidChange;
- (void)_didRelaunchProcess;
- (void)_pageClosed;
- (void)_processDidCrash;
- (struct ColorSpaceData)_colorSpace;
- (BOOL)_isFocused;
- (PassOwnPtr_4d2f5da3)_createDrawingAreaProxy;
- (id)createFullScreenWindow;
- (void)waitForAsyncDrawingAreaSizeUpdate;
- (void)forceAsyncDrawingAreaSizeUpdate:(struct CGSize)arg1;
@property int contentAnchor;
- (void)setWindowOcclusionDetectionEnabled:(BOOL)arg1;
- (BOOL)windowOcclusionDetectionEnabled;
- (BOOL)isDeferringViewInWindowChanges;
- (void)endDeferringViewInWindowChangesSync;
- (void)endDeferringViewInWindowChanges;
- (void)beginDeferringViewInWindowChanges;
- (id)fullScreenPlaceholderView;
@property(copy, nonatomic) NSColor *underlayColor;
@property BOOL shouldClipToVisibleRect;
@property BOOL shouldExpandToViewHeightForAutoLayout;
@property struct CGSize minimumSizeForAutoLayout;
@property double minimumWidthForAutoLayout;
@property double minimumLayoutWidth;
- (void)performDictionaryLookupAtCurrentMouseLocation;
- (BOOL)frameSizeUpdatesDisabled;
- (void)enableFrameSizeUpdates;
- (void)disableFrameSizeUpdates;
- (void)setFrame:(struct CGRect)arg1 andScrollBy:(struct CGSize)arg2;
- (id)printOperationWithPrintInfo:(id)arg1 forFrame:(struct OpaqueWKFrame *)arg2;
- (BOOL)canChangeFrameLayout:(struct OpaqueWKFrame *)arg1;
@property(readonly) struct OpaqueWKPage *pageRef;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1 contextRef:(struct OpaqueWKContext *)arg2 pageGroupRef:(struct OpaqueWKPageGroup *)arg3 relatedToPage:(struct OpaqueWKPage *)arg4;
- (id)initWithFrame:(struct CGRect)arg1 contextRef:(struct OpaqueWKContext *)arg2 pageGroupRef:(struct OpaqueWKPageGroup *)arg3;
- (void)_registerDraggedTypes;

@end

