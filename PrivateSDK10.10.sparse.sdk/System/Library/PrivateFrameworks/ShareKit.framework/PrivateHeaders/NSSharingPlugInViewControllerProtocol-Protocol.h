/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSImage;

@protocol NSSharingPlugInViewControllerProtocol <NSObject>

@optional
@property(getter=isPreviewImageVisible) BOOL previewImageVisible;
@property(retain) NSImage *previewImage;
- (void)_addViewToContainerView:(id)arg1;
- (struct CGRect)imageContentFrameForItemProvider:(id)arg1;
- (struct CGRect)imageFrameForItemProvider:(id)arg1;
- (id)imageForItemProvider:(id)arg1;
- (id)previewImageLayer;
@end

