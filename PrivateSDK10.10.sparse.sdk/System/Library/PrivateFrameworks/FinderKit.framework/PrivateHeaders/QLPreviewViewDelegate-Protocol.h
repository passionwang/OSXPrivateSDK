/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol QLPreviewViewDelegate <NSObject>

@optional
- (BOOL)previewView:(id)arg1 canShowPathForItem:(id)arg2;
- (unsigned long long)previewView:(id)arg1 draggingSourceOperationMaskForLocal:(BOOL)arg2;
- (BOOL)previewView:(id)arg1 writePreviewItem:(id)arg2 toPasteboard:(id)arg3;
- (id)previewView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forPreviewItem:(id)arg3;
- (BOOL)previewView:(id)arg1 acceptDrop:(id)arg2 onPreviewItem:(id)arg3;
- (unsigned long long)previewView:(id)arg1 validateDrop:(id)arg2 onPreviewItem:(id)arg3;
- (id)previewView:(id)arg1 customViewForPreviewItem:(id)arg2;
- (BOOL)previewView:(id)arg1 shouldPreviewItem:(id)arg2;
- (void)previewView:(id)arg1 timedOutLoadingPreviewItem:(id)arg2;
- (void)previewView:(id)arg1 didShowPreviewItem:(id)arg2;
- (void)previewView:(id)arg1 willShowPreviewItem:(id)arg2;
- (void)previewView:(id)arg1 didLoadPreviewItem:(id)arg2;
- (void)previewView:(id)arg1 willLoadPreviewItem:(id)arg2;
@end

