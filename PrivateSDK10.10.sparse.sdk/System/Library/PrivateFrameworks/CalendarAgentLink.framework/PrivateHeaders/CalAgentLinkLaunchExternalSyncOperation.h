/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarAgentLink/CalAgentLinkOneWayOperation.h>

@class NSArray;

@interface CalAgentLinkLaunchExternalSyncOperation : CalAgentLinkOneWayOperation
{
    NSArray *_launchArguments;
    BOOL _delay;
}

@property BOOL delay; // @synthesize delay=_delay;
@property(retain, nonatomic) NSArray *launchArguments; // @synthesize launchArguments=_launchArguments;
- (id)inputPayload;
- (id)description;
- (void)dealloc;
- (id)initWithLaunchArguments:(id)arg1 shouldDelay:(BOOL)arg2;
- (id)init;

@end

