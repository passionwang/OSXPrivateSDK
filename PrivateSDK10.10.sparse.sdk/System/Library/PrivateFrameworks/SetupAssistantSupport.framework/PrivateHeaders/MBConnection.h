/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNotificationCenter, NSString;

@interface MBConnection : NSObject
{
    NSNotificationCenter *_nc;
    id _delegate;
    NSString *_status;
}

- (BOOL)shouldTryPPPoE;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)cancel;
- (BOOL)isStillConnected;
- (void)disconnect;
- (BOOL)connect;
- (void)dealloc;
- (id)initForActivity:(id)arg1;

@end

