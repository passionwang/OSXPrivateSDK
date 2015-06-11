/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"

@class NSDictionary, NSSet, NSString;

@interface PKDiscoveryDriver : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    int _annotationNotifyToken;
    NSDictionary *_attributes;
    unsigned long long _flags;
    id _report;
    NSSet *_lastResults;
}

@property int annotationNotifyToken; // @synthesize annotationNotifyToken=_annotationNotifyToken;
@property(retain) NSSet *lastResults; // @synthesize lastResults=_lastResults;
@property(copy) id report; // @synthesize report=_report;
@property unsigned long long flags; // @synthesize flags=_flags;
@property(retain) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (void)cancel;
- (void)pluginsDidUninstall:(id)arg1;
- (void)pluginsDidInstall:(id)arg1;
- (void)performWithPreviousResults:(id)arg1 forceNotify:(BOOL)arg2;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1 flags:(unsigned long long)arg2 report:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

