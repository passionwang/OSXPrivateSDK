//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProKit/NSProCommandSet.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSProLocalizedCommandSet : NSProCommandSet
{
    NSMutableDictionary *_localizations;
    NSString *_currentLocalization;
}

- (void)setCurrentLocalization:(id)arg1;
- (id)currentLocalization;
- (id)localizations;
- (BOOL)_hasCommandSetAtPath:(id)arg1;
- (BOOL)isEditable;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

