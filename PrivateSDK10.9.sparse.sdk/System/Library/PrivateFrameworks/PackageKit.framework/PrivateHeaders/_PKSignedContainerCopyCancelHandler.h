//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPayloadCopier;

@interface _PKSignedContainerCopyCancelHandler : NSObject
{
    PKPayloadCopier *_copier;
    BOOL _isCancelled;
    struct dispatch_queue_s *_syncQueue;
}

- (void)cancel;
- (void)setCopier:(id)arg1;
- (BOOL)isCancelled;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

