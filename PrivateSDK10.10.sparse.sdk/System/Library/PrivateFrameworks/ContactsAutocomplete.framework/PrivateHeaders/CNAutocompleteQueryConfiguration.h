/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CNAutocompleteFetchRequest, CNAutocompleteNetworkActivityPolicy, CNAutocompleteQuery, NSMutableArray;

@interface CNAutocompleteQueryConfiguration : NSObject
{
    CNAutocompleteFetchRequest *_request;
    CNAutocompleteQuery *_query;
    NSMutableArray *_executors;
    NSMutableArray *_executionOperations;
    NSMutableArray *_reportingOperations;
    CNAutocompleteNetworkActivityPolicy *_networkActivityPolicy;
}

+ (id)configurationWithRequest:(id)arg1 query:(id)arg2;
+ (void)configureQuery:(id)arg1 forRequest:(id)arg2 withConfiguration:(id)arg3;
- (void).cxx_destruct;
- (void)configureExecutionOperation:(id)arg1 toUseReportingOperation:(id)arg2;
- (id)executionOperationsWithReportingOperation:(id)arg1;
- (id)reportingOperationForExecutor:(id)arg1;
- (id)executionOperationForExecutor:(id)arg1;
- (id)makeReportOperationWithExecutor:(id)arg1;
- (id)makeExecutionOperationWithExecutor:(id)arg1 reportingOperation:(id)arg2;
- (id)makeDidFinishOperation;
- (id)makeNetworkActivityEndedOperationWithExecutors:(id)arg1;
- (id)makeNetworkActivityBeganOperationWithExecutors:(id)arg1;
- (id)makeNetworkActivityOperations;
- (id)protocolOperations;
- (id)indexesOfAllowedExecutors;
- (id)uniqueWorkOperations;
- (void)applyConfiguration;
- (void)holdResultsFromExecutor:(id)arg1 untilResultsHaveBeenReturnedByExecutor:(id)arg2;
- (void)returnResultsFromExecutor:(id)arg1 withResultsFromExecutor:(id)arg2;
- (void)addExecutor:(id)arg1;
- (void)setNetworkActivityPolicy:(id)arg1;
- (id)initWithRequest:(id)arg1 query:(id)arg2;

@end

