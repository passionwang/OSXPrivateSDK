/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface UXAlertAction : NSObject <NSCopying>
{
    NSString *_title;
    long long _style;
    BOOL _enabled;
    id _handler;
}

+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(id)arg3;
@property(copy) id handler; // @synthesize handler=_handler;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly) long long style; // @synthesize style=_style;
@property(readonly) NSString *title; // @synthesize title=_title;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

