/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SPCExpression;

@interface SPCFontDescriptor : NSObject
{
    SPCExpression *_familyName;
    SPCExpression *_styleName;
    SPCExpression *_pointSize;
}

+ (id)fontDescriptorWithFamily:(id)arg1 style:(id)arg2 size:(double)arg3;
+ (id)fontDescriptorWithFontName:(id)arg1 size:(double)arg2;
@property(retain, nonatomic) SPCExpression *pointSize; // @synthesize pointSize=_pointSize;
@property(retain, nonatomic) SPCExpression *styleName; // @synthesize styleName=_styleName;
@property(retain, nonatomic) SPCExpression *familyName; // @synthesize familyName=_familyName;
- (id)closestMatchingFontInEnvironment:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithFamily:(id)arg1 style:(id)arg2 size:(double)arg3;

@end

