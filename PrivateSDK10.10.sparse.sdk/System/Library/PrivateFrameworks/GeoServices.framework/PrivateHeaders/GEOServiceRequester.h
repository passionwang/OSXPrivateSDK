/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSMapTable;

@interface GEOServiceRequester : NSObject
{
    NSMapTable *_pendingRequests;
    NSLock *_pendingRequestsLock;
}

+ (id)_serviceTypeNumber;
+ (BOOL)shouldAttributeData;
+ (void)setAttributeData;
+ (id)_debugRequestName;
+ (unsigned long long)_urlType;
- (id)_validateResponse:(id)arg1;
- (void)_cancelRequest:(id)arg1;
- (void)_startWithRequest:(id)arg1 traits:(id)arg2 completionHandler:(id)arg3;
- (void)dealloc;
- (id)init;

@end

