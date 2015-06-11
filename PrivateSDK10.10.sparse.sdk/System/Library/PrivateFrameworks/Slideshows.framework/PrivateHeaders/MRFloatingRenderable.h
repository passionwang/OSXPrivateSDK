/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MUPoolObject.h>

@class MRImage, MRSlideProvider;

@interface MRFloatingRenderable : MUPoolObject
{
    MRSlideProvider *provider;
    MRImage *slide;
    struct CGSize size;
    double shadowWidth;
    double shadowHeight;
    unsigned long long vboOffsetPlain;
    unsigned long long vboOffsetSoft;
    unsigned long long vboOffsetShadow;
    double aspectRatio;
    double scale;
    struct CGPoint bottomLeft;
    struct CGPoint topRight;
    MRFloatingRenderable *next;
}

+ (void)initialize;
+ (CDStruct_7b508128 *)poolInfo;
@property(retain, nonatomic) MRImage *slide; // @synthesize slide;
- (void)purge;
- (void)dealloc;

@end

