/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Install/IFInstallQueueElement.h>

@interface IFPruneLangsElement : IFInstallQueueElement
{
}

+ (BOOL)canRunForPackage:(id)arg1;
- (long long)run;
- (void)_pruneLanguagePaths:(id)arg1 withPackageController:(id)arg2;
- (id)logDescription;

@end

