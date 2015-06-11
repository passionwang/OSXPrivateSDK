//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RWIDevice;

@interface RWIServiceConnection : NSObject
{
    RWIDevice *_device;
    id <RWIServiceConnectionDelegate> _delegate;
}

@property(retain) RWIDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) id <RWIServiceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_dispatchMessage:(id)arg1;
- (BOOL)isConnected;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 delegate:(id)arg2;

@end

