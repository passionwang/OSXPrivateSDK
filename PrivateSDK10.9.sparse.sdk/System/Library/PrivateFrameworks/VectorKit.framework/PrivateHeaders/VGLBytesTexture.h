//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VGLTexture.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VGLBytesTexture : VGLTexture
{
    NSData *_data;
    int _internalFormat;
    int _width;
    int _height;
    unsigned int _pixelFormat;
    unsigned int _pixelType;
}

- (BOOL)loadTexture;
- (BOOL)decodeTexture;
- (void)dealloc;
- (id)initWithData:(id)arg1 internalFormat:(int)arg2 size:(struct CGSize)arg3 pixelFormat:(unsigned int)arg4 pixelType:(unsigned int)arg5;

@end

