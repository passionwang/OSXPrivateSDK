//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class ProPSDImageRef;

__attribute__((visibility("hidden")))
@interface NSProSplashView : NSView
{
    id *_license;
    ProPSDImageRef *_psd;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
}

- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)finalize;
- (void)dealloc;
- (id *)license;
- (id)initWithFrame:(struct CGRect)arg1;

@end

