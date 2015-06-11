/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ABCardCollectionViewDataSource-Protocol.h"
#import "ABCardCollectionViewDelegate-Protocol.h"

@class ABAddressBook, ABCollectionViewItemFactory, AKCardViewDataSource, CNContact, CNContactListCellView, CNContactPickerCardViewStyleProvider, CNContactStore, NSArray, NSString;

@interface CNContactListCellViewController : NSObject <ABCardCollectionViewDataSource, ABCardCollectionViewDelegate>
{
    ABCollectionViewItemFactory *_itemFactory;
    AKCardViewDataSource *_dataSource;
    CNContactStore *_contactStore;
    ABAddressBook *_addressBook;
    CNContactPickerCardViewStyleProvider *_styleProvider;
    NSString *_contactIdentifier;
    NSString *_linkIdentifier;
    BOOL _expanded;
    CNContactListCellView *_cellView;
    id <CNContactListCellViewControllerDelegate> _delegate;
    NSArray *_displayedKeys;
}

@property(copy) NSArray *displayedKeys; // @synthesize displayedKeys=_displayedKeys;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property __weak id <CNContactListCellViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak CNContactListCellView *cellView; // @synthesize cellView=_cellView;
- (void).cxx_destruct;
- (id)scopeForItem:(id)arg1;
- (void)itemWasClicked:(id)arg1;
- (BOOL)isEditing;
- (id)collectionItems;
- (BOOL)isMe;
- (BOOL)hasValuesForDisplayedKeys;
- (BOOL)hasDisplayedKeys;
- (BOOL)shouldEnableCell;
- (id)fetchContact;
- (id)makeDataSource;
- (void)refreshCollectionView;
- (void)setEntry:(id)arg1;
@property(readonly) CNContact *contact;
- (void)setAddressBook:(id)arg1;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

