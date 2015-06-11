//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DataDetectorsCore/DDUnaryOperator.h>

#import "NSCopying.h"

@interface DDRepeatMax : DDUnaryOperator <NSCopying>
{
    int _max;
}

- (BOOL)acceptEmptyWordWithManager:(id)arg1;
- (void)appendDescriptionToString:(id)arg1 depth:(int)arg2;
- (id)prettyPrintWithPriority:(int)arg1;
- (unsigned int)count;
- (id)initWithPattern:(id)arg1 repeatAtMost:(int)arg2;
- (id)symbolsInGrammar:(id)arg1 container:(id)arg2 withManager:(id)arg3;
- (id)monElement;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3;

@end

