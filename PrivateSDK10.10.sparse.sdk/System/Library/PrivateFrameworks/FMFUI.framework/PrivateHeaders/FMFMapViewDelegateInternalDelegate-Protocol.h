/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol FMFMapViewDelegateInternalDelegate <NSObject>
- (id)_internalAnnotationTintColor;
- (id)annotationImageForHandle:(id)arg1;
- (struct NSEdgeInsets)edgeInsets;
- (BOOL)viewWillAppearCalled;
- (void)mapViewDidFinishRenderingMap;
- (BOOL)shouldZoomToFitMeAndLocations;
- (void)setShouldZoomToFitNewLocations:(BOOL)arg1;
- (void)didUpdateUserLocation:(id)arg1;
- (void)reZoomToFit;
- (void)regionDidChangeAnimated:(BOOL)arg1;
- (void)regionWillChangeAnimated:(BOOL)arg1;
- (void)didDeselectLocation:(id)arg1;
- (void)didSelectLocation:(id)arg1;
@end

