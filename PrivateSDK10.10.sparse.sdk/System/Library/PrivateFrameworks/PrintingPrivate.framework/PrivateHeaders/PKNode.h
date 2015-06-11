/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface PKNode : NSObject
{
    id _properties;
}

+ (id)stringRepresentation:(id)arg1;
+ (id)dictionaryRepresentation:(id)arg1;
+ (BOOL)supportsScanning:(id)arg1;
+ (BOOL)supportsURF:(id)arg1;
+ (BOOL)supportsPCL:(id)arg1;
+ (BOOL)supportsPDF:(id)arg1;
+ (BOOL)supportsPostscript:(id)arg1;
+ (id)authenticationInfo:(id)arg1;
+ (id)softwareUpdateRepresentation:(id)arg1;
+ (id)rp:(id)arg1;
+ (id)uuid:(id)arg1;
+ (id)name:(id)arg1;
+ (id)priority:(id)arg1;
+ (id)product:(id)arg1;
+ (id)model:(id)arg1;
+ (id)make:(id)arg1;
+ (id)serialNumber:(id)arg1;
+ (id)commandSet:(id)arg1;
+ (id)searchForString:(id)arg1 deviceID:(id)arg2;
+ (id)searchForKeys:(id)arg1 deviceID:(id)arg2;
- (long long)compare:(id)arg1;
- (BOOL)existsAsQueue:(id)arg1;
- (id)driverInfoFor:(id)arg1;
@property(readonly) NSArray *drivers;
@property(readonly) NSString *URI; // @dynamic URI;
@property(readonly) NSArray *children; // @dynamic children;
@property(readonly) unsigned long long attributes; // @dynamic attributes;
@property(readonly) PKNode *parent; // @dynamic parent;
@property(readonly) id deviceID; // @dynamic deviceID;
@property(readonly) NSString *iconPath; // @dynamic iconPath;
@property(readonly) NSString *note; // @dynamic note;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) unsigned long long kind; // @dynamic kind;
@property id <PKNodeDelegate> delegate; // @dynamic delegate;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setProperties:(id)arg1;
- (id)properties;

@end

