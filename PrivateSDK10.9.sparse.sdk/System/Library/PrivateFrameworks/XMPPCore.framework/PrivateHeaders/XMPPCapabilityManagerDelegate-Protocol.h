//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSSet, NSString, XMPPCapabilityManager, XMPPConnection;

@protocol XMPPCapabilityManagerDelegate
- (void)capabilityManagerHostFeaturesUpdated:(XMPPCapabilityManager *)arg1;
- (XMPPConnection *)capabilityManagerConnection:(XMPPCapabilityManager *)arg1;
- (void)capabilityManager:(XMPPCapabilityManager *)arg1 user:(NSString *)arg2 capabilitiesUpdated:(NSSet *)arg3;
- (void)capabilityManager:(XMPPCapabilityManager *)arg1 myCapabilitiesUpdated:(NSSet *)arg2;
@end

