/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString;

// Not exported
@interface CUIThemeRendition : NSObject
{
    struct _renditionkeytoken _stackKey[16];
    struct _renditionkeytoken *_key;
    long long _type;
    unsigned int _subtype;
    unsigned int _scale;
    struct {
        unsigned int isHeaderFlaggedFPO:1;
        unsigned int isExcludedFromContrastFilter:1;
        unsigned int isVectorBased:1;
        unsigned int isOpaque:1;
        unsigned int reserved:28;
    } _renditionFlags;
    long long _templateRenderingMode;
    long long _artworkStatus;
    unsigned long long _colorSpaceID;
    NSString *_name;
    NSData *_srcData;
    long long _validLookGradation;
    double _opacity;
    int _blendMode;
    NSString *_utiType;
    int _exifOrientation;
}

+ (id)displayNameForRenditionType:(long long)arg1;
+ (id)filteredCSIDataFromBaseCSIData:(id)arg1;
+ (Class)renditionClassForRenditionType:(long long)arg1 andPixelFormat:(unsigned int)arg2;
@property(nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
- (unsigned short)valueForTokenIdentifier:(unsigned short)arg1;
- (id)data;
- (struct CGPDFDocument *)pdfDocument;
- (id)effectPreset;
- (unsigned int)subtype;
- (unsigned int)gradientStyle;
- (id)gradient;
- (double)gradientDrawingAngle;
- (BOOL)isScaled;
- (BOOL)isTiled;
- (id)sliceInformation;
- (id)metrics;
- (double)scale;
- (id)maskForSliceIndex:(long long)arg1;
- (id)imageForSliceIndex:(long long)arg1;
- (struct CGImage *)unslicedImage;
- (id)description;
- (BOOL)isValidForLookGradation:(long long)arg1;
- (unsigned long long)colorSpaceID;
- (long long)artworkStatus;
- (long long)templateRenderingMode;
- (BOOL)isOpaque;
- (BOOL)isVectorBased;
- (BOOL)isHeaderFlaggedFPO;
- (id)utiType;
- (id)name;
- (long long)type;
- (const struct _renditionkeytoken *)key;
- (void)dealloc;
- (id)_initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;
- (void)_initializeRenditionKey:(const struct _renditionkeytoken *)arg1;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader *)arg1;
- (void)_initializeCompositingOptionsFromCSIData:(const struct _csiheader *)arg1;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;

@end

