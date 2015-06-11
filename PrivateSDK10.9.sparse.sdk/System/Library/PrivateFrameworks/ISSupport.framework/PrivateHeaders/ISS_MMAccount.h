//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISS_MMCredential.h"
#import "ISS_MMPrincipal.h"

@class NSString;

@interface ISS_MMAccount : NSObject <ISS_MMCredential, ISS_MMPrincipal>
{
    id _identity;
    NSString *_principalID;
}

+ (id)principalIDWithName:(id)arg1 andOwner:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)_diskURL;
- (void)_setDiskHost:(id)arg1 port:(int)arg2 scheme:(id)arg3;
- (id)_userAgent;
- (id)managedName;
- (void)setManagedName:(id)arg1;
- (void)_setPassword:(id)arg1;
- (void)_setName:(id)arg1;
- (void)_setApplicationPrefix:(id)arg1;
- (id)_applicationPrefix;
- (void)_setApplicationID:(id)arg1;
- (void)setApplicationID:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (id)applicationName;
- (id)applicationID;
- (id)owner;
- (id)password;
- (id)name;
- (id)init;
- (id)principalID;
- (id)initWithName:(id)arg1 password:(id)arg2 applicationID:(id)arg3;

@end

