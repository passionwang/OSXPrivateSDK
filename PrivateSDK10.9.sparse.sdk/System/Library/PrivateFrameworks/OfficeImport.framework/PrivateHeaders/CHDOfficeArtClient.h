//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OADClient.h"

@class CHDAnchor;

__attribute__((visibility("hidden")))
@interface CHDOfficeArtClient : NSObject <OADClient>
{
    CHDAnchor *mAnchor;
}

- (struct CGRect)bounds;
- (BOOL)hasBounds;
- (void)setAnchor:(id)arg1;
- (id)anchor;
- (void)dealloc;

@end

