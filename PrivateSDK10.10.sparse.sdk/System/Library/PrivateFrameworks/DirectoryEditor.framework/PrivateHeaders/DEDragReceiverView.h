/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSArray;

@interface DEDragReceiverView : NSView
{
    id _dragDelegate;
    BOOL _dropOperationInProgress;
    NSArray *_registeredDragTypes;
}

@property(retain) NSArray *registeredDragTypes; // @synthesize registeredDragTypes=_registeredDragTypes;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)setDragDelegate:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)registerForDragTypes;

@end

