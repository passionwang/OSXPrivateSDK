/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFontDescriptor, NSMapTable;

@interface __NSFontTypefaceInfo : NSObject
{
    long long _retainCount;
    NSFontDescriptor *_normalizedFontDescriptor;
    NSMapTable *_liveInstances;
    struct __CFString *_postscriptName;
    struct __CFString *_familyName;
    struct __CFCharacterSet *_characterCoverage;
    double *_glyphAdvancementCache;
    struct CGSize *_verticalOriginDeltaCache;
    unsigned short *_latin1MappingTable;
    unsigned long long _hash;
    struct {
        unsigned int _isDefaultFace:1;
        unsigned int _hasKernPair:1;
        unsigned int _checkedLatin1Table:1;
        unsigned int _isSymbol:1;
        unsigned int _isDingbats:1;
        unsigned int _isDefaultFixedPitch:1;
        unsigned int _isIdealMetricsOnly:1;
        unsigned int _hasColorGlyphs:1;
        unsigned int _needValidation:1;
        unsigned int _hasVerticalMetrics:2;
        unsigned int _isLucidaGrande:1;
        unsigned int _isHiragino:1;
        unsigned int _reserved:19;
    } _tiFlags;
}

+ (id)typefaceInfoForPostscriptName:(id)arg1 options:(unsigned int)arg2;
+ (id)typefaceInfoForPostscriptName:(id)arg1;
+ (id)typefaceInfoForKnownFontDescriptor:(id)arg1;
+ (id)typefaceInfoForFontDescriptor:(id)arg1;
+ (void)initialize;
- (const unsigned short *)_latin1MappingTableWithPlatformFont:(struct __CTFont *)arg1 hasKernPair:(_Bool *)arg2;
- (struct CGSize *)_verticalOriginDeltaCache:(long long)arg1;
- (double *)_glyphAdvancementCache:(long long)arg1;
- (BOOL)_hasVerticalMetricsWithPlatformFont:(struct __CTFont *)arg1;
- (BOOL)_hasColorGlyphs;
- (BOOL)_isIdealMetricsOnly;
- (BOOL)_isDefaultFixedPitch;
- (BOOL)_isDingbats;
- (BOOL)_isSymbol;
- (BOOL)_isHiragino;
- (BOOL)_isLucidaGrande;
- (BOOL)_isDefaultFace;
- (id)_nominalCharacterCoverage;
- (id)_familyName;
- (id)_postscriptName;
- (id)normalizedFontDescriptor;
- (void)detachInstanceInfo:(id)arg1;
- (id)fontInstanceForFontDescriptor:(id)arg1 size:(double)arg2 affineTransform:(id)arg3 renderingMode:(unsigned long long)arg4;
- (unsigned long long)hash;
- (id)initWithFontDescriptor:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)_setNeedsValidation:(BOOL)arg1;
- (BOOL)_validate;

@end

