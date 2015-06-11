//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "TDElementAttributes.h"

@class TDThemeDirection, TDThemeDrawingLayer, TDThemeElement, TDThemeIdiom, TDThemePart, TDThemePresentationState, TDThemeSize, TDThemeState, TDThemeValue;

@interface TDRenditionKeySpec : NSManagedObject <TDElementAttributes>
{
    unsigned int _dimension1;
    unsigned int _dimension2;
    unsigned int _scaleFactor;
    unsigned int _subtype;
    unsigned int _nameIdentifier;
    struct _renditionkeytoken _stackScratchKey[16];
    struct _renditionkeytoken *_scratchKey;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void)setAttributesFromCopyData:(id)arg1;
- (id)copyDataFromAttributes;
- (void)setAttributesFromData:(id)arg1;
- (id)dataFromAttributes;
- (void)copyAttributesInto:(id)arg1;
- (id)keyDescription;
- (const struct _renditionkeytoken *)key;
- (void)getKey:(struct _renditionkeytoken *)arg1;
- (void)setAttributesFromRenditionKey:(const struct _renditionkeytoken *)arg1 withDocument:(id)arg2;
- (long long)attributeCount;
- (const struct _renditionkeyfmt *)keyFormat;
- (id)debugDescription;
- (void)setScaleFactorString:(id)arg1;
- (id)scaleFactorString;
- (unsigned int)nameIdentifier;
- (void)setNameIdentifier:(unsigned int)arg1;
- (unsigned int)subtype;
- (void)setSubtype:(unsigned int)arg1;
- (unsigned int)scaleFactor;
- (void)setScaleFactor:(unsigned int)arg1;
- (unsigned int)dimension2;
- (void)setDimension2:(unsigned int)arg1;
- (unsigned int)dimension1;
- (void)setDimension1:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) TDThemeDirection *direction; // @dynamic direction;
@property(retain, nonatomic) TDThemeElement *element; // @dynamic element;
@property(retain, nonatomic) TDThemeIdiom *idiom; // @dynamic idiom;
@property(retain, nonatomic) TDThemeDrawingLayer *layer; // @dynamic layer;
@property(retain, nonatomic) TDThemePart *part; // @dynamic part;
@property(retain, nonatomic) TDThemePresentationState *presentationState; // @dynamic presentationState;
@property(retain, nonatomic) TDThemeSize *size; // @dynamic size;
@property(retain, nonatomic) TDThemeState *state; // @dynamic state;
@property(retain, nonatomic) TDThemeValue *value; // @dynamic value;

@end

