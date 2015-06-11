//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString;

@protocol MZMediaManagement <NSObject>
- (double)stopTimeForAssetAtPath:(NSString *)arg1;
- (double)startTimeForAssetAtPath:(NSString *)arg1;
- (struct CGSize)resolutionForAssetAtPath:(NSString *)arg1;
- (id)attributeForAssetAtPath:(NSString *)arg1 forKey:(NSString *)arg2;
- (BOOL)isSupportedMovieForAssetAtPath:(NSString *)arg1;
- (struct CGImage *)thumbnailCGImageForAssetAtPath:(NSString *)arg1 andSize:(struct CGSize)arg2;
- (struct CGImage *)CGImageForAssetAtPath:(NSString *)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3 thumbnailIfPossible:(BOOL)arg4 now:(BOOL)arg5;
- (struct __IOSurface *)IOSurfaceForAssetAtPath:(NSString *)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3;
- (NSString *)absolutePathForStillAssetAtPath:(NSString *)arg1 andSize:(struct CGSize)arg2;
- (NSString *)absolutePathForAssetAtPath:(NSString *)arg1 andSize:(struct CGSize)arg2;
- (NSString *)absolutePathForAssetAtPath:(NSString *)arg1;

@optional
- (NSArray *)regionsOfInterestForPath:(NSString *)arg1;
- (NSData *)dataForAssetAtPath:(NSString *)arg1 andSize:(struct CGSize)arg2;
@end

