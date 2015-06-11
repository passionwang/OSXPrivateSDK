/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CHDTrendlineLabel, EDString, OADGraphicProperties;

// Not exported
@interface CHDTrendline : NSObject
{
    _Bool mDisplayEquation;
    _Bool mDisplayRSquaredValue;
    double mBackward;
    double mForward;
    double mInterceptYAxis;
    int mPolynomialOrder;
    long long mMovingAveragePeriod;
    int mType;
    OADGraphicProperties *mGraphicProperties;
    CHDTrendlineLabel *mLabel;
    EDString *mName;
}

+ (id)trendline;
- (id)defaultNameWithSeriesName:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setType:(int)arg1;
- (int)type;
- (void)setMovingAveragePeriod:(long long)arg1;
- (long long)movingAveragePeriod;
- (void)setPolynomialOrder:(int)arg1;
- (int)polynomialOrder;
- (void)setInterceptYAxis:(double)arg1;
- (double)interceptYAxis;
- (void)setForward:(double)arg1;
- (double)forward;
- (void)setBackward:(double)arg1;
- (double)backward;
- (void)setDisplayRSquaredValue:(_Bool)arg1;
- (_Bool)isDisplayRSquaredValue;
- (void)setDisplayEquation:(_Bool)arg1;
- (_Bool)isDisplayEquation;
- (void)dealloc;
- (id)init;

@end

