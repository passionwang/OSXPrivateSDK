/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKIconArtwork.h>

// Not exported
@interface _VKLandmarkIconArtwork : VKIconArtwork
{
    CDStruct_44d855de _style;
    struct CGImage *_maskImage;
    struct CGImage *_outlineMaskImage;
}

- (id).cxx_construct;
- (void)_cleanUpAfterDrawing;
- (id)_newImage;
- (struct CGSize)size;
- (void)dealloc;
- (id)initWithMask:(struct CGImage *)arg1 outlineMask:(struct CGImage *)arg2 style:(CDStruct_44d855de *)arg3 contentScale:(double)arg4;

@end

