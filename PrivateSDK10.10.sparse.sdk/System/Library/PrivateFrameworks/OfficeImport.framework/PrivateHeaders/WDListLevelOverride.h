/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WDDocument, WDListLevel;

// Not exported
@interface WDListLevelOverride : NSObject
{
    WDDocument *mDocument;
    WDListLevel *mListLevel;
    unsigned char mLevel;
    long long mStartNumber;
    BOOL mStartNumberOverridden;
}

- (id)description;
- (BOOL)isListLevelOverridden;
- (id)mutableListLevel;
- (id)listLevel;
- (BOOL)isStartNumberOverridden;
- (void)setStartNumber:(long long)arg1;
- (long long)startNumber;
- (unsigned char)level;
- (id)initWithDocument:(id)arg1 level:(unsigned char)arg2;
- (void)dealloc;

@end

