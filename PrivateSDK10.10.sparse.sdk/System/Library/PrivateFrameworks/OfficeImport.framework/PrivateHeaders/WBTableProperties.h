/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface WBTableProperties : NSObject
{
}

+ (void)readFrom:(id)arg1 wrdProperties:(struct WrdTableProperties *)arg2 tracked:(struct WrdTableProperties *)arg3 properties:(id)arg4;
+ (void)mapWordProperties:(struct WrdTableProperties *)arg1 reader:(id)arg2 toProperties:(id)arg3;
+ (id)formattingChangeDate:(const struct WrdDateTime *)arg1;

@end

