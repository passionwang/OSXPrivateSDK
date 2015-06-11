/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSBrowserCell.h"

@interface NSProBrowserCell : NSBrowserCell
{
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (BOOL)_initCell:(id)arg1;
+ (void)_drawInteriorOfCell:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3 textAdjustment:(struct CGPoint)arg4;
+ (void)_drawInteriorOfCell:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3 textAdjustment:(struct CGPoint)arg4 drawBackground:(BOOL)arg5;
+ (void)_drawCellBackground:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
+ (void)_drawInteriorOfCell:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
+ (id)_backgroundColorForCell:(id)arg1 inView:(id)arg2;
+ (void)_drawTextInCell:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3 textAdjustment:(struct CGPoint)arg4;
+ (double)_border;
+ (id)semiHighlightedBranchImage;
+ (id)highlightedBranchImage;
+ (id)branchImage;
+ (id)_branchImageFacet;
- (long long)_fillSurfaceBackgroundStyleWithView:(id)arg1;
- (id)setUpFieldEditorAttributes:(id)arg1;
- (id)_textAttributes;
- (id)_selectOrEdit:(const struct CGRect *)arg1 inView:(id)arg2 target:(id)arg3 editor:(id)arg4 event:(id)arg5 start:(long long)arg6 end:(long long)arg7;
- (struct CGRect)_adjustedEditRect:(struct CGRect)arg1;
- (id)init;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

