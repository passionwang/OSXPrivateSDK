//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DAVLock : ISS_DAVRequest
{
}

+ (id)relockRequestWithSession:(id)arg1 path:(id)arg2 lockToken:(id)arg3;
+ (id)relockRequestWithURL:(id)arg1 lockToken:(id)arg2;
+ (id)lockRequestWithSession:(id)arg1 path:(id)arg2 owner:(id)arg3;
+ (id)lockRequestWithURL:(id)arg1 owner:(id)arg2;
- (void)finalizeOperation;
- (id)dependenciesList;
- (int)lockTimeout;
- (id)lockToken;
- (id)initRelockWithSession:(id)arg1 path:(id)arg2 lockToken:(id)arg3;
- (id)initRelockWithURL:(id)arg1 lockToken:(id)arg2;
- (void)_initRelockRequestWithToken:(id)arg1;
- (id)initLockWithSession:(id)arg1 path:(id)arg2 owner:(id)arg3;
- (id)initLockWithURL:(id)arg1 owner:(id)arg2;
- (void)_initLockRequestWithOwner:(id)arg1;

@end

