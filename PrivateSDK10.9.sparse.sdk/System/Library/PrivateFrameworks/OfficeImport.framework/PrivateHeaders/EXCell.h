//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface EXCell : NSObject
{
}

+ (void)edCellFromXmlCellElement:(struct _xmlNode *)arg1 edRowInfo:(struct EDRowInfo **)arg2 edRowBlock:(id)arg3 edRowBlocks:(id)arg4 state:(id)arg5;
+ (int)edErrorFromXmlErrorString:(id)arg1;
+ (_Bool)edBoolFromXmlBoolString:(id)arg1;
+ (int)edCellTypeFromXmlCellElement:(struct _xmlNode *)arg1 stringIndex:(_Bool *)arg2;

@end

