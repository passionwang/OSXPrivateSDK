/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSVBNamedFault : NSObject
{
}

+ (void)exitIfShouldFault:(id)arg1;
+ (void)exitIfShouldFault:(id)arg1 format:(id)arg2;
+ (void)exitIfShouldFault:(id)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
+ (void)crashIfShouldFault:(id)arg1;
+ (void)crashIfShouldFault:(id)arg1 format:(id)arg2;
+ (void)crashIfShouldFault:(id)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
+ (void)raiseIfShouldFault:(id)arg1;
+ (void)raiseIfShouldFault:(id)arg1 format:(id)arg2;
+ (void)raiseIfShouldFault:(id)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
+ (void)_invokeIfShouldFault:(id)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3 block:(id)arg4;
+ (BOOL)sleep:(double)arg1 ifShouldFault:(id)arg2;
+ (BOOL)shouldFault:(id)arg1;

@end

