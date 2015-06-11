//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectID, NSSet, NSString, NSURL;

@protocol EKProtocolCalendar <NSObject>
@property(readonly, nonatomic) NSURL *publishURL;
@property(readonly, nonatomic) NSURL *prePublishURL;
@property(readonly, nonatomic) BOOL defaultOrganizerIsMeForNewItems;
@property(readonly, nonatomic) NSURL *defaultOrganizerAddressForNewItems;
@property(readonly, nonatomic) NSString *defaultOrganizerNameForNewItems;
@property(readonly, nonatomic) NSString *sharedOwnerAddress;
@property(readonly, nonatomic) NSString *sharedOwnerName;
@property(readonly, nonatomic) NSString *sharingStatusString;
@property(readonly, nonatomic) id <EKProtocolCalendarSource> containerSource;
@property(readonly, nonatomic) BOOL isShareable;
@property(readonly, nonatomic) BOOL isRenameable;
@property(readonly, nonatomic) BOOL isDeletable;
@property(readonly, nonatomic) BOOL isSubscribed;
@property(readonly, nonatomic) BOOL allowEvents;
@property(readonly, nonatomic) BOOL allowReminders;
@property(readonly, nonatomic) BOOL allowsContentModifications;
@property(readonly, nonatomic) NSString *colorString;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSString *calendarIdentifier;
- (BOOL)isFrozen;
- (NSSet *)sharees;
- (int)displayOrder;
- (NSString *)title;
@end

