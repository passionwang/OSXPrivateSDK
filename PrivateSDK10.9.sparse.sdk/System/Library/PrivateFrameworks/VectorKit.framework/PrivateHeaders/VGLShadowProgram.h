//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VGLRealisticFadeProgram.h>

__attribute__((visibility("hidden")))
@interface VGLShadowProgram : VGLRealisticFadeProgram
{
    CDStruct_03942939 _cameraDirection;
    int _uCameraDirection;
    float _ramp;
    int _uRamp;
    float _width;
    int _uWidth;
    float _taper;
    int _uTaper;
}

+ (id)fragName;
+ (id)vertName;
@property(nonatomic) float taper; // @synthesize taper=_taper;
@property(nonatomic) float width; // @synthesize width=_width;
@property(nonatomic) float ramp; // @synthesize ramp=_ramp;
@property(nonatomic) CDStruct_03942939 cameraDirection; // @synthesize cameraDirection=_cameraDirection;
- (id).cxx_construct;
- (void)setup;

@end

