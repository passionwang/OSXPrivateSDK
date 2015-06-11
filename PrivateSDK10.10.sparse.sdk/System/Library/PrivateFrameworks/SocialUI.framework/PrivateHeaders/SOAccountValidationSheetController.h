/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAccount, NSMenu, NSPopUpButton, NSWindow;

@interface SOAccountValidationSheetController : NSObject
{
    NSWindow *_window;
    NSMenu *_regionsMenu;
    NSPopUpButton *_locationsPopup;
    IMAccount *_account;
    id _completionBlock;
}

@property(copy, nonatomic) id completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak IMAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSPopUpButton *locationsPopup; // @synthesize locationsPopup=_locationsPopup;
@property(retain, nonatomic) NSMenu *regionsMenu; // @synthesize regionsMenu=_regionsMenu;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)_regionListFinishedLoading:(id)arg1;
- (void)ensureValidFaceTimeAccountProfileWithCompletionBlock:(id)arg1;
- (void)ensureValidiMessageAccountProfileWithCompletionBlock:(id)arg1;
- (void)_ensureValidAccountProfile;
- (id)initWithWindow:(id)arg1;

@end

