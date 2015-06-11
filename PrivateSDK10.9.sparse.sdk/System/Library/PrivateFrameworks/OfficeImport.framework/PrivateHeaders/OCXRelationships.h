//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OCXRelationships : NSObject
{
    NSString *mPath;
    NSMutableArray *mRelationships;
    NSMutableDictionary *mRelationshipMap;
    unsigned long long mNextId;
}

- (id)idForKey:(id)arg1;
- (id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 external:(BOOL)arg4;
- (id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3;
- (BOOL)isEmpty;
- (id)path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

