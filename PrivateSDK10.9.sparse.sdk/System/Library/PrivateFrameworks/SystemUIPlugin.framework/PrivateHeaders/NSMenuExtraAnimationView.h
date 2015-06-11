//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSImage, NSImageCell, NSMenuExtra, NSTimer;

@interface NSMenuExtraAnimationView : NSView
{
    NSMenuExtra *_menuExtra;
    NSArray *_images;
    NSArray *_alternateImages;
    unsigned long long _imageFrame;
    double _imageFrameRate;
    NSTimer *_updateImageTimer;
    NSImage *_textImage;
    NSImage *_textImageHighlighted;
    unsigned long long _textImageFrame;
    unsigned long long _maxTextImageFrame;
    int _textStage;
    NSTimer *_updateTextTimer;
    struct CGRect _minFrame;
    double _maxWidth;
    double _widthIncrement;
    NSImageCell *_imageCell;
}

@property(nonatomic) NSMenuExtra *menuExtra; // @synthesize menuExtra=_menuExtra;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double imageFrameRate; // @synthesize imageFrameRate=_imageFrameRate;
@property(copy, nonatomic) NSArray *alternateImages; // @synthesize alternateImages=_alternateImages;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 menuExtra:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)stopTextAnimation;
- (void)startTextAnimation;
- (void)setAnimationText:(id)arg1;
- (void)setStaticText:(id)arg1;
- (void)stopImageAnimation;
- (void)startImageAnimation;
- (id)_getImageArray;
- (void)_updateImageAnimation:(id)arg1;
- (void)_updateTextAnimation:(id)arg1;
- (id)_textAttributes:(BOOL)arg1;
- (id)_imageFromText:(id)arg1 highlighted:(BOOL)arg2;

@end

