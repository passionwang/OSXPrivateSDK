//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface OAXTable : NSObject
{
}

+ (id)readDefaultTableStyleWithDrawingState:(id)arg1;
+ (void)cacheTableStylesInPart:(id)arg1 cache:(id)arg2;
+ (id)readFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readTableStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readRowsFromTableXmlNode:(struct _xmlNode *)arg1 toTable:(id)arg2 drawingState:(id)arg3;
+ (void)readRowFromXmlNode:(struct _xmlNode *)arg1 toRow:(id)arg2 drawingState:(id)arg3;
+ (void)readCellFromXmlNode:(struct _xmlNode *)arg1 toCell:(id)arg2 drawingState:(id)arg3;
+ (id)readCellPropertiesFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readGridFromXmlNode:(struct _xmlNode *)arg1 toGrid:(id)arg2;
+ (void)readPropertiesFromXmlNode:(struct _xmlNode *)arg1 toProperties:(id)arg2 drawingState:(id)arg3;
+ (id)readPartStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readTextStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (int)readOnOffFlag:(id)arg1;
+ (id)readCellStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readCellBorderStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readThemableEffectsFromParent:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readThemableFillFromParent:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readThemableStrokeFromParent:(struct _xmlNode *)arg1 drawingState:(id)arg2;

@end

