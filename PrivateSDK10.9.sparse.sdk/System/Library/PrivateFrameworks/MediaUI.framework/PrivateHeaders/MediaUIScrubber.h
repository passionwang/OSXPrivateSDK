//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaUI/MediaUIControl.h>

@class MediaUIValueTiming, NSTimer;

@interface MediaUIScrubber : MediaUIControl
{
    double _minValue;
    double _maxValue;
    MediaUIValueTiming *_valueTiming;
    NSTimer *_timer;
    id <MediaUIScrubberDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic) id <MediaUIScrubberDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageDown:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)mouseDown:(id)arg1;
- (struct CGRect)trackRect;
- (struct CGRect)knobRect;
- (void)getKnobRect:(struct CGRect *)arg1 trackRect:(struct CGRect *)arg2;
- (id)_QTUIDrawingOptions;
- (BOOL)isFlipped;
- (double)upperBoundForValue:(double)arg1;
- (double)lowerBoundForValue:(double)arg1;
@property(copy) MediaUIValueTiming *valueTiming;
@property(nonatomic) double currentValue;
@property(nonatomic) double maxValue;
@property(nonatomic) double minValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)exposedBindings;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;

@end

