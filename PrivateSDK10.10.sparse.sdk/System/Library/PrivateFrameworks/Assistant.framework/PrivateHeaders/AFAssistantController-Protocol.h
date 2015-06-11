/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol AFAssistantController <NSObject>
- (id)loadPaneNibFile:(id)arg1;
- (void)endProgressAnimation;
- (void)updateProgressStatus:(id)arg1;
- (void)startProgressAnimation:(id)arg1;
- (void)showHideGoBackButton:(BOOL)arg1;
- (void)showHideContinueButton:(BOOL)arg1;
- (void)setGoBackButtonTitle:(id)arg1;
- (void)setContinueButtonTitle:(id)arg1;
- (void)setGoBackButtonEnabled:(BOOL)arg1;
- (void)setContinueButtonEnabled:(BOOL)arg1;
- (void)gotoPane:(id)arg1;
- (void)gotoPreviousPane;
- (void)gotoNextPane;
@end

