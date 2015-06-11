/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface ACFNetworkInterface : NSObject
{
    struct __SCNetworkInterface *_ref;
}

+ (id)interfaceWithInterfaceType:(id)arg1;
+ (id)interfaceWithInterfaceRef:(struct __SCNetworkInterface *)arg1 interfaceType:(id)arg2;
+ (id)interfaceWithInterfaceRef:(struct __SCNetworkInterface *)arg1;
@property(readonly) struct __SCNetworkInterface *ref; // @synthesize ref=_ref;
- (id)description;
- (id)underlyingInterface;
- (id)underlyingInterfaceForInterfaceType:(id)arg1;
- (id)supportedProtocolTypes;
- (id)supportedInterfaceTypes;
- (id)localizedDisplayName;
- (id)BSDName;
- (id)MACAddress;
- (id)interfaceType;
- (id)init;
- (id)initWithInterfaceType:(id)arg1;
- (id)initWithInterfaceRef:(struct __SCNetworkInterface *)arg1 interfaceType:(id)arg2;
- (id)initWithInterfaceRef:(struct __SCNetworkInterface *)arg1;
- (void)finalize;
- (void)dealloc;

@end

