/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MCAction.h>

@class NSDictionary, NSMutableDictionary;

@interface MCGenericAction : MCAction
{
    NSMutableDictionary *_attributes;
}

+ (id)genericActionForTargetPlugObjectID:(id)arg1 withAttributes:(id)arg2;
@property(copy) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (id)description;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;

@end

