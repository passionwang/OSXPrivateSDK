//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMALRock.h>

@class NSObject, XMComponent;

@interface XMCopyRock : SMALRock
{
    XMComponent *_component;
    NSObject *_retryContext;
    unsigned long long _totalWrittenLength;
    id _delegate;
}

+ (BOOL)needsDirectAccessToSendOrReceiveResult;
+ (id)rockID;
@property(retain) NSObject *retryContext; // @synthesize retryContext=_retryContext;
@property(readonly) XMComponent *component; // @synthesize component=_component;
- (void)finishedFile:(id)arg1 length:(unsigned long long)arg2;
- (void)updatedFile:(id)arg1 partialLength:(unsigned long long)arg2;
- (id)localPathForFile:(id)arg1;
- (id)description;
- (id)result;
- (BOOL)returnsData;
- (BOOL)receiveResultOnFd:(int)arg1 atomicQueue:(id)arg2;
- (id)requestPayload;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)initWithComponent:(id)arg1;

@end

