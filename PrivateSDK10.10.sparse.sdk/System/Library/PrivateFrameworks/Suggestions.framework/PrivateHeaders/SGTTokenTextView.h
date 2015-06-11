/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTokenTextView.h"

@class SGTSuggestion;

// Not exported
@interface SGTTokenTextView : NSTokenTextView
{
    SGTSuggestion *completionSuggestion;
    SGTSuggestion *currentSuggestion;
    BOOL programmaticTextChange;
}

+ (id)cleanStringValueFromAttributedString:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) BOOL programmaticTextChange; // @synthesize programmaticTextChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)keyDown:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (void)setSelectedRanges:(id)arg1 affinity:(unsigned long long)arg2 stillSelecting:(BOOL)arg3;
- (struct _NSRange)fixedSelectedRangeForRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeOfCleanString;
- (id)cleanStringValue;
- (void)setCurrentSuggestion:(id)arg1;
- (void)setCompletionSuggestion:(id)arg1;
- (void)didChangeText;
- (void)_updateCurrentSuggestion;
- (void)_updateCompletion;
- (void)_updateCompletionWithRangeOfCompletion:(struct _NSRange)arg1 selectedRange:(struct _NSRange)arg2 byTyping:(BOOL)arg3;
- (void)_discardUncleanPart;
- (struct _NSRange)_rangeOfUncleanPart;
- (id)_defaultMutableAttributedStringForString:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (BOOL)_usesTokens;
- (void)dealloc;
- (BOOL)usesFindPanel;
- (BOOL)usesRuler;
- (BOOL)usesFindBar;
- (BOOL)usesFontPanel;
- (id)init;

@end

