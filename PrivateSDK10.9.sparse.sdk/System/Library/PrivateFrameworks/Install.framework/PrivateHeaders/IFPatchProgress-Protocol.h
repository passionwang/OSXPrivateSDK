//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol IFPatchProgress
- (void)patchCompletedWithStatus:(int)arg1;
- (oneway void)noteCurrentFile:(bycopy NSString *)arg1 totalCount:(unsigned int)arg2;
@end

