/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CKRecordID.h"

@interface CKRecordID (BRCItemAdditions)
+ (id)contentsRecordIDForItemID:(id)arg1 zoneName:(id)arg2;
+ (id)structureRecordIDForItemID:(id)arg1 zoneName:(id)arg2 forType:(BOOL)arg3;
- (BOOL)markServerItemDeadInContainer:(id)arg1 stateIsInconsistent:(BOOL)arg2;
- (id)brc_aliasTarget;
- (BOOL)brc_itemType;
- (id)brc_itemID;
@end

