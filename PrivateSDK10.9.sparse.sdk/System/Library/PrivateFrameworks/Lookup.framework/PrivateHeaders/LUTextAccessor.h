//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LUTextAccessor : NSObject
{
    double _scaleFactor;
}

+ (double)scaleFactorForView:(id)arg1;
+ (id)viewAtScreenLocation:(struct CGPoint)arg1;
+ (id)windowAtScreenLocation:(struct CGPoint)arg1;
+ (BOOL)canAccessTextInView:(id)arg1;
+ (BOOL)canAccessTextAtLocation:(struct CGPoint)arg1;
+ (struct _NSRange)rangeOfTermInString:(id)arg1 containingOffset:(unsigned long long)arg2 language:(id *)arg3 partOfSpeech:(id *)arg4;
+ (struct _NSRange)rangeOfAddressInString:(id)arg1 forRange:(struct _NSRange)arg2;
+ (struct _NSRange)rangeOfParagraphInString:(id)arg1 containingOffset:(unsigned long long)arg2;
+ (id)languageOfString:(id)arg1 forRange:(struct _NSRange)arg2 partOfSpeech:(id *)arg3;
+ (id)textAccessorForView:(id)arg1;
+ (id)textAccessorForScreenLocation:(struct CGPoint)arg1;
+ (BOOL)enabled;
@property double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
- (id)_termAndTextOrigin:(struct CGPoint *)arg1 language:(id *)arg2 partOfSpeech:(id *)arg3;
- (id)_termAtLocation:(struct CGPoint)arg1 textOrigin:(struct CGPoint *)arg2 language:(id *)arg3 partOfSpeech:(id *)arg4;
- (id)initWithView:(id)arg1;
- (id)initWithLocation:(struct CGPoint)arg1;
- (id)termAndTextOrigin:(struct CGPoint *)arg1 language:(id *)arg2 partOfSpeech:(id *)arg3;
- (id)termAtLocation:(struct CGPoint)arg1 textOrigin:(struct CGPoint *)arg2 language:(id *)arg3 partOfSpeech:(id *)arg4;
- (id)init;

@end

