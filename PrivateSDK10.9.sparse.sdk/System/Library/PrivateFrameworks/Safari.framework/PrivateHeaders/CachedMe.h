//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CachedMe : NSObject
{
    struct RefPtr<Safari::AddressBookEntry> _cachedMe;
    BOOL _meNeedsUpdate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct AddressBookEntry *)me;
- (void)dealloc;
- (id)init;
- (void)_addressBookDataChanged:(id)arg1;

@end

