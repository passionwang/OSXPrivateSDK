//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSHashTable, NSString, SGTQueryGeniusReserved;

@interface SGTQueryGenius : NSObject
{
    NSDictionary *shortNameToAttributes;
    NSArray *allAttributeNames;
    NSArray *scopeOrder;
    NSHashTable *registeredSuggesters;
    BOOL usesSimpleTokens;
    void *q;
    SGTQueryGeniusReserved *_reserved;
}

+ (id)uniquifierStringForSuggestion:(id)arg1;
+ (void)setUniquifierString:(id)arg1 forSuggestion:(id)arg2;
+ (id)_propertyListFromSuggestion:(id)arg1 identifier:(id)arg2 representedObjectAsPlist:(id)arg3;
+ (id)tokenImageForScope:(long long)arg1 suggestion:(id)arg2;
+ (id)tokenTitleForScope:(long long)arg1 suggestion:(id)arg2;
+ (id)_tokenImageForScope:(long long)arg1 suggestion:(id)arg2;
+ (long long)_scopeFromAttributeName:(id)arg1;
+ (id)_attributeToScope;
+ (id)scopeOrderForRegularMailbox;
+ (id)scopeOrderForSentMailbox;
+ (id)geniusForMails;
+ (id)geniusForFiles;
@property(readonly) BOOL usesSimpleTokens; // @synthesize usesSimpleTokens;
@property(copy) NSArray *scopeOrder; // @synthesize scopeOrder;
@property(readonly) NSArray *allAttributeNames; // @synthesize allAttributeNames;
- (id)rawQueryStringFromInputString:(id)arg1;
- (id)_searchPaths;
- (id)uniquifierStringForSuggestion:(id)arg1 inCategory:(id)arg2;
- (void)postProcessSuggestions:(id)arg1 inCategory:(id)arg2;
- (id)_staticSuggestionDisplayNames;
- (id)_registeredSuggesters;
- (void)_unregisterSuggester:(id)arg1;
- (void)_registerSuggester:(id)arg1;
- (id)propertyListFromSuggestion:(id)arg1;
- (id)suggestionFromPropertyList:(id)arg1;
- (id)representedObjectFromPropertyList:(id)arg1;
- (id)propertyListForRepresentedObject:(id)arg1;
- (BOOL)hasMenuForSuggestion:(id)arg1;
- (id)menuForSuggestion:(id)arg1;
- (BOOL)hasScopeMenuForSuggestion:(id)arg1;
- (id)scopeMenuForSuggestion:(id)arg1;
- (id)queryScopesForSuggestions:(id)arg1;
- (id)searchPhraseForSuggestions:(id)arg1;
- (id)queryStringForSuggestions:(id)arg1;
- (id)filterQueryStringForSuggestions:(id)arg1;
- (id)_shorterDisplayNameForSuggestionWithCache:(id)arg1;
- (id)_shorterDisplayNameForSuggestion:(id)arg1;
- (id)displayNameForSuggestionInMenu:(id)arg1;
- (id)imageForSuggestion:(id)arg1;
- (long long)fallbackScope;
- (id)allAttributeNamesForSuggestion:(id)arg1;
- (id)displayNameForScope:(long long)arg1;
- (long long)_nextScopeForSuggestion:(id)arg1;
- (long long)_fallbackScope;
- (id)_invalidScopeDisplayNameForScope:(long long)arg1;
- (long long)defaultScopeForAttributeNames:(id)arg1;
- (id)scopesForAttributeNames:(id)arg1;
- (BOOL)attributeName:(id)arg1 isValidForScope:(long long)arg2;
- (long long)scopeForAttributeName:(id)arg1;
- (void)setScopeOrderWithScopes:(long long)arg1;
- (id)suggestionForString:(id)arg1;
- (id)searchStringForSuggestion:(id)arg1;
- (id)attributesForShortName:(id)arg1;
@property(readonly) NSString *identifier;
- (void)finalize;
- (void)dealloc;
- (void)_waitForAttributeMappingToBeReady;
- (id)initWithAttributeNames:(id)arg1;
- (id)overridenAttributes;
- (void)suggesterBecomesIdle:(id)arg1;
- (void)suggester:(id)arg1 didFinishProcessingResultsForInput:(id)arg2;
- (id)suggester:(id)arg1 filterSuggestions:(id)arg2 forInput:(id)arg3;
- (id)suggester:(id)arg1 filterSuggestion:(id)arg2 fromItem:(id)arg3 forInput:(id)arg4;
- (id)suggester:(id)arg1 additionalSuggestionsForInput:(id)arg2;
- (void)suggester:(id)arg1 willStartProcessingResultsForInput:(id)arg2;
- (void)suggester:(id)arg1 willStartSearchingSuggestionsForInput:(id)arg2;

@end

