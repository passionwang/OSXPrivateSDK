/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface CUIPattern : NSObject
{
    struct CGImage *_patternImage;
    struct CGPattern *_pattern;
    double _alpha;
}

@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (struct CGImage *)patternImageRef;
- (id)description;
- (void)setPatternInContext:(struct CGContext *)arg1;
- (struct CGPattern *)pattern;
- (struct CGPattern *)_newPattern;
- (void)dealloc;
- (id)initWithImageRef:(struct CGImage *)arg1;

@end

