/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "QLRemoteConfiguration.h"

@class NSArray, NSDictionary, NSString;

@interface LUConfiguration : QLRemoteConfiguration
{
}

+ (BOOL)isAppleInternal;
+ (BOOL)useAppleInternalDefaults;
+ (id)sharedConfiguration;
- (id)hardcodedConfiguration;
@property(readonly) NSDictionary *yahooImagesThumbnailHeaders;
@property(readonly) NSString *yahooImagesThumbnailURL;
@property(readonly) NSString *yahooImagesThumbnailHeightPath;
@property(readonly) NSString *yahooImagesThumbnailWidthPath;
@property(readonly) NSString *yahooImagesThumbnailURLPath;
@property(readonly) NSDictionary *yahooImagesQueryHeaders;
@property(readonly) NSString *yahooImagesQueryURL;
@property(readonly) NSString *yahooImagesPageURL;
@property(readonly) unsigned long long yahooImagesMaxThumbnails;
@property(readonly) unsigned long long yahooImagesMaxSimultaneousDownloads;
@property(readonly) unsigned long long yahooImagesMaxCharacters;
@property(readonly) NSDictionary *googleImagesThumbnailHeaders;
@property(readonly) NSString *googleImagesThumbnailURL;
@property(readonly) NSString *googleImagesThumbnailHeightKey;
@property(readonly) NSString *googleImagesThumbnailWidthKey;
@property(readonly) NSString *googleImagesThumbnailURLKey;
@property(readonly) NSDictionary *googleImagesQueryHeaders;
@property(readonly) NSString *googleImagesQueryURL;
@property(readonly) NSString *googleImagesPageURL;
@property(readonly) unsigned long long googleImagesMaxThumbnails;
@property(readonly) unsigned long long googleImagesMaxSimultaneousDownloads;
@property(readonly) unsigned long long googleImagesMaxCharacters;
@property(readonly) NSDictionary *bingImagesThumbnailHeaders;
@property(readonly) NSString *bingImagesThumbnailURL;
@property(readonly) NSString *bingImagesThumbnailHeightKey;
@property(readonly) NSString *bingImagesThumbnailWidthKey;
@property(readonly) NSString *bingImagesThumbnailURLKey;
@property(readonly) NSString *bingImagesThumbnailKey;
@property(readonly) NSDictionary *bingImagesQueryHeaders;
@property(readonly) NSString *bingImagesQueryURL;
@property(readonly) NSString *bingImagesPageURL;
@property(readonly) unsigned long long bingImagesMaxThumbnails;
@property(readonly) unsigned long long bingImagesMaxSimultaneousDownloads;
@property(readonly) unsigned long long bingImagesMaxCharacters;
@property(readonly) NSArray *imageSearchProviders;
@property(readonly) double timeoutForAsyncResults;
@property(readonly) double delayToCombineAsyncResults;
@property(readonly) double delayForInitialAsyncResultsWithoutSynchronous;
@property(readonly) double delayForInitialAsyncResultsWithSynchronous;
@property(readonly) unsigned long long maximumNetworkDCSResults;
@property(readonly) unsigned long long maximumLocalDCSResults;
@property(readonly) NSString *httpUserAgent;
@property(readonly) BOOL enableWikipedia;
@property(readonly) BOOL enableImageSearchForManagedUsers;
@property(readonly) NSString *configurationVersion;
- (void)commonLUConfigurationTeardown;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

