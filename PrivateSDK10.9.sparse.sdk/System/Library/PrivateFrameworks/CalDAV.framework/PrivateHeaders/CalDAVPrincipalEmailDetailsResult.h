//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString, NSURL;

@interface CalDAVPrincipalEmailDetailsResult : NSObject
{
    NSString *_displayName;
    NSSet *_addresses;
    NSURL *_principalURL;
}

+ (id)resultFromResponseItem:(id)arg1;
@property(retain) NSURL *principalURL; // @synthesize principalURL=_principalURL;
@property(retain) NSSet *addresses; // @synthesize addresses=_addresses;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
- (void)dealloc;
- (id)description;

@end

