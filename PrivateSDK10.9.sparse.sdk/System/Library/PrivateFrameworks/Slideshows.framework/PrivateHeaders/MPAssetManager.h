//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MPAssetManager : NSObject
{
}

+ (void)releaseSharedManager;
+ (id)sharedManager;
+ (void)cleanFaceCore;
+ (id)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg1;
+ (id)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg1;
+ (id)convertCGImageToBuffer:(struct CGImage *)arg1;
+ (id)faceCoreAPI;
- (double)posterTimeForAssetAtPath:(id)arg1;
- (id)absolutePathFromPath:(id)arg1;
- (id)regionsOfInterestForAssetAtPath:(id)arg1;
- (id)regionsOfInterestForAsset:(struct CGImage *)arg1;
- (unsigned long long)mediaTypeForAssetAtPath:(id)arg1;
- (BOOL)isAssetAtPathASupportedAudio:(id)arg1;
- (BOOL)isAssetAtPathASupportedMovie:(id)arg1;
- (BOOL)isAssetAtPathASupportedImage:(id)arg1;
- (id)locationHierarchyForAssetAtPath:(id)arg1;
- (id)altitudeForAssetAtPath:(id)arg1;
- (id)longitudeForAssetAtPath:(id)arg1;
- (id)latitudeForAssetAtPath:(id)arg1;
- (id)keywordsForAssetAtPath:(id)arg1;
- (id)creationDateForAssetAtPath:(id)arg1;
- (struct CGSize)resolutionForAssetAtPath:(id)arg1;
- (double)stopTimeForAssetAtPath:(id)arg1;
- (double)startTimeForAssetAtPath:(id)arg1;
- (double)durationForAssetAtPath:(id)arg1;
- (void)gatherMetadataForAssetAtPath:(id)arg1;
- (id)thumbnailForAssetAtPath:(id)arg1;
- (void)setSavesToDisk:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)prepareInfoForAssetsAtPaths:(id)arg1;
- (void)removeRegionOfInterestAtIndex:(long long)arg1 forAssetAtPath:(id)arg2 saveToCache:(BOOL)arg3;
- (void)setForceOrderForRegionsOfInterest:(BOOL)arg1 forPath:(id)arg2 saveToCache:(BOOL)arg3;
- (void)moveRegionOfInterestWithPath:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 saveToCache:(BOOL)arg4;
- (void)updateRegionOfInterestAtIndex:(long long)arg1 atPath:(id)arg2 to:(struct CGRect)arg3 saveToCache:(BOOL)arg4;
- (void)updateROIInfoAtIndex:(long long)arg1 atPath:(id)arg2 to:(id)arg3 saveToCache:(BOOL)arg4;
- (void)setRegionOfInterest:(struct CGRect)arg1 atIndex:(long long)arg2 forAssetAtPath:(id)arg3 saveToCache:(BOOL)arg4;
- (void)setROIInfo:(id)arg1 atIndex:(long long)arg2 forAssetAtPath:(id)arg3 saveToCache:(BOOL)arg4;
- (void)addRegionOfInterest:(struct CGRect)arg1 forAssetAtPath:(id)arg2 saveToCache:(BOOL)arg3;
- (void)addROIInfo:(id)arg1 forAssetAtPath:(id)arg2 saveToCache:(BOOL)arg3;
- (struct CGRect)regionOfInterestAtIndex:(long long)arg1 forAssetAtPath:(id)arg2;
- (id)roiInfoAtIndex:(long long)arg1 forAssetAtPath:(id)arg2;
- (void)tryToSaveCache;
- (id)mediaObjectForAssetAtPath:(id)arg1;
- (void)cacheAttributes:(id)arg1 forPath:(id)arg2;

@end

