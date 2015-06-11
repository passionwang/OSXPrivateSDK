/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADDrawableProperties.h>

#import "OADEffectsParent-Protocol.h"

@class NSArray, NSString, OADTableStyle;

// Not exported
@interface OADTableProperties : OADDrawableProperties <OADEffectsParent>
{
    OADTableStyle *mStyle;
    BOOL mRightToLeft;
    BOOL mFirstRow;
    BOOL mFirstColumn;
    BOOL mLastRow;
    BOOL mLastColumn;
    BOOL mBandRow;
    BOOL mBandColumn;
    NSArray *mEffects;
}

+ (id)defaultProperties;
- (BOOL)hasEffects;
- (void)setEffects:(id)arg1;
- (id)effects;
- (BOOL)hasVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2;
- (BOOL)hasBandsNormalToDir:(int)arg1;
- (void)setBandColumn:(BOOL)arg1;
- (BOOL)bandColumn;
- (void)setBandRow:(BOOL)arg1;
- (BOOL)bandRow;
- (void)setLastColumn:(BOOL)arg1;
- (BOOL)lastColumn;
- (void)setLastRow:(BOOL)arg1;
- (BOOL)lastRow;
- (void)setFirstColumn:(BOOL)arg1;
- (BOOL)firstColumn;
- (void)setFirstRow:(BOOL)arg1;
- (BOOL)firstRow;
- (void)setRightToLeft:(BOOL)arg1;
- (BOOL)rightToLeft;
- (void)setStyle:(id)arg1;
- (id)style;
- (void)dealloc;
- (id)initWithDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

