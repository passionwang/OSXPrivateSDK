/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EDProcessor.h>

@class EDFormula, EDName, EDRowBlocks, EDSheet, OITSUIntDictionary, OITSUPointerKeyDictionary;

// Not exported
@interface EPFormulaCleaner : EDProcessor
{
    EDSheet *mCurrentSheet;
    EDFormula *mFormula;
    EDFormula *mTokensToClean;
    EDName *mParentName;
    int mRowOffset;
    int mColumnOffset;
    EDRowBlocks *mBaseFormulaRowBlocks;
    OITSUIntDictionary *mNameArrayedTestCache;
    OITSUIntDictionary *mNameCircularReferenceTestCache;
    OITSUPointerKeyDictionary *mContentOutOfLassoBoundsCache;
}

- (void)cleanFormula:(id)arg1 name:(id)arg2;
- (void)cleanFormula:(id)arg1 sheet:(id)arg2;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (_Bool)isObjectSupported:(id)arg1;
- (void)dealloc;
- (void)prepareToProcessFormula:(id)arg1 sheet:(id)arg2 name:(id)arg3;
- (void)reset;
- (void)reportWarning:(int)arg1 parameter:(id)arg2;
- (void)reportWarning:(int)arg1;
- (id)newFormulaToCleanFromSharedFormula:(id)arg1;
- (BOOL)doesNameIndexContainCircularReferences:(unsigned int)arg1 sheetIndex:(unsigned long long)arg2 previousNameIndexes:(set_55031187 *)arg3;
- (BOOL)isArrayedFormulaSupported:(id)arg1 allowSimpleRanges:(BOOL)arg2;
- (id)useEvaluationStackToGetParameter:(unsigned int)arg1 tokenIndex:(unsigned int)arg2 allReferencesAllowed:(_Bool)arg3 success:(_Bool *)arg4;
- (unsigned int)useEvaluationStackToGetParameter:(unsigned int)arg1 tokenIndex:(unsigned int)arg2;
- (_Bool)useEvaluationStackToCheckFunctionId:(int)arg1 functionName:(id)arg2 tokenIndex:(unsigned int)arg3;
- (void)applyMaxCellsInName:(id)arg1;
- (void)updateWorksheet:(id)arg1 row:(int)arg2 column:(int)arg3 inDictionary:(id)arg4;
- (_Bool)checkCustomFunction:(unsigned int)arg1;
- (_Bool)checkSupportedAddInName:(id)arg1 externalLink:(_Bool)arg2;
- (_Bool)checkFunctionId:(int)arg1 tokenIndex:(unsigned int)arg2;
- (_Bool)cleanName:(unsigned int)arg1 nameIndex:(unsigned int)arg2 sheetIndex:(unsigned long long)arg3 tokenOffset:(int *)arg4;
- (id)worksheetFromLinkReferenceIndex:(unsigned int)arg1;
- (_Bool)isLinkReferenceIndexSupported:(unsigned int)arg1 allowExternal:(_Bool)arg2;
- (_Bool)combineCellReferences:(unsigned int)arg1 tokenOffset:(int *)arg2;
- (_Bool)cleanRange:(unsigned int)arg1 tokenOffset:(int *)arg2;
- (_Bool)cleanUnion:(unsigned int)arg1;
- (_Bool)cleanFuncVar:(unsigned int)arg1;
- (_Bool)cleanFunc:(unsigned int)arg1;
- (_Bool)cleanNameX:(unsigned int)arg1 tokenOffset:(int *)arg2;
- (_Bool)cleanName:(unsigned int)arg1 tokenOffset:(int *)arg2;
- (_Bool)cleanArea3D:(unsigned int)arg1;
- (_Bool)cleanRef3D:(unsigned int)arg1;
- (_Bool)cleanArea:(unsigned int)arg1 updateSheet:(BOOL)arg2;
- (_Bool)cleanRef:(unsigned int)arg1 updateSheet:(BOOL)arg2;
- (_Bool)cleanArray:(unsigned int)arg1;
- (void)updateSheet:(id)arg1 rowMin:(int)arg2 rowMinRelative:(_Bool)arg3 rowMax:(int)arg4 rowMaxRelative:(_Bool)arg5 columnMin:(int)arg6 columnMinRelative:(_Bool)arg7 columnMax:(int)arg8 columnMaxRelative:(_Bool)arg9;
- (void)updateSheet:(id)arg1 row:(int)arg2 rowRelative:(_Bool)arg3 column:(int)arg4 columnRelative:(_Bool)arg5;
- (_Bool)isThereContentOutsideOfLassoBoundsForSheet:(id)arg1 rowMin:(int)arg2 rowMax:(int)arg3 columnMin:(int)arg4 columnMax:(int)arg5;
- (_Bool)isReferenceValidInLassoForSheet:(id)arg1 rowMin:(int)arg2 rowMinRelative:(_Bool)arg3 rowMax:(int)arg4 rowMaxRelative:(_Bool)arg5 columnMin:(int)arg6 columnMinRelative:(_Bool)arg7 columnMax:(int)arg8 columnMaxRelative:(_Bool)arg9;
- (_Bool)isReferenceValidInLassoForRow:(int)arg1 rowRelative:(_Bool)arg2 column:(int)arg3 columnRelative:(_Bool)arg4;
- (void)addOffsetsToRow:(int *)arg1 rowRelative:(_Bool)arg2 column:(int *)arg3 columnRelative:(_Bool)arg4;
- (_Bool)cleanTokenAtIndex:(unsigned int)arg1 tokenOffset:(int *)arg2;
- (void)cleanFormula:(id)arg1 sheet:(id)arg2 name:(id)arg3;

@end

