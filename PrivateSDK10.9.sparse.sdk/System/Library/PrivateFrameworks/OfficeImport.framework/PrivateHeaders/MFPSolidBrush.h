//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/MFPBrush.h>

@class TSUColor;

__attribute__((visibility("hidden")))
@interface MFPSolidBrush : MFPBrush
{
    TSUColor *mColor;
}

- (void)fillPath:(id)arg1 evenOddRule:(BOOL)arg2;
- (void)setColor:(id)arg1;
- (id)color;
- (void)dealloc;
- (id)initWithColor:(id)arg1;

@end

