/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PackageKit/PKMutableDistributionContainer.h>

@class NSString;

@interface PKFlatDistributionContainer : PKMutableDistributionContainer
{
    NSString *_path;
}

- (BOOL)commitReturningError:(id *)arg1;
- (BOOL)setResourceData:(id)arg1 forKey:(id)arg2 forLocalization:(id)arg3;
- (BOOL)setStringsData:(id)arg1 forLocalization:(id)arg2;
- (BOOL)setDistributionFromContainer:(id)arg1;
- (id)_resourceDataForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (id)stringsDictionary;
- (void)dealloc;
- (id)initWithPath:(id)arg1 forWriting:(BOOL)arg2 error:(id *)arg3;

@end

