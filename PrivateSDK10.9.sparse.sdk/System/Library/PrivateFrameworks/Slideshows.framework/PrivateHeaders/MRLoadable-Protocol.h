//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MRContext, MRRenderArguments;

@protocol MRLoadable
- (void)cancelLoading;
- (void)unload;
- (void)loadForTime:(double)arg1 inContext:(MRContext *)arg2 withArguments:(MRRenderArguments *)arg3 now:(BOOL)arg4;
- (BOOL)isLoadedForTime:(double)arg1;
@end

