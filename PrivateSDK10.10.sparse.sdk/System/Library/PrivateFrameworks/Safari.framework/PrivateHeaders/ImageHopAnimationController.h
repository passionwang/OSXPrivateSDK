/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSAnimationDelegate-Protocol.h"

@class NSImage, NSObject<ImageHopAnimationDelegate>, NSString, NSWindow;

// Not exported
@interface ImageHopAnimationController : NSObject <NSAnimationDelegate>
{
    NSWindow *_windowToAnimate;
    NSObject<ImageHopAnimationDelegate> *_delegate;
    NSImage *_hopImage;
    struct CGSize _initialImageSize;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

+ (struct CGSize)defaultInitialImageSize;
+ (id)defaultImage;
@property(readonly) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(readonly) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) struct CGSize initialImageSize; // @synthesize initialImageSize=_initialImageSize;
@property(retain, nonatomic) NSImage *hopImage; // @synthesize hopImage=_hopImage;
@property(nonatomic) __weak NSObject<ImageHopAnimationDelegate> *delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)startAnimationFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)windowToAnimate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

