/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSString, WBSOpenSearchDescription;

// Not exported
@interface WBSQuickWebsiteSearchProvider : NSObject
{
    NSString *_displayName;
    NSString *_hostname;
    NSString *_sourcePageURLString;
    NSDate *_dateAdded;
    NSString *_searchURLTemplateStringFromForm;
    NSString *_openSearchDescriptionURLString;
    NSDate *_dateOfLastSearch;
}

@property(copy, nonatomic) NSDate *dateOfLastSearch; // @synthesize dateOfLastSearch=_dateOfLastSearch;
@property(copy, nonatomic) NSString *openSearchDescriptionURLString; // @synthesize openSearchDescriptionURLString=_openSearchDescriptionURLString;
@property(copy, nonatomic) NSString *searchURLTemplateStringFromForm; // @synthesize searchURLTemplateStringFromForm=_searchURLTemplateStringFromForm;
@property(readonly, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(readonly, nonatomic) NSString *sourcePageURLString; // @synthesize sourcePageURLString=_sourcePageURLString;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *hostname;
@property(readonly, nonatomic) NSString *displayName;
- (id)searchURLStringForQueryString:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSString *urlTemplateStringForSuggestionsInJSON;
@property(readonly, nonatomic) NSString *searchURLTemplateString;
@property(readonly, nonatomic) WBSOpenSearchDescription *openSearchDescription;
- (id)initWithSourcePageURLString:(id)arg1 openSearchDescriptionURLString:(id)arg2;
- (id)initWithSourcePageURLString:(id)arg1 searchURLTemplateStringFromForm:(id)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)searchWithQuery:(id)arg1 windowPolicy:(long long)arg2 tabPlacementHint:(const struct TabPlacementHint *)arg3 inBrowserWindow:(id)arg4;
- (id)_tabTitleWithQuery:(id)arg1;
- (id)_searchURLWithQuery:(id)arg1;

@end

