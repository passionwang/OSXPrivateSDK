/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MRCAMLLayer.h>

@class MRImage, MRTextRenderer;

@interface MRCAMLTextLayer : MRCAMLLayer
{
    MRImage *textImage;
    MRTextRenderer *textRenderer;
}

@property(retain, nonatomic) MRTextRenderer *textRenderer; // @synthesize textRenderer;
@property(retain, nonatomic) MRImage *textImage; // @synthesize textImage;
- (void)dealloc;

@end

