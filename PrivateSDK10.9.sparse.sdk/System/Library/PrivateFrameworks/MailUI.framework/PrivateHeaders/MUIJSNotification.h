//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface MUIJSNotification : NSObject
{
    NSString *_notificationName;
    NSString *_identifier;
    NSDictionary *_userInfo;
}

@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void)dealloc;
- (id)initWithName:(id)arg1 identifier:(id)arg2 userInfo:(id)arg3;

@end

