/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudDocsDaemon/BRCFileProvider.h>

@class NSMutableDictionary;

// Not exported
@interface BRCVersionsFileProvider : BRCFileProvider
{
    NSMutableDictionary *_operationsByName;
}

- (void).cxx_destruct;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(id)arg3;
- (id)_physicalURLForURL:(id)arg1;
- (id)_fileReactorID;
- (void)dumpToContext:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

