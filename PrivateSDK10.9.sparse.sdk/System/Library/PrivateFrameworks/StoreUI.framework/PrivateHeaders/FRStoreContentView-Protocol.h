//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FRStoreViewController;

@protocol FRStoreContentView <NSObject>
@property BOOL didGoForward;
@property BOOL didGoBack;
@property BOOL initialLoadCommitted;
@property(readonly) FRStoreViewController *storeViewController;
- (struct OpaqueWKPage *)pageRef;
- (void)blankPage;
@end

