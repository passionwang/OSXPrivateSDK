/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol SMSlingShotDelegate
- (void)BOMCopierCopyFileFinished:(struct _BOMCopier *)arg1:(const char *)arg2:(int)arg3:(long long)arg4:(int)arg5;
- (void)BOMCopierCopyFileUpdate:(struct _BOMCopier *)arg1:(const char *)arg2:(long long)arg3;
- (int)BOMCopierFileError:(struct _BOMCopier *)arg1:(const char *)arg2:(int)arg3;
- (void)BOMCopierFatalFileError:(struct _BOMCopier *)arg1:(const char *)arg2:(int)arg3;
- (void)BOMCopierFatalError:(struct _BOMCopier *)arg1:(const char *)arg2;
@end

