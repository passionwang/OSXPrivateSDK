/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol VKInteractiveMapDelegate <NSObject>
- (void)map:(id)arg1 didUpdateVerticalYawTo:(double)arg2;
- (void)map:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)map:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (void)map:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
- (void)map:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)map:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (void)map:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)map:(id)arg1 didBecomePitched:(BOOL)arg2;
- (id)map:(id)arg1 painterForOverlay:(id)arg2;
- (id)map:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)map:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)map:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)mapDidFinishChangingMapDisplayStyle:(unsigned long long)arg1;
- (void)mapDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapDidFinishLoadingTiles:(id)arg1;
- (void)mapDidStartLoadingTiles:(id)arg1;
- (void)mapDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapDidBecomePartiallyDrawn:(id)arg1;
- (void)mapDidChangeVisibleRegion:(id)arg1;

@optional
- (void)map:(id)arg1 didUpdateContainsOverlay:(BOOL)arg2;
@end

