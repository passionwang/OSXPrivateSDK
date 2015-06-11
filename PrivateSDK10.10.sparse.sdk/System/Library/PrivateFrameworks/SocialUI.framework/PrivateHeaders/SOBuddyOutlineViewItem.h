/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface SOBuddyOutlineViewItem : NSObject
{
    NSMutableArray *_handles;
    NSString *_displayID;
    NSString *_personUniqueID;
}

@property(readonly, nonatomic) NSArray *handles; // @synthesize handles=_handles;
@property(retain, nonatomic) NSString *personUniqueID; // @synthesize personUniqueID=_personUniqueID;
@property(retain, nonatomic) NSString *displayID; // @synthesize displayID=_displayID;
- (void).cxx_destruct;
- (void)removeHandle:(id)arg1;
- (void)addHandle:(id)arg1;
- (id)init;

@end

