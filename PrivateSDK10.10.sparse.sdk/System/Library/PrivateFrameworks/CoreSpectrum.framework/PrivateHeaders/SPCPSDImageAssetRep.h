/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreSpectrum/SPCImageAssetRep.h>

@class CUIPSDImageRef, SPCPSDImageAssetFile;

@interface SPCPSDImageAssetRep : SPCImageAssetRep
{
    SPCPSDImageAssetFile *_psdImageAssetFile;
    CUIPSDImageRef *_psdFileRef;
}

@property(retain, nonatomic) CUIPSDImageRef *psdFileRef; // @synthesize psdFileRef=_psdFileRef;
@property(readonly) SPCPSDImageAssetFile *psdImageAssetFile; // @synthesize psdImageAssetFile=_psdImageAssetFile;
- (id)layerForImageAssetKey:(id)arg1;
- (unsigned long long)absoluteSliceForImageAssetKey:(id)arg1 sliceIndex:(unsigned long long)arg2;
@property(readonly) unsigned long long sliceCount;
- (id)imageForSliceIndex:(unsigned long long)arg1;
- (void)drawInContext:(struct CGContext *)arg1 atSize:(struct CGSize)arg2;
- (struct CGSize)imageSize;
- (id)imageForSize:(struct CGSize)arg1;
- (Class)assetRendererClass;

@end

