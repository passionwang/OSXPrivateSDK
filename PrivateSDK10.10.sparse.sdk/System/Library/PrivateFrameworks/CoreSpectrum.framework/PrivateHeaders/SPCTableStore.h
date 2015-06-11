/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"
#import "SPCObjectArchival-Protocol.h"

@class NSArray, NSMutableArray, SPCTable, SPCTableUserKeyStore;

@interface SPCTableStore : NSObject <SPCObjectArchival, NSSecureCoding>
{
    SPCTable *_table;
    NSMutableArray *_mutableObjects;
    NSArray *_objectsCache;
    SPCTableUserKeyStore *_keyStore;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) SPCTableUserKeyStore *keyStore; // @synthesize keyStore=_keyStore;
@property(copy, nonatomic) NSArray *objectsCache; // @synthesize objectsCache=_objectsCache;
@property(readonly, nonatomic) NSMutableArray *mutableObjects; // @synthesize mutableObjects=_mutableObjects;
@property(nonatomic) SPCTable *table; // @synthesize table=_table;
- (id)description;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjects:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)createdObjectForIndex:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1 createIfNecessary:(BOOL)arg2;
- (void)enumerateObjectsUsingBlock:(id)arg1;
@property(readonly, nonatomic) unsigned long long objectCount;
@property(readonly, copy, nonatomic) NSArray *objects;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithKeyStore:(id)arg1 objects:(id)arg2;
- (id)init;
- (id)uniqueIdentifierForArchiving;

@end

