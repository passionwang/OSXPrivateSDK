//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WebPreferences, WebView;

@interface MMWebKitController : NSObject
{
    id <MMWebKitControllerDelegate> _delegate;
    WebPreferences *_webPreferences;
    WebView *_webView;
    struct {
        unsigned int webViewSetFrame:1;
        unsigned int delegateConfigureForFrame:1;
        unsigned int delegateDidCancel:1;
        unsigned int delegateDidSucceed:1;
        unsigned int delegateDidFailLoading:1;
        unsigned int delegateDidFinishLoading:1;
        unsigned int padding:2;
    } _delegateFlags;
}

@property(retain, nonatomic) WebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) WebPreferences *webPreferences; // @synthesize webPreferences=_webPreferences;
@property(nonatomic) id <MMWebKitControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (void)webView:(id)arg1 setFrame:(struct CGRect)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)dealloc;
- (void)loadURLRequest:(id)arg1;
- (id)initInView:(id)arg1;

@end

