/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEODirectionsProvider.h>

#import "PBRequesterDelegate-Protocol.h"

@class GEORequester, NSString;

// Not exported
@interface GEOVoltaireDirectionsProvider : GEODirectionsProvider <PBRequesterDelegate>
{
    GEORequester *_requester;
    BOOL _cancelled;
}

@property(retain, nonatomic) GEORequester *requester; // @synthesize requester=_requester;
- (void)requesterDidCancel:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidFinish:(id)arg1;
- (void)cleanupRequester;
- (void)cancelProviderRequest;
- (void)startProviderWithRequest:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

