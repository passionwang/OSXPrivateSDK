//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSRemoteViewMarshal.h"

@class NSRemoteView, NSViewBridge, NSViewRemoteBridge;

@interface NSRemoteViewMarshal : NSObject <NSRemoteViewMarshal>
{
    NSViewRemoteBridge *_bridge;
    NSRemoteView *_view;
    unsigned int _invalid:1;
}

+ (id)eventsInProgress;
@property(readonly) NSViewBridge *bridge; // @synthesize bridge=_bridge;
@property(readonly) NSRemoteView *view; // @synthesize view=_view;
- (void)retreatToConfigPhase;
- (void)sendKeyEventFromServiceAccessoryViewToRemoteAccessoryView:(id)arg1 eventOwner:(unsigned int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)endModalSession:(id)arg1;
- (void)beginModalSession:(id)arg1 title:(id)arg2 size:(struct CGSize)arg3 styleMask:(unsigned long long)arg4 serviceTrustsRemoteKeyEvents:(BOOL)arg5 withReply:(CDUnknownBlockType)arg6;
- (void)handleEventFromService:(id)arg1 eventOwner:(unsigned int)arg2 withReply:(CDUnknownBlockType)arg3;
- (BOOL)shouldSendEventToApplicationBypassingSubclasses;
- (void)orderWindow:(unsigned int)arg1 mode:(long long)arg2 relativeTo:(unsigned int)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)lastCallImpliedByAdvancingToRunPhase;
- (void)serviceAccessoryViewBecameFirstResponder:(unsigned long long)arg1;
- (void)serviceAccessoryViewResignedFirstResponder;
- (void)setAccessoryViewOrigin:(struct CGPoint)arg1;
- (void)forgetAccessoryView;
- (void)beginSheet:(id)arg1 modalForWindow:(id)arg2 size:(struct CGSize)arg3 isCritical:(BOOL)arg4 styleMask:(unsigned long long)arg5 withReply:(CDUnknownBlockType)arg6;
- (void)setServiceWindowStyleMask:(unsigned long long)arg1;
- (void)serviceWindowDidBecomeKey;
- (void)serviceWindowDidResignKey;
- (void)serviceWindowDidResize:(struct CGSize)arg1;
- (void)serviceHasFirstResponder:(int)arg1 inDirection:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)serviceHasInitialFirstResponder:(BOOL)arg1;
- (void)registerBridgeKey:(id)arg1 defaultObject:(id)arg2 owner:(unsigned char)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)setRemoteObject:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)exceptionSafeSetRemoteObject:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)setRemoteObjectOnMainThread:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)sendEventUpResponderChain:(id)arg1 eventOwner:(unsigned int)arg2;
- (void)serviceWindowReceivedLeftMouseDown;
- (void)serviceWindowWouldActivate;
- (void)updateContentMinSize:(struct CGSize)arg1;
- (void)updateAccessibilityChildren:(id)arg1;
- (void)discloseAccessoryView:(BOOL)arg1 withOffset:(struct CGPoint)arg2 andAnimationState:(int)arg3 andDuration:(double)arg4;
- (void)hasValidKeyViewInDirection:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (void)invalidate;
@property(readonly) BOOL isInvalid;

@end

