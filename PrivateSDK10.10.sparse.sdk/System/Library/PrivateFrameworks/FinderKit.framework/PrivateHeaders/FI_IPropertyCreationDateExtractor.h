/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_IPropertyDateExtractor.h>

// Not exported
@interface FI_IPropertyCreationDateExtractor : FI_IPropertyDateExtractor
{
}

- (_Bool)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
- (id)defaultValue;

@end

