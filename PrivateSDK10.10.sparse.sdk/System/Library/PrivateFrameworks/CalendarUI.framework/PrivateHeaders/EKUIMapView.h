/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MKMapView.h"

#import "NSAccessibilityImage-Protocol.h"

@class MKMapItem, NSString;

@interface EKUIMapView : MKMapView <NSAccessibilityImage>
{
    BOOL _directionsAreWalking;
    MKMapItem *_location;
    MKMapItem *_startLocation;
    NSString *_searchString;
}

@property BOOL directionsAreWalking; // @synthesize directionsAreWalking=_directionsAreWalking;
@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain) MKMapItem *startLocation; // @synthesize startLocation=_startLocation;
@property(retain) MKMapItem *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)scrollWheel:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)resetCursorRects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

