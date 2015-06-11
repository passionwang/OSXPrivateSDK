/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PAMallocStackTreeFrame;

@interface PAMallocStackTree : NSObject
{
    PAMallocStackTreeFrame *root;
    unsigned long long totalBytes;
    unsigned long long totalNodes;
    unsigned long long totalFrames;
    BOOL isSymbolicated;
}

@property(readonly) unsigned long long totalNodes; // @synthesize totalNodes;
@property(readonly) unsigned long long totalBytes; // @synthesize totalBytes;
- (void)addMemAllocation:(id)arg1 atEquivalentBranchFromOtherTree:(id)arg2;
- (id)addBranchToTreeFromOtherTree:(id)arg1;
- (id)initWithSerializedMallocStackTree:(id)arg1 NewIndexToMallocStackNodeOut:(id **)arg2 WithStringsIndexArray:(id *)arg3;
- (void)serializeToBuffer:(void *)arg1 WithStrings:(id)arg2;
- (unsigned long long)totalFrames;
- (id)stringForTreeWithMemoryStats:(BOOL)arg1;
- (void)printTree;
- (void)symbolicateTreeWithTask:(unsigned int)arg1;
- (id)addAllocation:(id)arg1 WithTask:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end

