/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

@class PDSlide;

// Not exported
@interface PMSlideMapper : CMMapper
{
    PDSlide *mSlide;
    struct CGRect mRect;
}

- (id).cxx_construct;
- (struct CGRect)slideRect;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)styleMatrix;
- (id)defaultTheme;
- (id)slideName;
- (id)initWithPDSlide:(id)arg1 slideRect:(struct CGRect)arg2 parent:(id)arg3;
- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;
- (void)mapBackgroundAt:(id)arg1 recursive:(BOOL)arg2 withState:(id)arg3;
- (void)mapMasterSlideAt:(id)arg1 withState:(id)arg2;

@end

