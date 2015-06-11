//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError, SUDownloadAndVerifyOperation, SUProduct;

@interface SUProductDownloadOperation : NSOperation
{
    SUProduct *_product;
    BOOL _backgroundPriority;
    id delegate;
    unsigned long long _totalLength;
    unsigned long long _finishedLength;
    SUDownloadAndVerifyOperation *_downloadOp;
    BOOL _isCancelled;
    struct dispatch_queue_s *_opQueue;
    NSError *_error;
}

@property id delegate; // @synthesize delegate;
@property BOOL backgroundPriority; // @synthesize backgroundPriority=_backgroundPriority;
- (id)error;
- (BOOL)isCancelled;
- (float)averageBytesPerSecond;
- (double)progress;
- (unsigned long long)totalLength;
- (unsigned long long)currentLength;
- (void)cancel;
- (void)main;
- (id)product;
- (void)dealloc;
- (id)initWithProduct:(id)arg1;

@end

