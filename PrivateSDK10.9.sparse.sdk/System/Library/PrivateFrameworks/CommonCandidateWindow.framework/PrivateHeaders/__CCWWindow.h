//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

__attribute__((visibility("hidden")))
@interface __CCWWindow : NSPanel
{
    struct __CCWObject *_ccwObject;
    long long newLook;
}

@property long long newLook; // @synthesize newLook;
- (void)mouseDown:(id)arg1;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)setNeedsDisplay:(BOOL)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 ccwObject:(struct __CCWObject *)arg3;

@end

