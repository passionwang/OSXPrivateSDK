/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MMWebKitControllerDelegate <NSObject>

@optional
- (void)mmWebKitControllerDidFinishLoading:(id)arg1;
- (void)mmWebKitControllerDidFailLoading:(id)arg1 error:(id)arg2;
- (void)mmWebKitControllerDidSucceed:(id)arg1;
- (void)mmWebKitControllerDidCancel:(id)arg1;
- (void)mmWebKitControllerConfigureForFrame:(id)arg1;
- (void)mmWebKitControllerDidCreateJavaScriptContext:(id)arg1 forFrame:(id)arg2;
- (void)mmWebView:(id)arg1 setFrame:(struct CGRect)arg2;
@end

