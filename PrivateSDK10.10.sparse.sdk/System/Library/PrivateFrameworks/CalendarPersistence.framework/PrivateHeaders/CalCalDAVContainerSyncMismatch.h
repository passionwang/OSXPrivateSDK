/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURL;

@interface CalCalDAVContainerSyncMismatch : NSObject
{
    NSURL *_url;
    NSString *_serverETag;
    NSURL *_folderURL;
    NSString *_cTag;
    NSString *_syncToken;
    int _mismatchType;
}

@property int mismatchType; // @synthesize mismatchType=_mismatchType;
@property(retain) NSString *syncToken; // @synthesize syncToken=_syncToken;
@property(retain) NSString *cTag; // @synthesize cTag=_cTag;
@property(retain) NSURL *folderURL; // @synthesize folderURL=_folderURL;
@property(retain) NSString *serverETag; // @synthesize serverETag=_serverETag;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void)dealloc;

@end

