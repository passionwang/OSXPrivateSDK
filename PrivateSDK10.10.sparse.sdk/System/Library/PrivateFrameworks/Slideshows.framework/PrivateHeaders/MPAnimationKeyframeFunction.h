/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MPAnimationKeyframe.h>

@class NSDictionary, NSString;

@interface MPAnimationKeyframeFunction : MPAnimationKeyframe
{
    double _duration;
    NSString *_function;
    NSDictionary *_functionParameters;
    double _functionTimeOffset;
    double _functionTimeFactor;
    double _innerEaseInControl;
    double _innerEaseOutControl;
}

+ (id)keyframeFunctionWithFunction:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 withDuration:(double)arg4;
+ (id)keyframeFunctionWithFunction:(id)arg1 atTime:(double)arg2 withDuration:(double)arg3;
@property(nonatomic) double innerEaseOutControl; // @synthesize innerEaseOutControl=_innerEaseOutControl;
@property(nonatomic) double innerEaseInControl; // @synthesize innerEaseInControl=_innerEaseInControl;
@property(nonatomic) double functionTimeFactor; // @synthesize functionTimeFactor=_functionTimeFactor;
@property(nonatomic) double functionTimeOffset; // @synthesize functionTimeOffset=_functionTimeOffset;
@property(copy, nonatomic) NSDictionary *functionParameters; // @synthesize functionParameters=_functionParameters;
@property(copy, nonatomic) NSString *function; // @synthesize function=_function;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initKeyframeFunctionWithFunction:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 withDuration:(double)arg4;
- (id)keyframe;

@end

