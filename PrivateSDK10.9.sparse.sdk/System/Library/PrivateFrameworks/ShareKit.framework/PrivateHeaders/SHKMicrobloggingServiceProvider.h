//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ShareKit/SHKShareWindowServiceProvider.h>

@class NSDictionary, NSOperationQueue;

@interface SHKMicrobloggingServiceProvider : SHKShareWindowServiceProvider
{
    NSDictionary *_sessionInfo;
    id _session;
    NSOperationQueue *_imageFetchOperationQueue;
}

+ (id)allAccounts;
+ (id)accountTypeIdentifier;
@property(retain) NSDictionary *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
- (void)foundCompletionResults:(id)arg1 forText:(id)arg2;
- (void)asyncFetchImageAtURL:(id)arg1 forCompletionItem:(id)arg2;
- (void)cancelAsyncFetchImageOperations;
- (BOOL)canAutoCompleteFromSelectionRange:(struct _NSRange)arg1 inMessage:(id)arg2 tentativeCompletion:(id *)arg3 tentativeRange:(struct _NSRange *)arg4;
- (id)errorStringFromJSONResponse:(id)arg1;
- (id)dictionaryFromJSONString:(id)arg1;
- (id)locationController:(id)arg1 displayNameForLocation:(id)arg2;
- (id)defaultAccount;
- (id)selectedAccount;
- (id)allAccounts;
- (long long)remainingCharactersCount;
- (unsigned long long)characterCountForString:(id)arg1;
- (void)selectedAccountDidChange;
- (void)userRequestedConfigurationAction;
- (void)prepareUserConfigurationUI;
- (BOOL)serviceNeedsUserConfiguration;
- (void)prepareUI;
- (BOOL)hasSession;
- (id)session;
- (void)serviceWindowDidClose;
- (void)renewSession;
- (void)performService;
- (void)dealloc;
- (void)startCompletingText:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)constantCharacterCountForImages;
- (unsigned long long)constantCharacterCountForLinksUsingHTTPS;
- (unsigned long long)constantCharacterCountForLinks;
- (unsigned long long)maxCharacterCount;
- (unsigned long long)alertCharacterThreshold;
- (id)lastUsedAccountIndexPreferencesKey;
- (void)tearDownSession;
- (void)updateSession;
- (Class)sessionClass;

@end

