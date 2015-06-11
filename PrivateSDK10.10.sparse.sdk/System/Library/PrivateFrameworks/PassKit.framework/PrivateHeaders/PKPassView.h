/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSBezierPath, NSImage, NSString, PKPass;

@interface PKPassView : NSView
{
    NSBezierPath *_clipPath;
    NSImage *_blurredBackground;
    NSImage *_cachedGradientOverlayImage;
    PKPass *_pass;
    NSString *_windowTitle;
}

+ (void)drawPlainNinePartImage:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)drawGradientOverlayWithBackgroundColor:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)drawPerforatedNinePartImage:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)drawNotchedNinePartImage:(id)arg1 inRect:(struct CGRect)arg2;
@property(retain, nonatomic) NSString *windowTitle; // @synthesize windowTitle=_windowTitle;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)innerRect;
- (id)imageNamed:(id)arg1;
- (void)dealloc;

@end

