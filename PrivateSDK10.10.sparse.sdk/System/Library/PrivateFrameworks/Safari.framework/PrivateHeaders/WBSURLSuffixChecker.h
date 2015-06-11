/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

// Not exported
@interface WBSURLSuffixChecker : NSObject
{
    struct {
        unsigned short _field1[27];
    } *_trie;
    unsigned int _trieNodeCount;
    unsigned long long _maxLength;
    NSMutableArray *_failedSuffixes;
}

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)hasSuffix:(id)arg1;
- (id)initWithSuffixes:(id)arg1;
- (void)addStringToFailedSuffixes:(id)arg1;
- (BOOL)insertString:(id)arg1 intoTrieWithCache:(CDStruct_f2b84ca7 *)arg2;

@end

