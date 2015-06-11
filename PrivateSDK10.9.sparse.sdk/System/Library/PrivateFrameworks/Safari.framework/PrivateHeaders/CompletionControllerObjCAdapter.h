//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

__attribute__((visibility("hidden")))
@interface CompletionControllerObjCAdapter : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
    struct CompletionController *_completionController;
}

- (void)completionListDidHide;
- (void)completionListDidShow;
- (void)invalidate;
- (struct CompletionController *)completionController;
- (id)initWithCompletionController:(struct CompletionController *)arg1;
- (void)completionListTableView:(id)arg1 mouseUpInRow:(long long)arg2;
- (long long)completionListTableViewUserInterfaceLayoutDirection:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)completionListTableView:(id)arg1 rowSpansAllColumns:(long long)arg2;
- (BOOL)completionListTableView:(id)arg1 rowIsChecked:(long long)arg2;
- (BOOL)completionListTableView:(id)arg1 rowIsSeparator:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_unregisterForCompletionAbortingNotifications;
- (void)_registerForCompletionAbortingNotifications;
- (void)_abortCompletionFromNotification:(id)arg1;

@end

