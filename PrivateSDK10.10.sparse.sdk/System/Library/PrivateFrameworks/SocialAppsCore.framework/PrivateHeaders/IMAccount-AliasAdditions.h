/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IMAccount.h"

@interface IMAccount (AliasAdditions)
- (id)loginName;
- (id)phoneNumberAlias;
- (id)allAliases;
- (long long)numberOfActiveAliases;
- (BOOL)isAliasActivated:(id)arg1;
- (double)timeIntervalSinceEmailWasSentForAlias:(id)arg1;
- (void)removeCreationMarker:(id)arg1;
- (void)setCreationMarker:(id)arg1;
@end

