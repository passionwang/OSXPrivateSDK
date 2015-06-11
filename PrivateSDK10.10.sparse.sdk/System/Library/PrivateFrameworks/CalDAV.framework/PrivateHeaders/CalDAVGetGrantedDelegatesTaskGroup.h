/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalDAV/CalDAVGetDelegatesBaseTaskGroup.h>

@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup
{
    int _state;
    BOOL _fetchPrincipalDetails;
}

@property(nonatomic) BOOL fetchPrincipalDetails; // @synthesize fetchPrincipalDetails=_fetchPrincipalDetails;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (void)_getChildProperties;
- (void)_expandPropertiesWithAllowWrite:(BOOL)arg1;
- (id)_urlAppendingSegmentWithAllowWrite:(BOOL)arg1;
- (void)_fetchOnlyHrefs;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;

@end

