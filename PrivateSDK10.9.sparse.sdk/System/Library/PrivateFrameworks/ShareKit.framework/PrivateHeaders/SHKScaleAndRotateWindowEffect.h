//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ShareKit/SHKScaleWindowEffect.h>

@interface SHKScaleAndRotateWindowEffect : SHKScaleWindowEffect
{
    double _initialAngle;
    double _finalAngle;
    double _extraTempYTransform;
    BOOL _resetTransform;
}

@property BOOL resetTransform; // @synthesize resetTransform=_resetTransform;
@property double extraTempYTransform; // @synthesize extraTempYTransform=_extraTempYTransform;
@property double finalAngle; // @synthesize finalAngle=_finalAngle;
@property double initialAngle; // @synthesize initialAngle=_initialAngle;
- (void)done;
- (void)setValue:(float)arg1;
- (id)init;

@end

