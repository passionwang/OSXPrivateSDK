/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableString;

// Not exported
@interface PptTextBlock : NSObject
{
    struct PptTextHeaderAtom *mTextHeader;
    NSMutableString *mText;
    struct PptTextBlockStylingAtom *mStyleText;
    NSMutableArray *mMetaCharacterFields;
    NSMutableArray *mBookmarks;
    NSMutableArray *mHyperlinks;
    struct PptTextRulerAtom *mTextRuler;
}

- (struct PptCharRun *)characterRunAtIndex:(int)arg1;
- (int)characterRunCount;
- (struct PptParaRun *)paragraphRunAtIndex:(int)arg1;
- (int)paragraphRunCount;
- (struct PptTextRulerAtom *)textRuler;
- (id)bookmarks;
- (id)hyperlinks;
- (id)metaCharacterFields;
- (id)text;
- (unsigned int)textIndex;
- (int)textType;
- (void)writeTextBlock:(id)arg1;
- (void)readTextBlock:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg1;
- (void)readStyles:(id)arg1;
- (void)readString:(id)arg1;

@end

