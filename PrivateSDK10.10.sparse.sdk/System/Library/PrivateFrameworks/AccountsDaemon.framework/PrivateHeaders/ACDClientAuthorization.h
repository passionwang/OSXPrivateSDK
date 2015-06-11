/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ACDClient, NSDictionary, NSSet;

@interface ACDClientAuthorization : NSObject
{
    BOOL _isGranted;
    ACDClient *_client;
    NSSet *_grantedPermissions;
    NSDictionary *_options;
}

@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(retain) NSSet *grantedPermissions; // @synthesize grantedPermissions=_grantedPermissions;
@property(retain) ACDClient *client; // @synthesize client=_client;
@property BOOL isGranted; // @synthesize isGranted=_isGranted;
- (void).cxx_destruct;
- (id)initForClient:(id)arg1;

@end

