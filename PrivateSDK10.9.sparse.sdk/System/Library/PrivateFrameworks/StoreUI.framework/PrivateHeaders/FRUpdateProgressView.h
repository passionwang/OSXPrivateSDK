//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTableCellView;

@interface FRUpdateProgressView : NSView
{
    BOOL _progress;
    NSTableCellView *_tableCellView;
}

@property(nonatomic) NSTableCellView *tableCellView; // @synthesize tableCellView=_tableCellView;
@property(nonatomic) BOOL progress; // @synthesize progress=_progress;
- (void)drawRect:(struct CGRect)arg1;

@end

