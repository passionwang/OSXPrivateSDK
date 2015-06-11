//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKView.h"

#import "FRStoreContentView.h"

@class FRStoreViewController, NSObject<OS_dispatch_semaphore>;

@interface FRWKView : WKView <FRStoreContentView>
{
    BOOL _initialLoadCommitted;
    BOOL _initialRenderCompleted;
    BOOL _disableSwipeNavigation;
    BOOL _disableScrolling;
    BOOL _didGoBack;
    BOOL _didGoForward;
    FRStoreViewController *_storeViewController;
    NSObject<OS_dispatch_semaphore> *_initialLoadSemaphore;
}

@property BOOL didGoForward; // @synthesize didGoForward=_didGoForward;
@property BOOL didGoBack; // @synthesize didGoBack=_didGoBack;
@property BOOL disableScrolling; // @synthesize disableScrolling=_disableScrolling;
@property BOOL disableSwipeNavigation; // @synthesize disableSwipeNavigation=_disableSwipeNavigation;
@property(readonly) NSObject<OS_dispatch_semaphore> *initialLoadSemaphore; // @synthesize initialLoadSemaphore=_initialLoadSemaphore;
@property BOOL initialRenderCompleted; // @synthesize initialRenderCompleted=_initialRenderCompleted;
@property BOOL initialLoadCommitted; // @synthesize initialLoadCommitted=_initialLoadCommitted;
@property(readonly) FRStoreViewController *storeViewController; // @synthesize storeViewController=_storeViewController;
- (void).cxx_destruct;
- (void)scrollWheel:(id)arg1;
- (void)_setDragImage:(id)arg1 at:(struct CGPoint)arg2 linkDrag:(BOOL)arg3;
- (BOOL)dragPromisedFilesOfTypes:(id)arg1 fromRect:(struct CGRect)arg2 source:(id)arg3 slideBack:(BOOL)arg4 event:(id)arg5;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)blankPage;
- (id)initWithFrame:(struct CGRect)arg1 contextRef:(struct OpaqueWKContext *)arg2 pageGroupRef:(struct OpaqueWKPageGroup *)arg3 storeViewController:(id)arg4;
- (BOOL)_shouldUseTiledDrawingArea;

@end

