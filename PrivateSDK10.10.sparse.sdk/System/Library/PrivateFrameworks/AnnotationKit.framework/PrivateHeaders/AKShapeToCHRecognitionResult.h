/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CHRecognitionResult, NSBezierPath;

@interface AKShapeToCHRecognitionResult : NSObject
{
    long long _tag;
    CHRecognitionResult *_result;
    NSBezierPath *_doodlePath;
}

@property(retain) NSBezierPath *doodlePath; // @synthesize doodlePath=_doodlePath;
@property(retain) CHRecognitionResult *result; // @synthesize result=_result;
@property long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)initWith:(long long)arg1 result:(id)arg2;

@end

