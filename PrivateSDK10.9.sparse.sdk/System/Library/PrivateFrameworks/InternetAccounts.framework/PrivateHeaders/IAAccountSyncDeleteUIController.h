//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IAAccountSyncDeleteUIController : NSObject
{
    CDUnknownBlockType _completion;
}

- (void)deleteAccountWithAccountSync:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)accountSyncDisabledAccountDeleteSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)accountSyncDeleteSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;

@end

