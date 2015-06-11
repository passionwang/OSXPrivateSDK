//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSPasteboard, NSURL, NSView<QLPreviewCustomView>, QLPreviewView;

@protocol QLPreviewViewDelegate <NSObject>

@optional
- (unsigned long long)previewView:(QLPreviewView *)arg1 draggingSourceOperationMaskForLocal:(BOOL)arg2;
- (BOOL)previewView:(QLPreviewView *)arg1 writePreviewItem:(id <QLPreviewItem>)arg2 toPasteboard:(NSPasteboard *)arg3;
- (NSArray *)previewView:(QLPreviewView *)arg1 namesOfPromisedFilesDroppedAtDestination:(NSURL *)arg2 forPreviewItem:(id <QLPreviewItem>)arg3;
- (BOOL)previewView:(QLPreviewView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 onPreviewItem:(id <QLPreviewItem>)arg3;
- (unsigned long long)previewView:(QLPreviewView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 onPreviewItem:(id <QLPreviewItem>)arg3;
- (NSView<QLPreviewCustomView> *)previewView:(QLPreviewView *)arg1 customViewForPreviewItem:(id <QLPreviewItem>)arg2;
- (BOOL)previewView:(QLPreviewView *)arg1 shouldPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewView:(QLPreviewView *)arg1 timedOutLoadingPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewView:(QLPreviewView *)arg1 didShowPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewView:(QLPreviewView *)arg1 willShowPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewView:(QLPreviewView *)arg1 didLoadPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewView:(QLPreviewView *)arg1 willLoadPreviewItem:(id <QLPreviewItem>)arg2;
@end

