/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CNVCardParsedResultBuilder <NSObject>
- (id)validCountryCodes;
- (void)setUnknownProperties:(id)arg1;
- (BOOL)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
- (id)valueForProperty:(id)arg1;
- (BOOL)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)canSetValueForProperty:(id)arg1;
- (id)build;
@end

