/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSString;

@interface MEImageExporter : NSOperation
{
    NSString *mOriginalPath;
    struct CGImage *mOriginalImage;
    struct CGSize mSize;
    NSString *mDestinationPath;
    BOOL mBlackWhite;
}

+ (id)operationWithOriginalPath:(id)arg1 loadedImage:(struct CGImage *)arg2 size:(struct CGSize)arg3 andDestinationPath:(id)arg4;
+ (id)operationWithOriginalPath:(id)arg1 size:(struct CGSize)arg2 andDestinationPath:(id)arg3;
+ (id)operationWithOriginalPath:(id)arg1 size:(struct CGSize)arg2 blackWhite:(BOOL)arg3 andDestinationPath:(id)arg4;
- (void)main;
- (void)cleanup;
- (void)dealloc;
- (id)initWithOriginalPath:(id)arg1 loadedImage:(struct CGImage *)arg2 size:(struct CGSize)arg3 andDestinationPath:(id)arg4;
- (id)initWithOriginalPath:(id)arg1 size:(struct CGSize)arg2 andDestinationPath:(id)arg3;
- (id)initWithOriginalPath:(id)arg1 size:(struct CGSize)arg2 blackWhite:(BOOL)arg3 andDestinationPath:(id)arg4;

@end

