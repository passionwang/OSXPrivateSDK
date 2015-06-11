/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface SCRText : NSObject
{
    struct __CTLine *_line;
    double _width;
    double _descent;
    double _ascent;
    double _leading;
    struct __CTLine *_truncationToken;
}

- (double)leading;
- (double)descent;
- (double)ascent;
- (double)height;
- (double)width;
- (void)drawIn:(struct CGContext *)arg1 at:(struct CGPoint)arg2;
- (void)drawIn:(struct CGContext *)arg1 at:(struct CGPoint)arg2 width:(double)arg3 flushFactor:(double)arg4;
- (void)dealloc;
- (id)initWith:(id)arg1 font:(struct __CTFont *)arg2;

@end

