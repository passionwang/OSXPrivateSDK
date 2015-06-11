//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CoreDAVResourceTypeItem, CoreDAVSupportedReportSetItem, NSDictionary, NSSet, NSString, NSURL;

@interface CoreDAVContainer : NSObject
{
    BOOL _isUnauthenticated;
    NSURL *_url;
    CoreDAVResourceTypeItem *_resourceType;
    NSString *_containerTitle;
    NSSet *_privileges;
    NSString *_pushKey;
    NSDictionary *_pushTransports;
    NSURL *_resourceID;
    CoreDAVSupportedReportSetItem *_supportedReportSetItem;
    NSString *_quotaAvailable;
    NSString *_quotaUsed;
    NSURL *_owner;
    NSURL *_addMemberURL;
    NSDictionary *_bulkRequests;
    NSString *_syncToken;
}

+ (id)convertPushTransportsForNSServerNotificationCenter:(id)arg1;
+ (id)copyPropertyMappingsForParser;
@property(retain) NSString *syncToken; // @synthesize syncToken=_syncToken;
@property(retain) NSDictionary *bulkRequests; // @synthesize bulkRequests=_bulkRequests;
@property(retain) NSURL *addMemberURL; // @synthesize addMemberURL=_addMemberURL;
@property(retain) NSURL *owner; // @synthesize owner=_owner;
@property(retain) CoreDAVResourceTypeItem *resourceType; // @synthesize resourceType=_resourceType;
@property(retain) CoreDAVSupportedReportSetItem *supportedReportSetItem; // @synthesize supportedReportSetItem=_supportedReportSetItem;
@property(retain) NSString *quotaUsed; // @synthesize quotaUsed=_quotaUsed;
@property(retain) NSString *quotaAvailable; // @synthesize quotaAvailable=_quotaAvailable;
@property(retain) NSURL *resourceID; // @synthesize resourceID=_resourceID;
@property(retain) NSDictionary *pushTransports; // @synthesize pushTransports=_pushTransports;
@property(retain) NSString *pushKey; // @synthesize pushKey=_pushKey;
@property(retain) NSSet *privileges; // @synthesize privileges=_privileges;
@property(retain) NSString *containerTitle; // @synthesize containerTitle=_containerTitle;
@property BOOL isUnauthenticated; // @synthesize isUnauthenticated=_isUnauthenticated;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void)dealloc;
@property(readonly) BOOL supportsSyncCollectionReport;
@property(readonly) BOOL supportsPrincipalPropertySearchReport;
@property(readonly) NSSet *supportedReportsAsStringSet;
@property(readonly) BOOL hasBindPrivileges;
@property(readonly) BOOL hasWritePropertiesPrivileges;
@property(readonly) BOOL hasWriteContentPrivileges;
@property(readonly) BOOL hasReadPrivileges;
- (BOOL)_anyPrivilegesMatches:(CDUnknownBlockType)arg1;
@property(readonly) NSSet *privilegesAsStringSet;
@property(readonly) BOOL isPrincipal;
@property(readonly) NSSet *resourceTypeAsStringSet;
@property(readonly) NSSet *supportedReports;
- (void)applyParsedProperties:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 andProperties:(id)arg2;

@end

