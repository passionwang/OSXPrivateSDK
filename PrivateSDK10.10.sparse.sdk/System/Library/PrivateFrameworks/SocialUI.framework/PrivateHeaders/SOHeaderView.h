/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@interface SOHeaderView : NSView
{
    BOOL _activatingClick;
    BOOL _mouseDownMovesWindow;
}

@property BOOL mouseDownMovesWindow; // @synthesize mouseDownMovesWindow=_mouseDownMovesWindow;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)_initiateWindowDragForEvent:(id)arg1;

@end

