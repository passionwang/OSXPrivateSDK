/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface OAXShape : NSObject
{
}

+ (BOOL)isWritable:(id)arg1;
+ (id)readFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 drawingState:(id)arg3;
+ (void)readNonVisualShapeProperties:(struct _xmlNode *)arg1 nodeName:(const char *)arg2 inNamespace:(id)arg3 shapeProperties:(id)arg4;
+ (void)readCoreFromXmlNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 toShape:(id)arg3 drawingState:(id)arg4;

@end

