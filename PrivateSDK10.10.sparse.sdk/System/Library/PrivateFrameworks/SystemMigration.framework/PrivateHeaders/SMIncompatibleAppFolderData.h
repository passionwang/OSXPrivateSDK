/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface SMIncompatibleAppFolderData : NSObject
{
    NSString *filePath;
    NSArray *appFolderData;
}

+ (id)localizedStringForKey:(id)arg1;
+ (id)appFolderDataFilePathWithIncompatibleAppFolder:(id)arg1;
- (void).cxx_destruct;
- (BOOL)removeDataFile;
- (BOOL)flushToDisk;
- (id)appFolderData;
- (unsigned long long)itemCount;
- (void)setAppFolderData:(id)arg1;
- (id)initWithFolderPath:(id)arg1;

@end

