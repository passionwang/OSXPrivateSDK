/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface CALSoundFile : NSObject
{
    int _type;
    NSString *_name;
    NSString *_extension;
}

- (void).cxx_destruct;
- (long long)compareTypeThenName:(id)arg1;
- (long long)compareNameThenType:(id)arg1;
- (long long)compareType:(id)arg1;
- (long long)compareName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(int)arg1;
- (id)pathWithoutExtension;
- (id)path;
- (id)name;
- (int)type;
- (id)initWithName:(id)arg1 type:(int)arg2 extension:(id)arg3;

@end

