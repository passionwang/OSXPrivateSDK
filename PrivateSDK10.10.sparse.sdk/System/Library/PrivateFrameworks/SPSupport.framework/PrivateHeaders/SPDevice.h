/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface SPDevice : NSObject
{
    unsigned int entry;
    NSMutableArray *children;
    NSMutableArray *volumes;
}

- (id)dictionaryRepresentation;
- (id)anonymousDictionaryRepresentationForVolume:(struct __DADisk *)arg1;
- (id)dictionaryRepresentationForVolume:(struct __DADisk *)arg1;
- (id)children;
- (void)dealloc;
- (id)initWithRegistryEntry:(unsigned int)arg1;

@end

