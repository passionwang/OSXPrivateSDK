//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SOFileTransferRenderer : NSObject
{
}

+ (int)maxImageHeight;
+ (int)maxImageWidth;
+ (id)wrapPass:(id)arg1 inStyle:(id)arg2 fgColor:(id)arg3 bgColor:(id)arg4;
+ (id)getFileTransferImageForIcon:(id)arg1 string:(id)arg2 transcriptStyleID:(id)arg3 fgColor:(id)arg4 bgColor:(id)arg5;
+ (id)wrapImageInStyle:(id)arg1 overlayPlayButton:(BOOL)arg2 transcriptStyleID:(id)arg3;
+ (void)drawEtchingForRect:(struct CGRect)arg1;
+ (void)drawBalloonGlossForRect:(struct CGRect)arg1;
+ (void)drawBalloonMaskForRect:(struct CGRect)arg1;
+ (void)drawBalloonImage:(id)arg1 withOp:(unsigned long long)arg2 forSize:(struct CGSize)arg3;

@end

