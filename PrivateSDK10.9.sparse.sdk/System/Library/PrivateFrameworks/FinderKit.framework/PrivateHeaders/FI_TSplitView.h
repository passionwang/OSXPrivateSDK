//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSplitView.h"

__attribute__((visibility("hidden")))
@interface FI_TSplitView : NSSplitView
{
}

- (BOOL)isOpaque;
- (void)animatePosition:(double)arg1 ofDividerAtIndex:(unsigned long long)arg2;
- (double)positionOfDividerAtIndex:(unsigned long long)arg1;
- (struct CGSize)sizeOfSubviewAtIndex:(unsigned long long)arg1;
- (id)subviewAtIndex:(unsigned long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1 skipDrawing:(BOOL)arg2;
- (void)initCommon;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

