/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SADomainSearchResults.h>

@class NSArray;

@interface SANewsSearchResults : SADomainSearchResults
{
}

+ (id)searchResultsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchResults;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *results;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

