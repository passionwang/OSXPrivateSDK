/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenSharing/SSAddress.h>

@class NSString;

@interface SSUDPSocketAddress : SSAddress
{
    NSString *remoteIPPort;
}

@property(copy) NSString *remoteIPPort; // @synthesize remoteIPPort;
- (id)displayString;
- (id)initWithUDPSocket:(int)arg1;

@end

