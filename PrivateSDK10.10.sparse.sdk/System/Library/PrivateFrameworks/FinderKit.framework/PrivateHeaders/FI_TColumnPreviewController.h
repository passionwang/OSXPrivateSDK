/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_TViewController.h>

#import "TCoalescingNodeObserverProtocol-Protocol.h"

@class FI_TColumnPreviewInfoViewController, FI_TColumnPreviewViewController, NSString;

// Not exported
@interface FI_TColumnPreviewController : FI_TViewController <TCoalescingNodeObserverProtocol>
{
    FI_TColumnPreviewViewController *_previewViewController;
    FI_TColumnPreviewInfoViewController *_infoViewController;
    struct TNSRef<NSArray *> _viewControllers;
    struct TCoalescingNodeObserverCocoaBridge *_nodeObserver;
    struct TFENode _targetInfoNode;
    unsigned int _targetInfoNodeNotificationOptions;
    struct TNotificationCenterObserver _viewDidMoveToSuperviewObserver;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)nodeMDAttributeChanged:(const struct TFENode *)arg1 attributes:(id)arg2 isDisplayAttributes:(_Bool)arg3;
- (void)aliasesTargetChanged:(const struct TFENodeVector *)arg1;
- (void)nodesGoingAway:(const struct TFENodeVector *)arg1;
- (void)bulkNodesDeleted:(const struct map<const TFENode, const TFENodeVector *const, std::__1::less<const TFENode>, std::__1::allocator<std::__1::pair<const TFENode, const TFENodeVector *const>>> *)arg1;
- (void)bulkNodesChanged:(const map_39732344 *)arg1;
- (void)viewDidMoveToSuperview;
- (void)setTargetInfoNode:(const struct TFENode *)arg1;
- (const struct TFENode *)targetInfoNode;
- (id)nibName;
- (void)viewLoaded;
- (void)deallocCommon;
- (void)finalize;
- (void)dealloc;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

