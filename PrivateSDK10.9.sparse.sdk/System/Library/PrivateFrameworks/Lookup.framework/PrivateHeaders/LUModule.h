//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSURLConnectionDelegate.h"

@class NSDate, NSMutableData, NSString, NSURLConnection, NSURLRequest;

@interface LUModule : NSViewController <NSURLConnectionDelegate>
{
    NSString *_searchTerm;
    NSString *_language;
    NSString *_partOfSpeech;
    BOOL _expanded;
    BOOL _expectsResults;
    BOOL _hasResults;
    BOOL _queryInProgress;
    NSDate *_queryBegin;
    NSDate *_queryEnd;
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_data;
}

+ (BOOL)hasDetailMode;
@property(retain) NSMutableData *data; // @synthesize data=_data;
@property(retain) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property(retain) NSDate *queryEnd; // @synthesize queryEnd=_queryEnd;
@property(retain) NSDate *queryBegin; // @synthesize queryBegin=_queryBegin;
@property(getter=isQueryInProgress) BOOL queryInProgress; // @synthesize queryInProgress=_queryInProgress;
@property BOOL hasResults; // @synthesize hasResults=_hasResults;
@property BOOL expectsResults; // @synthesize expectsResults=_expectsResults;
@property(getter=isExpanded, setter=setExpanded:) BOOL expanded; // @synthesize expanded=_expanded;
@property(retain) NSString *partOfSpeech; // @synthesize partOfSpeech=_partOfSpeech;
@property(retain) NSString *language; // @synthesize language=_language;
@property(retain) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
- (BOOL)processRequest:(id)arg1 data:(id)arg2;
- (void)cancelRequest;
- (void)startRequest:(id)arg1;
- (BOOL)languageIsUndetermined;
- (BOOL)languageIsPreferredLanguage;
- (void)scrollDown;
- (void)scrollUp;
- (id)moreDescription;
- (id)moreURL;
- (void)animationDidEnd:(BOOL)arg1;
- (void)animationWillBegin:(BOOL)arg1;
- (void)adjustLayout;
- (id)viewAnimationsForFrame:(struct CGRect)arg1 expanded:(BOOL)arg2;
- (BOOL)isCompact;
- (struct CGSize)idealSize;
- (void)lookupSearchTerm;
- (id)moduleSubtitle;
- (id)moduleName;
- (void)setSearchTerm:(id)arg1 language:(id)arg2 partOfSpeech:(id)arg3;
- (void)toggleExpandCollapse:(id)arg1;
- (BOOL)searchesNetwork;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)commonLUModuleTeardown;
- (void)finalize;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
@property(readonly) NSString *searchTermEscaped;

@end

