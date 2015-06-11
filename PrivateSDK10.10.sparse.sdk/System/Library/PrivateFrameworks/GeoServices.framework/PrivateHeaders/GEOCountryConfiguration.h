/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver-Protocol.h"

@class NSLock, NSMutableArray, NSMutableDictionary, NSString;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver>
{
    NSString *_countryCode;
    NSLock *_countryCodeLock;
    BOOL _isObservingReachability;
    BOOL _isUpdating;
    NSMutableArray *_updateCompletionHandlers;
    NSLock *_supportedFeaturesLock;
    NSMutableDictionary *_supportedFeatures;
    double _urlAuthenticationTimeToLive;
    BOOL _hasURLAuthenticationTimeToLive;
}

+ (id)sharedConfiguration;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)countryDefaultForKey:(id)arg1;
- (id)countryDefaultForKey:(id)arg1 sourcePtr:(long long *)arg2;
- (id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(long long *)arg3;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long *)arg3;
- (id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(long long *)arg4;
@property(copy, nonatomic) NSString *countryCode;
- (void)_checkCountryProvidersWithOldCountryCode:(id)arg1 providers:(id)arg2;
@property(readonly, nonatomic) double urlAuthenticationTimeToLive;
@property(readonly, nonatomic) BOOL currentCountrySupportsCarIntegration;
@property(readonly, nonatomic) BOOL currentCountrySupportsRouteGenius;
@property(readonly, nonatomic) BOOL currentCountrySupportsTraffic;
@property(readonly, nonatomic) BOOL currentCountrySupportsDirections;
@property(readonly, nonatomic) BOOL currentCountrySupportsNavigation;
- (BOOL)currentCountrySupportsFeature:(long long)arg1;
- (BOOL)countryCode:(id)arg1 supportsFeature:(long long)arg2;
- (void)_resetSupportedFeatures;
- (void)updateCountryConfiguration:(id)arg1;
- (void)_determineCurrentCountryCode:(id)arg1;
- (void)updateProvidersForCurrentCountry;
- (void)_notifyUpdateCompletionHandlers:(BOOL)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

