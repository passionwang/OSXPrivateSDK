/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol ACDAccountNotificationPlugin <NSObject>

@optional
- (void)account:(id)arg1 didPerformActionsForDataclasses:(id)arg2;
- (void)account:(id)arg1 willPerformActionsForDataclasses:(id)arg2;
- (void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
- (BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
- (BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2;
@end

