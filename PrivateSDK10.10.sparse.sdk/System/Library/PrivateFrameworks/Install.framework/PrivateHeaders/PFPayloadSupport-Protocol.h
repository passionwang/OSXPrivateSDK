/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol PFPayloadSupport
- (int)extractPayloadWithPlan:(id)arg1 toDirectory:(id)arg2;
- (int)extractPayloadFiles:(struct __CFArray *)arg1 toDirectory:(id)arg2;
- (int)extractPayloadToDirectory:(id)arg1;
- (id)taskForExtractionWithPlan:(id)arg1 toDirectory:(id)arg2;
- (id)taskForExtraction:(struct __CFArray *)arg1 toDirectory:(id)arg2;
- (id)taskForExtraction:(id)arg1;
@end

