//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface SOFaceTimeGroup : NSObject
{
    NSMutableArray *_abGroups;
    NSString *_groupName;
}

@property(readonly, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, nonatomic) NSArray *abGroups; // @synthesize abGroups=_abGroups;
- (id)removeABGroupWithUID:(id)arg1;
- (void)removeABGroup:(id)arg1;
- (void)addABGroup:(id)arg1;
- (BOOL)isABPersonGroupMember:(id)arg1;
- (void)renameTo:(id)arg1;
@property(readonly, nonatomic) NSArray *members;
- (id)description;
- (void)dealloc;
- (id)initWithGroupName:(id)arg1;

@end

