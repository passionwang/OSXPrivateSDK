//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/SheetWithTableController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MiscFormsDataEditor : SheetWithTableController
{
    NSArray *_domains;
    struct OwnPtr<Safari::ObjCNotifier> _notifier;
    BOOL _ignoreNotifications;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)removeAllItems:(id)arg1;
- (void)removeSelectedItems:(id)arg1;
- (void)hideSheet:(id)arg1;
- (void)showSheetInWindow:(id)arg1;
- (void)dealloc;
- (void)stopMonitoringFormData;
- (void)startMonitoringFormData;
- (void)domainsWithDataChanged:(id)arg1;
- (void)resetDomainsWithData;
- (void)awakeFromNib;

@end

