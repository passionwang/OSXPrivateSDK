/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSWindow, PKPassWindowController;

@interface PKPassSheet : NSObject
{
    PKPassWindowController *_windowController;
    NSArray *_passes;
    NSWindow *_hostWindow;
    id _completionHandler;
}

+ (id)sheetWithPass:(id)arg1 hostWindow:(id)arg2;
+ (id)sheetWithPasses:(id)arg1 hostWindow:(id)arg2;
+ (id)_sheets;
@property(copy) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(readonly) NSArray *passes; // @synthesize passes=_passes;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)showPass;
- (void)showPassWithCompletionHandler:(id)arg1;
- (id)initWithPass:(id)arg1 hostWindow:(id)arg2;
- (void)dealloc;
- (id)initWithPasses:(id)arg1 hostWindow:(id)arg2;

@end

