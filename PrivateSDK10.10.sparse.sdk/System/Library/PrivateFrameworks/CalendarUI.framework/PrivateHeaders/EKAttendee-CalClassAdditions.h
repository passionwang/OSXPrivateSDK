/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "EKAttendee.h"

@class ABGroup;

@interface EKAttendee (CalClassAdditions)
+ (id)attendeeFromDictionary:(id)arg1;
+ (id)attendeeFromAttendeeRep:(id)arg1;
+ (id)attendeeFromPerson:(id)arg1 distributionIdentifier:(id)arg2;
+ (id)attendeeFromPerson:(id)arg1;
- (id)newPersonWithAddressBook:(id)arg1;
@property(readonly, nonatomic) ABGroup *abGroup;
- (id)dictionaryRepresentation;
- (id)displayString;
@end

