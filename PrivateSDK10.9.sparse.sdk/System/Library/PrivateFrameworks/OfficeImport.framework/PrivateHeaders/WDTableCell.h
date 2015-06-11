//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WDTableCellProperties, WDTableRow, WDText;

__attribute__((visibility("hidden")))
@interface WDTableCell : NSObject
{
    unsigned long long mIndex;
    WDTableRow *mRow;
    WDTableCellProperties *mProperties;
    WDText *mText;
    BOOL mUseTrackedProperties;
}

- (id)text;
- (void)clearProperties;
- (id)properties;
- (id)row;
- (long long)compareIndex:(id)arg1;
- (unsigned long long)index;
- (void)setUseTrackedProperties:(BOOL)arg1;
- (BOOL)useTrackedProperties;
- (void)dealloc;
- (id)initWithRow:(id)arg1 at:(unsigned long long)arg2;
- (double)cellWidth;

@end

