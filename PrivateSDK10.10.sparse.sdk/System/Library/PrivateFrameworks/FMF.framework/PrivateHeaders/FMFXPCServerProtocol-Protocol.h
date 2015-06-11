/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol FMFXPCServerProtocol <NSObject>
- (oneway void)setExpiredInitTimestamp;
- (oneway void)sessionWasCreatedRefresh;
- (oneway void)forceRefresh;
- (oneway void)getAllLocations:(id)arg1;
- (oneway void)invalidateMappingPackets:(id)arg1 completion:(id)arg2;
- (oneway void)importMappingPacket:(id)arg1 completion:(id)arg2;
- (oneway void)stopSharingMyLocationToFamilyMemberWithDSID:(id)arg1 completion:(id)arg2;
- (oneway void)startSharingMyLocationToFamilyMemberWithDSID:(id)arg1 completion:(id)arg2;
- (oneway void)getHandlesWithPendingOffers:(id)arg1;
- (oneway void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (oneway void)getPendingFriendshipRequestsWithCompletion:(id)arg1;
- (oneway void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (oneway void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (oneway void)declineFriendshipRequest:(id)arg1 completion:(id)arg2;
- (oneway void)approveFriendshipRequest:(id)arg1 completion:(id)arg2;
- (oneway void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (oneway void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (oneway void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (oneway void)removeDevice:(id)arg1 completion:(id)arg2;
- (oneway void)isNetworkReachable:(id)arg1;
- (oneway void)allDevices:(id)arg1;
- (oneway void)deviceSharingLocation:(id)arg1;
- (oneway void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(id)arg3;
- (oneway void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (oneway void)setActiveDevice:(id)arg1 completion:(id)arg2;
- (oneway void)isMyLocationEnabled:(id)arg1;
- (oneway void)setHideMyLocationEnabled:(BOOL)arg1 completion:(id)arg2;
- (oneway void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (oneway void)getHandlesSharingMyLocationWithGroupId:(id)arg1 completion:(id)arg2;
- (oneway void)getHandlesSharingMyLocation:(id)arg1;
- (oneway void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(id)arg2;
- (oneway void)getHandlesSharingLocationsWithMe:(id)arg1;
- (oneway void)locationForHandle:(id)arg1 completion:(id)arg2;
- (oneway void)getCurrentTrackedHandles:(id)arg1;
- (oneway void)removeFriendHandles:(id)arg1;
- (oneway void)addFriendHandles:(id)arg1;
- (oneway void)fetchLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(id)arg4;
- (oneway void)fetchLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(id)arg4;
@end

