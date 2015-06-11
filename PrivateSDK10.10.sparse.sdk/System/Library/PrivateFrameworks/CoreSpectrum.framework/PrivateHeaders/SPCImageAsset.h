/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreSpectrum/SPCAsset.h>

@class NSMapTable, NSMutableArray;

@interface SPCImageAsset : SPCAsset
{
    unsigned long long _columnCount;
    unsigned long long _rowCount;
    NSMutableArray *_assetReps;
    NSMapTable *_assetKeysToAssetReps;
}

@property(retain) NSMapTable *assetKeysToAssetReps; // @synthesize assetKeysToAssetReps=_assetKeysToAssetReps;
@property(retain) NSMutableArray *assetReps; // @synthesize assetReps=_assetReps;
@property(nonatomic) unsigned long long rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
- (Class)imageAssetRepSubclass;
- (id)imageAssetFileForQualifiers:(id)arg1 scaleFactor:(double)arg2;
- (id)nameForPlaneIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long planeCount;
- (id)imageAssetRepForAssetKey:(id)arg1;
- (struct CGRect)contentsCenterForAssetKey:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1 forAssetKey:(id)arg2 atSize:(struct CGSize)arg3;
- (id)imageWithDefaultSizeForAssetKey:(id)arg1;
- (struct CGSize)defaultSizeForAssetKey:(id)arg1;
- (id)imageWithSize:(struct CGSize)arg1 forAssetKey:(id)arg2;
- (id)contentType;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

