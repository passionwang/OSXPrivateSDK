/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "OADClient-Protocol.h"

@class CHDAnchor, NSString;

// Not exported
@interface CHDOfficeArtClient : NSObject <OADClient>
{
    CHDAnchor *mAnchor;
}

- (struct CGRect)bounds;
- (BOOL)hasBounds;
- (void)setAnchor:(id)arg1;
- (id)anchor;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

