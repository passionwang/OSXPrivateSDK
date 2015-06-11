/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, WDDocument, WDTableCell;

// Not exported
@interface WDText : NSObject
{
    NSMutableArray *mBlocks;
    WDDocument *mDocument;
    int mTextType;
    WDTableCell *mTableCell;
}

- (id)description;
- (id)content;
- (BOOL)isEmpty;
- (id)newRunIterator;
- (id)runIterator;
- (id)newBlockIterator;
- (id)blockIterator;
- (int)tableNestingLevel;
- (void)removeLastBlock;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)addTableAtIndex:(int)arg1;
- (id)addTable;
- (id)addParagraphAtIndex:(int)arg1;
- (id)addParagraph;
- (id)tableCell;
- (int)textType;
- (id)document;
- (void)addBlock:(id)arg1;
- (unsigned long long)indexOfBlock:(id)arg1;
- (id)lastBlock;
- (id)blockAt:(unsigned long long)arg1;
- (unsigned long long)blockCount;
- (id)blocks;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3;
- (id)initWithDocument:(id)arg1 textType:(int)arg2;

@end

