/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarUI/EKUISingleViewGadget.h>

@class EKUIButton, NSArray, NSView;

@interface EKUIThreeButtonGadget : EKUISingleViewGadget
{
    EKUIButton *_firstButton;
    EKUIButton *_secondButton;
    EKUIButton *_thirdButton;
    NSView *_control;
    NSArray *_buttonConstraints;
}

@property(retain) NSArray *buttonConstraints; // @synthesize buttonConstraints=_buttonConstraints;
@property(retain) NSView *control; // @synthesize control=_control;
@property(retain) EKUIButton *thirdButton; // @synthesize thirdButton=_thirdButton;
@property(retain) EKUIButton *secondButton; // @synthesize secondButton=_secondButton;
@property(retain) EKUIButton *firstButton; // @synthesize firstButton=_firstButton;
- (void).cxx_destruct;
- (id)_buttonWithTitle:(id)arg1;
- (void)thirdButtonClicked:(id)arg1;
- (void)secondButtonClicked:(id)arg1;
- (void)firstButtonClicked:(id)arg1;
- (id)thirdButtonTitle;
- (id)secondButtonTitle;
- (id)firstButtonTitle;
- (void)updateButtons;
- (BOOL)needsExpansion;
- (void)updateConstraints;
- (void)updateWithChanges:(id)arg1;
- (id)initWithEventViewController:(id)arg1;

@end

