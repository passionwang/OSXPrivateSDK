/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EDSheet.h>

@class CHDChart;

// Not exported
@interface EDChartSheet : EDSheet
{
    CHDChart *mMainChart;
    _Bool mIsBoundsSet;
    struct CGRect mBounds;
}

- (id).cxx_construct;
- (void)addDrawable:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (_Bool)areBoundsSet;
- (void)setMainChart:(id)arg1;
- (id)mainChart;
- (void)teardown;

@end

