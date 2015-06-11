/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PrintingPrivate/PKMFPNode.h>

@class NSCountedSet, NSMutableArray;

@interface PKBonjourDevice : PKMFPNode
{
    NSCountedSet *registerationTypes;
    NSMutableArray *txtRecords;
}

+ (id)bonjourDeviceNamed:(id)arg1 type:(id)arg2 domain:(id)arg3;
@property(retain) NSMutableArray *txtRecords; // @synthesize txtRecords;
@property(retain) NSCountedSet *registerationTypes; // @synthesize registerationTypes;
- (id)matchingScannerKey;
- (BOOL)sameDevice:(id)arg1;
@property(readonly) BOOL fax; // @dynamic fax;
@property(readonly) BOOL local; // @dynamic local;
@property(readonly) BOOL shared; // @dynamic shared;
@property(readonly) BOOL secure; // @dynamic secure;
- (unsigned long long)deviceDisappearedAs:(id)arg1 domain:(id)arg2;
- (unsigned long long)deviceAppearedAs:(id)arg1 domain:(id)arg2;
- (BOOL)existsAsQueue:(id)arg1;
- (id)driverInfoFor:(id)arg1;
- (id)drivers;
- (id)URI;
- (id)URIForRecord:(id)arg1;
- (unsigned long long)attributes;
- (id)deviceID;
- (unsigned long long)kind;
- (void)dealloc;
- (id)initBonjourDeviceNamed:(id)arg1 type:(id)arg2 domain:(id)arg3;

@end

