/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SPCRenderDelegate-Protocol.h"

@interface SPCCGRenderDelegate : NSObject <SPCRenderDelegate>
{
}

- (void)drawVisibleEffectsOfLayer:(id)arg1 state:(id)arg2 withSettings:(id)arg3;
- (void)drawEffect:(id)arg1 withSettings:(id)arg2;
- (id)imageForLayers:(id)arg1 state:(id)arg2 rect:(struct CGRect)arg3 scaleFactor:(double)arg4;
- (id)renderSettingsForRenderingLayer:(id)arg1 inContext:(void *)arg2 rect:(struct CGRect)arg3;
- (Class)effectRendererForEffect:(id)arg1;
- (id)imageForLayer:(id)arg1 state:(id)arg2 scaleFactor:(double)arg3;
- (id)imageForElementPart:(id)arg1 state:(id)arg2 scaleFactor:(double)arg3;

@end

