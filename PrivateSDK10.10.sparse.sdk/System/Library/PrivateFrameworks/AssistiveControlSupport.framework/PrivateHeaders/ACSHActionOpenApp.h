/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AssistiveControlSupport/ACSHAction.h>

@class NSImage, NSString;

@interface ACSHActionOpenApp : ACSHAction
{
    NSString *_absolutePath;
    NSString *_bundleID;
    NSString *_name;
    NSImage *_icon;
}

+ (id)actionBundleID:(id)arg1 absolutePath:(id)arg2;
@property(retain, nonatomic) NSString *absolutePath; // @synthesize absolutePath=_absolutePath;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)_resetDisplayValues;
- (id)resolvedPath;
- (id)name;
- (id)icon;
- (void)perform;
- (id)paramDictionaryForSaving;
- (void)_initWithPlistDictionary:(id)arg1;
- (void)dealloc;
- (id)paramDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

