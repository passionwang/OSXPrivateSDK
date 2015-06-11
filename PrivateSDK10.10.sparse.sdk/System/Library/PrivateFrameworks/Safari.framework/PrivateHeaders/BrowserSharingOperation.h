/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSSharingService;

// Not exported
@interface BrowserSharingOperation : NSObject
{
    NSSharingService *_sharingService;
    NSArray *_items;
    NSDictionary *_sharingServiceParameters;
    struct BrowserContentViewController *_contentViewController;
}

@property(readonly, nonatomic) struct BrowserContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) NSDictionary *sharingServiceParameters; // @synthesize sharingServiceParameters=_sharingServiceParameters;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSSharingService *sharingService; // @synthesize sharingService=_sharingService;
- (void).cxx_destruct;
- (id)initWithSharingService:(id)arg1 items:(id)arg2 sharingServiceParameters:(id)arg3 contentViewController:(struct BrowserContentViewController *)arg4;

@end

