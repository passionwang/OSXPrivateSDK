//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ContinuousPageView, NSView;

@protocol ContinuousPageViewDelegate <NSObject>
- (BOOL)continuousPageView:(ContinuousPageView *)arg1 pageViewHasFooterBanner:(NSView *)arg2 pageItem:(id)arg3;
- (BOOL)continuousPageView:(ContinuousPageView *)arg1 pageViewHasHeaderBanner:(NSView *)arg2 pageItem:(id)arg3;
- (BOOL)continuousPageView:(ContinuousPageView *)arg1 canScrollDownPageView:(NSView *)arg2 pageItem:(id)arg3;
- (BOOL)continuousPageView:(ContinuousPageView *)arg1 canScrollUpPageView:(NSView *)arg2 pageItem:(id)arg3;
- (void)continuousPageView:(ContinuousPageView *)arg1 pageViewDidParticipateInTransition:(NSView *)arg2 pageItem:(id)arg3;
- (void)continuousPageView:(ContinuousPageView *)arg1 pageViewWillParticipateInTransition:(NSView *)arg2 pageItem:(id)arg3 role:(int)arg4;
- (void)continuousPageView:(ContinuousPageView *)arg1 didTransitionToPageView:(NSView *)arg2 pageItem:(id)arg3 fromPageItem:(id)arg4 previousPageItem:(id)arg5 nextPageItem:(id)arg6;
- (void)continuousPageView:(ContinuousPageView *)arg1 transitionToPageViewWasCanceled:(NSView *)arg2 pageItem:(id)arg3;
- (void)continuousPageView:(ContinuousPageView *)arg1 willTransitionToPageView:(NSView *)arg2 pageItem:(id)arg3;
- (NSView *)continuousPageView:(ContinuousPageView *)arg1 pageViewForItem:(id)arg2;
- (id)continuousPageView:(ContinuousPageView *)arg1 itemAfter:(id)arg2;
- (id)continuousPageView:(ContinuousPageView *)arg1 itemBefore:(id)arg2;
@end

