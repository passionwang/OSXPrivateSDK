/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OSInstaller/OSIInstallQueueElement.h>

@interface OSIPreSizingElement : OSIInstallQueueElement
{
    unsigned long long _spaceNeededToInstall;
}

- (void)_updateProgressTimer:(id)arg1;
- (double)estimatedTimeToComplete;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;
- (id)initWithOptions:(id)arg1 requiredSpaceToInstall:(unsigned long long)arg2;

@end

