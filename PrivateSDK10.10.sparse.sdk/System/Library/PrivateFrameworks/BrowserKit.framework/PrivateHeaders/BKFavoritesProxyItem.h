/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <BrowserKit/BKItem-Protocol.h>
#import "BKItemDelete-Protocol.h"
#import "NSCoding-Protocol.h"

@class BKItemUniqueIdentifier, NSObject<BKItem>, NSString;

// Not exported
@interface BKFavoritesProxyItem : NSObject <NSCoding, BKItem, BKItemDelete>
{
    NSString *_itemDisplayName;
    NSString *_itemContentType;
    BKItemUniqueIdentifier *_itemUniqueIdentifier;
    NSObject<BKItem> *_actualItem;
    BOOL _itemExists;
}

- (id)_actualItem;
- (Class)browserKitUnderlyingClass;
- (BOOL)itemDelete;
- (BOOL)itemIsDeletable;
- (id)itemPasteboardDataTypes;
- (id)itemPasteboardObjectForType:(id)arg1;
- (id)itemUniqueIdentifier;
- (BOOL)itemIsLeaf;
- (id)itemKeys;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)initWithItemUniqueIdentifier:(id)arg1;

@end

