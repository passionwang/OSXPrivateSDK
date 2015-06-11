/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CNContact, CNContactStore, NSCache, NSObject<OS_dispatch_queue>;

@interface CalContactProvider : NSObject
{
    CNContactStore *_contactStore;
    CNContact *_cachedMe;
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSCache *_emailToPersonCache;
}

+ (id)defaultProvider;
@property(retain, nonatomic) NSCache *emailToPersonCache; // @synthesize emailToPersonCache=_emailToPersonCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(retain, nonatomic) CNContact *cachedMe; // @synthesize cachedMe=_cachedMe;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (id)_unifiedContactForPerson:(id)arg1;
- (void)_addressBookChangedExternally:(id)arg1;
- (BOOL)idIsMe:(id)arg1;
- (id)myShortDisplayName;
- (id)myNickName;
- (id)myLastName;
- (id)myFirstName;
- (id)myAddressForLabel:(id)arg1;
- (id)myWorkAddress;
- (id)myHomeAddress;
- (id)_fetchUnifiedMeContact;
- (id)unifiedMeContact;
- (id)personWithEmailAddress:(id)arg1;
- (void)peopleWithEmailAddresses:(id)arg1 completionBlock:(id)arg2;
- (id)personWithIdentifier:(id)arg1;
- (id)init;

@end

