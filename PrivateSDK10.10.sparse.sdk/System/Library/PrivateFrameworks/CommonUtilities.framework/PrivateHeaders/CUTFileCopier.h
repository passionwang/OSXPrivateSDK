/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSURL;

@interface CUTFileCopier : NSObject
{
    BOOL _shouldCancel;
    BOOL _didErrorOccur;
    BOOL _inProgress;
    unsigned int _operation;
    id <CUTFileCopierDelegate> _delegate;
    NSURL *_inputURL;
    NSURL *_outputURL;
    id _identifier;
    void *_BOMCopier;
}

@property void *_BOMCopier; // @synthesize _BOMCopier;
@property unsigned int operation; // @synthesize operation=_operation;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(readonly, nonatomic) BOOL didErrorOccur; // @synthesize didErrorOccur=_didErrorOccur;
@property(readonly, nonatomic) BOOL wasCancelled; // @synthesize wasCancelled=_shouldCancel;
@property(readonly) id identifier; // @synthesize identifier=_identifier;
@property(readonly) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly) NSURL *inputURL; // @synthesize inputURL=_inputURL;
@property id <CUTFileCopierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_worker_doCopy;
- (void)_main_copierFinishedWithResult:(id)arg1;
- (void)cleanup;
- (void)cancel;
- (void)start;
- (void)_fillOutputURLFromInputURL;
- (id)_temporaryCopierPath;
- (void)dealloc;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned int)arg4 delegate:(id)arg5;

@end

