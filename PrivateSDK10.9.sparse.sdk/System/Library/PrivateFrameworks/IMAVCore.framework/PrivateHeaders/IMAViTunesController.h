//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class iTunesApplication;

@interface IMAViTunesController : NSObject
{
    iTunesApplication *_application;
    BOOL _didPause;
}

+ (id)sharedInstance;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (id)init;

@end

