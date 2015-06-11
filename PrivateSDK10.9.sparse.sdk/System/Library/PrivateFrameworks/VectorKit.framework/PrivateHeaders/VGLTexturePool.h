//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, VGLContext;

__attribute__((visibility("hidden")))
@interface VGLTexturePool : NSObject
{
    struct CGSize _contentSize;
    struct CGSize _textureSize;
    VGLContext *_context;
    NSMutableArray *_textureResources;
}

- (id).cxx_construct;
- (id)checkoutTexture;
- (void)purge;
- (void)pushTextureResource:(id)arg1;
- (void)allocateTextureResource;
- (void)dealloc;
- (id)initWithCapacity:(int)arg1 textureSize:(struct CGSize)arg2 scale:(int)arg3 context:(id)arg4;

@end

