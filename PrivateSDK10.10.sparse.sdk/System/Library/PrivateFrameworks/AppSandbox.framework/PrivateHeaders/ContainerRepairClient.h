/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface ContainerRepairClient : NSObject
{
    NSString *_containerName;
    char *_logMessage;
    int _repairAttemptsCount;
    unsigned long long _result;
}

+ (BOOL)isNonRepairableError:(id)arg1;
- (void)doMessageTrace;
- (BOOL)updateError:(id *)arg1;
- (unsigned long long)doRepair;
- (void)dealloc;
- (id)initWithContainerName:(id)arg1;

@end

