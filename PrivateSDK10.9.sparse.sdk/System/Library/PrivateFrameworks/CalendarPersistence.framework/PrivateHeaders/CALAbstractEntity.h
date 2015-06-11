//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "StoresUnrecognizedProperties.h"

@class CoreCalendarSource, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface CALAbstractEntity : NSObject <NSCoding, StoresUnrecognizedProperties>
{
    NSMutableDictionary *_properties;
    NSMutableArray *_subcomponents;
    CoreCalendarSource *_originRepository;
    id _privateID;
    NSMutableDictionary *_changelist;
    NSMutableArray *_subcomponentschangelist;
    int _status;
    int _commitcount;
    CALAbstractEntity *_undoTarget;
    NSDictionary *_unrecognizedProperties;
}

@property(retain) NSDictionary *unrecognizedProperties; // @synthesize unrecognizedProperties=_unrecognizedProperties;
@property(retain) CALAbstractEntity *undoTarget; // @synthesize undoTarget=_undoTarget;
- (BOOL)isOwnerAddress:(id)arg1 ignoreMeCard:(BOOL)arg2;
- (BOOL)isOwnerAddress:(id)arg1;
- (BOOL)isAddressMe:(id)arg1 ignoreMeCard:(BOOL)arg2;
- (BOOL)isAddressMe:(id)arg1;
- (Class)correspondingOccurrenceClass;
- (void)keepOnlySubComponentsOfClasses:(id)arg1;
- (void)removeAllSubComponentsOfClasses:(id)arg1;
- (void)keepOnlyPropertiesWithKeys:(id)arg1;
- (void)removeAllPropertiesWithKeys:(id)arg1;
- (void)copyUnrecognizedPropertiesFromElement:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyPropertiesFrom:(id)arg1;
- (id)deletedSubComponents;
- (id)dirtySubComponents;
- (id)subComponents;
- (BOOL)hasSubComponents;
- (void)removeSubComponent:(id)arg1;
- (void)addSubComponent:(id)arg1 duplicateCheck:(BOOL)arg2;
- (void)addSubComponent:(id)arg1;
- (void)reset;
- (void)finalize;
- (void)dealloc;
- (id)privateID;
- (BOOL)hasPrivateID;
- (void)setCommitStatus:(int)arg1;
- (int)commitStatus;
- (BOOL)dirty;
- (void)markAsClean;
- (void)restoreAsClean;
- (BOOL)hasDirtyPropertyAmong:(id)arg1;
- (id)dirtyProperties;
- (id)deletedProperties;
- (id)_dirtyPropertiesNames;
- (BOOL)hasDirtyProperty:(id)arg1;
- (BOOL)hasDirtySubcomponent;
- (void)computeUndoInManagedObjectContext:(id)arg1;
- (BOOL)isEqualToEntity:(id)arg1 ignoreProperties:(id)arg2 useCommittedValues:(BOOL)arg3;
- (BOOL)isEqualToEntity:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)moveToRepository:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)setRepository:(id)arg1;
- (id)repository;
- (void)deleteFromRepositoryInManagedObjectContext:(id)arg1;
- (BOOL)detached;
- (void)unregisterFromUndo;
- (void)commitInManagedObjectContext:(id)arg1;
- (void)actualCommitWithUndo:(BOOL)arg1 inManagedObjectContext:(id)arg2;
- (id)checkValidity;
- (BOOL)isValidStatus:(int)arg1;
- (id)properties;
- (void)setProperties:(id)arg1;
- (void)_setProperties:(id)arg1;
- (id)committedPropertyForName:(id)arg1;
- (id)dirtyPropertyForName:(id)arg1;
- (id)propertyForName:(id)arg1;
- (void)removePropertyValue:(id)arg1 forName:(id)arg2;
- (void)addPropertyValue:(id)arg1 withValue:(id)arg2;
- (BOOL)hasProperty:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)removeProperty:(id)arg1;
- (void)registerUndoCommitInManagedObjectContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

