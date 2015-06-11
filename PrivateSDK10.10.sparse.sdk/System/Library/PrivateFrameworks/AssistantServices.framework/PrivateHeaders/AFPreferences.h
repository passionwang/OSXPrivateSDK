/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface AFPreferences : NSObject
{
    BOOL _shouldSynchronizeInternalDomain;
    NSObject<OS_dispatch_queue> *_navTokenQueue;
    BOOL _navTokenIsValid;
    int _navToken;
}

+ (id)sharedPreferences;
- (void).cxx_destruct;
- (BOOL)fileLoggingIsEnabled;
- (void)setFileLoggingIsEnabled:(BOOL)arg1;
- (id)languagesMissingBirthCertificates;
- (void)setBirthCertificateData:(id)arg1 forLanguageCode:(id)arg2;
- (id)birthCertificateDataForLanguageCode:(id)arg1;
- (id)whitelistedLanguages;
- (void)setValue:(id)arg1 forSessionContextKey:(id)arg2;
- (id)valueForSessionContextPreferenceKey:(id)arg1;
- (void)_registerForNavStatusIfNeeded;
- (void)setOutputVoice:(id)arg1;
- (id)outputVoice;
- (void)setLanguageCode:(id)arg1;
- (id)languageCode;
- (void)setShouldShowReadyForLanguageCode:(id)arg1;
- (void)didShowReadyForLanguageCode:(id)arg1;
- (BOOL)shouldShowReadyForLanguageCode:(id)arg1;
- (BOOL)didShowRateLimitedForLanguageCode:(id)arg1;
- (void)setShowedRateLimitedForLanguageCode:(id)arg1;
- (void)setDisableAssistantWhilePasscodeLocked:(BOOL)arg1;
- (BOOL)disableAssistantWhilePasscodeLocked;
- (void)setHandsFreeMode:(long long)arg1;
- (long long)handsFreeMode;
- (void)setDebugButtonIsEnabled:(BOOL)arg1;
- (BOOL)debugButtonIsEnabled;
- (void)setLocalDictationLanguage:(id)arg1 modelRootPath:(id)arg2 forLanguage:(id)arg3;
- (void)getLocalDictationLanguage:(id *)arg1 modelRootPath:(id *)arg2 forLanguage:(id)arg3;
- (BOOL)localDictationIsAvailableForLanguage:(id)arg1;
- (void)setDictationIsEnabled:(BOOL)arg1;
- (void)setAssistantIsEnabled:(BOOL)arg1;
- (void)_setDictationIsEnabledLocal:(BOOL)arg1;
- (void)_setAssistantIsEnabledLocal:(BOOL)arg1;
- (BOOL)dictationIsEnabled;
- (BOOL)assistantIsEnabled;
- (void)synchronize;
- (void)dealloc;
- (id)init;
- (void)_internalPreferencesDidChangeExternally;
- (void)_preferencesDidChangeExternally;

@end

