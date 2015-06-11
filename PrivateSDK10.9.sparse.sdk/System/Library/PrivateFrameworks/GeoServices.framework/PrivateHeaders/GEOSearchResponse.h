//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOPlaceSearchResponse.h>

@class NSMapTable, NSString;

@interface GEOSearchResponse : GEOPlaceSearchResponse
{
    NSString *_businessQuery;
    NSMapTable *_attributionKeysToInfo;
}

@property(retain, nonatomic) NSString *businessQuery; // @synthesize businessQuery=_businessQuery;
- (id)attributionInfoForSourceIdentifier:(id)arg1 sourceVersion:(unsigned int)arg2;
- (void)_addAttributionInfo:(id)arg1;
- (void)dealloc;

@end

