/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreChineseEngine/CIMCandidateAccessoryView.h>

@class NSImage;

@interface CIMCandidateArrowAccessoryView : CIMCandidateAccessoryView
{
    NSImage *_arrowImage;
    BOOL _pointsUpwards;
}

+ (id)accessoryViewWithUpArrow:(double)arg1;
+ (id)accessoryViewWithDownArrow:(double)arg1;
@property(nonatomic) BOOL pointsUpwards; // @synthesize pointsUpwards=_pointsUpwards;
- (void)drawRect:(struct CGRect)arg1;
- (void)setVisible:(BOOL)arg1;
@property(readonly, nonatomic) NSImage *arrowImage; // @synthesize arrowImage=_arrowImage;
- (void)mouseUp:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

