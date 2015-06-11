//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (CIMAdditions)
+ (struct USet *)ideographicCharacterSet;
+ (struct USet *)characterSetWithPattern:(id)arg1;
- (id)stringByConvertingZhuyinToInternalRepresentation;
- (id)stringByConvertingZhuyinToDisplayRepresentation;
- (id)stringByApplyingTransform:(id)arg1 reverse:(BOOL)arg2;
- (BOOL)isURISchemePrefix;
- (id)stringByRemovingPinyinToneMarks;
- (id)stringByConvertingPinyinToZhuyin;
- (id)stringByConvertingToneNumbersToToneMarks;
- (id)stringByApplyingPinyinToneMarkToFirstSyllableWithToneNumber:(unsigned long long)arg1;
- (BOOL)containsPinyinPunctuation;
- (BOOL)isPunctuation;
- (BOOL)containsEmoji;
- (BOOL)containsCJKVCharacters;
- (BOOL)containsOnlyIdeographicCharacters;
- (id)stringByConvertingToTraditional;
- (id)stringByConvertingToSimplified;
- (id)firstUTF32Character;
- (unsigned long long)UTF32Length;
- (BOOL)isSingleComposedCharacter;
- (BOOL)contentsExclusivelyInCharacterSet:(struct USet *)arg1;
@end

