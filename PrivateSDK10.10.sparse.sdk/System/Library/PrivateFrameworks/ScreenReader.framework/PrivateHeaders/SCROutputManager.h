/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCROutputThreadedObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSString, SCRCThreadKey, SCROutputRequest;

@interface SCROutputManager : SCROutputThreadedObject
{
    struct __CFDictionary *_requestRunners;
    struct __CFDictionary *_components;
    NSLock *_componentsLock;
    unsigned long long _nextRequestUniqueID;
    NSLock *_requestUniqueIDLock;
    NSString *_lastSpeechAttribute;
    NSMutableDictionary *_categoryPrefsCache;
    NSMutableDictionary *_categoryConfigOverrides;
    NSLock *_prefCacheLock;
    NSString *_clientIdentifier;
    struct __CFArray *_queuedOutputRequests;
    struct __CFDictionary *_queuedObjectsByQueueID;
    struct __CFDictionary *_queuedObjectsByOutputID;
    NSLock *_queuedObjectsLock;
    struct __CFArray *_savedOutputRequests;
    NSLock *_savedOutputRequestsLock;
    unsigned long long _blockingRequestUniqueID;
    SCROutputRequest *_synchronousOutputRequest;
    BOOL _allowAirPlay;
    id _prefsChangedNotificationTarget;
    SEL _prefsChangedNotificationSelector;
    NSLock *_generalLock;
    BOOL _isAudioGraphInitialized;
    struct OpaqueAUGraph *_audioGraph;
    struct ComponentInstanceRecord *_audioMixerUnit;
    struct ComponentInstanceRecord *_audioOutputUnit;
    NSMutableArray *_allAudioSoundUnits;
    NSMutableArray *_standardAudioSoundUnits;
    NSMutableArray *_stereoAudioSoundUnits;
    BOOL _isUsingPositionalAudio;
    BOOL _isDuckingOn;
    NSLock *_audioGraphLock;
    unsigned int _audioGraphRefCount;
    BOOL _isAudioRunning;
    double _lastTimeStopped;
    BOOL _ignoringRequests;
    SCRCThreadKey *_monitorMixerStatusThreadKey;
}

+ (id)availableVoices;
+ (void)initialize;
+ (id)defaultManager;
- (void)_logOutputRequest:(id)arg1 toDirectoryURL:(id)arg2;
- (void)_logRecentOutputRequestsThreadMethod;
- (void)_logOutputRequestThreadWatcher;
- (void)logRecentOutputRequests;
- (void)compressAndMoveLogOutput;
- (void)copy:(id)arg1 fromDirectory:(unsigned long long)arg2 toDirectory:(id)arg3;
- (long long)countOfSavedRequests;
- (void)runSavedRequestAtIndex:(long long)arg1;
- (id)mostRecentSpeechOutputRequest;
- (id)mostRecentOutputRequest;
- (id)savedRequestAtIndex:(long long)arg1;
- (void)_handleStopAllNotification:(id)arg1;
- (void)handleDictationDidStop;
- (void)handleDictationDidStart;
- (void)stopIgnoringRequests;
- (void)stopIgnoringRequestsAndNotify;
- (void)_stopRunnersWithQueueIdentifier:(id)arg1 except:(id)arg2;
- (void)_stopRunnersWithQueueIdentifier:(id)arg1;
- (void)_handleQueuedObjectStartNotificationForOutputIdentifier:(struct __CFString *)arg1 withQueueIdentifier:(struct __CFString *)arg2;
- (void)_startRunners:(struct __CFDictionary *)arg1 forOutputRequest:(id)arg2 usingOutputIdentifier:(id)arg3;
- (void)_runOutputRequest:(id)arg1 usingOutputIdentifier:(id)arg2;
- (BOOL)_processTargetedCategoryRequest:(id)arg1;
- (id)localizedOutputStringForKey:(id)arg1;
- (void)setPreferencesChangedObserver:(id)arg1 selector:(SEL)arg2;
- (id)voiceConfigurableCategories;
- (id)configurableCategories;
- (void)handleEvent:(id)arg1;
- (void)_processRequestForLogging:(id)arg1;
- (void)_addQueuedObject:(id)arg1;
- (void)_removeQueueObjectForQueueID:(struct __CFString *)arg1 andOutputID:(struct __CFString *)arg2;
- (void)_removeQueueObjectForOutputID:(struct __CFString *)arg1;
- (void)_removeAllQueueObjects;
- (void)_removeQueueObjectForQueueID:(struct __CFString *)arg1;
- (id)_popQueuedObjectForOutputID:(struct __CFString *)arg1;
- (void)_cancelQueuedRequestsForOutputIdentifier:(id)arg1 queueIdentifier:(id)arg2;
- (id)soundPathWithIdentifier:(id)arg1;
- (void)playSoundWithIdentifier:(id)arg1;
- (id)componentWithName:(id)arg1;
- (void)notifyOfFinishedRunnerWithName:(id)arg1 requestID:(unsigned long long)arg2 outputIdentifier:(id)arg3;
- (void)cancelRequestWithQueueIdentifier:(id)arg1;
- (void)cancelAllQueuedRequests;
- (void)cancelRequestID:(unsigned long long)arg1;
- (void)addRequest:(id)arg1;
- (id)getStatusLevel;
- (id)getTypingEcho;
- (id)getBrailleVerbosityLevel;
- (id)getVerbosityLevel;
- (id)getTableHeadersLevel;
- (id)getLinkAndAttachmentAttributeDescriptionLevel;
- (id)getNumberMode;
- (id)getDeleteCharacterMode;
- (id)getUpperCaseCharacterMode;
- (id)getMisspelledWordsDescriptionLevel;
- (id)getTextAttributesDescriptionLevel;
- (id)getPunctuationVerbosityLevel;
- (void)_stopSpeechAndSound:(BOOL)arg1 except:(id)arg2;
- (void)stopSpeechAndSound:(BOOL)arg1 exclusions:(id)arg2;
- (void)stopSpeechAndSound:(BOOL)arg1;
- (void)pauseOrContinueSpeech;
- (void)spliceIntoCurrentOutput:(id)arg1 forCategory:(id)arg2;
- (void)speakUpdatedSpeechAttributeValue:(float)arg1 attribute:(int)arg2 category:(id)arg3 spliceIntoCurrentOutput:(BOOL)arg4;
- (void)_sendBrailleLineForSpeechAttribute:(int)arg1 withValue:(float)arg2 asAlert:(BOOL)arg3;
- (void)_setSpeechAttributeValueWithNotification:(id)arg1;
- (float)lastSpeechAttributeValue:(int)arg1 category:(id)arg2;
- (id)customizedCategoryForCategory:(id)arg1;
- (id)synthesizerLocaleStringForCategory:(id)arg1;
- (id)synthesizerLocaleForCategory:(id)arg1;
- (void)matchLanguageToSystemLanguageAllowBounce:(BOOL)arg1;
- (void)loadSynthesizersFromPortablePrefs:(id)arg1;
- (void)unloadSynthesizersFromDevice:(id)arg1;
- (BOOL)_loadVoiceDataFromPath:(id)arg1 forDeviceID:(id)arg2;
- (BOOL)_loadSynthesizersFromPath:(id)arg1 forDeviceID:(id)arg2;
- (id)_systemLanguage;
- (void)matchVoiceOverLanguageToLanguage:(id)arg1;
- (BOOL)allVoicesMatchLanguage:(id)arg1;
- (BOOL)shouldUseRomanTextProcessingForCategory:(id)arg1;
- (id)titleForUserCustomizableCategory:(id)arg1;
- (id)buildSpeechAttributeChangeStringForAttribute:(int)arg1 value:(float)arg2;
- (void)setLastSpeechAttribute:(id)arg1;
- (id)lastSpeechAttribute;
- (void)setObject:(id)arg1 forAttribute:(id)arg2 component:(id)arg3;
- (id)objectForAttribute:(id)arg1 component:(id)arg2;
- (unsigned long long)manufactureNewRequestUniqueID;
- (id)localizedNameOfColor:(struct CGColor *)arg1 isExactMatch:(char *)arg2;
- (BOOL)isSystemVolumeInaudible;
- (void)muteSystemVolume:(BOOL)arg1;
- (unsigned int)systemDefaultOutputDeviceID;
- (unsigned int)defaultOutputDeviceID;
- (unsigned int)_defaultOutputDeviceIDIncludingAirPlay;
- (float)systemVolume;
- (void)setSystemVolume:(float)arg1;
- (void)updateAudioOutputDevice;
- (void)_setAllowAirPlay:(BOOL)arg1;
- (BOOL)_airplayOutputIsDesired;
- (void)initializeAllowAirPlay;
- (unsigned int)audioOutputDeviceID;
- (unsigned int)_audioOutputDeviceIDIncludingAirPlay;
- (id)availableOutputAudioDevices;
- (void)updateAudioQualityLevel:(id)arg1;
- (void)displayConfigurationDidChange;
- (void)setAudioPositionForAudioUnitId:(unsigned int)arg1 forAzimuth:(float)arg2 andElevation:(float)arg3 andDistance:(float)arg4;
- (double)screenPixelsHigh;
- (double)screenPixelsWide;
- (float)elevationForY:(double)arg1 withTotalHeight:(double)arg2;
- (float)azimuthForX:(double)arg1 withTotalWidth:(double)arg2;
- (struct ComponentInstanceRecord *)mixerUnit;
- (struct ComponentInstanceRecord *)soundUnitForBusId:(int)arg1;
- (void)releaseSoundBus:(int)arg1;
- (int)obtainSoundBus;
- (int)obtainStereoSoundBus;
- (void)updateAudioGraph;
- (BOOL)isPositionalAudioEnabled;
- (void)setIsPositionalAudioEnabled:(BOOL)arg1;
- (void)_configureAudioGraphForChannelLayout;
- (unsigned int)_getDesiredAudioRenderChannelCount;
- (BOOL)setChannelMapping:(id)arg1 error:(id *)arg2;
- (void)_updateChannelMapping;
- (int)_initializeAudio;
- (void)_monitorMixerStatus;
- (void)_turnOffDucking;
- (void)_delayedTurnOffDucking;
- (BOOL)stopAudioGraph;
- (BOOL)startAudioGraph;
- (void)dealloc;
- (id)init;
- (void)_adjustSpeechAttributeForCategory:(id)arg1 speakAttributeChange:(BOOL)arg2 continueSpeech:(BOOL)arg3 responseAction:(int)arg4;
- (void)updateSpeechRateWithoutPause;
- (void)updateSpeechVoiceIdentifierForCategory:(id)arg1 shouldSpeakResult:(BOOL)arg2;
- (void)updateSpeechVolumeForCategory:(id)arg1 shouldSpeakResult:(BOOL)arg2;
- (void)updateSpeechIntonationForCategory:(id)arg1 shouldSpeakResult:(BOOL)arg2;
- (void)updateSpeechPitchForCategory:(id)arg1 shouldSpeakResult:(BOOL)arg2;
- (void)updateSpeechRateForCategory:(id)arg1 shouldSpeakResult:(BOOL)arg2;
- (id)preferencesForCategory:(id)arg1 key:(id)arg2;
- (id)_unsupportedCharactersForVoice:(id)arg1;
- (BOOL)hasCustomizedCategories;
- (void)clearConfigurationCache;
- (id)_keysToObserve;
- (void)removeConfigurationObservers;
- (void)initializeOutputeManagerConfiguration;

@end

