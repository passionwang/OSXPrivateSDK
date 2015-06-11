/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SCRSpeechSynthesizerVars;

// Not exported
@interface SCRSpeechSynthesizer : NSObject
{
    SCRSpeechSynthesizerVars *_privateSCRSpeechSynthesizerVars;
}

+ (id)bestVoiceForSelectedVoice:(id)arg1 language:(id)arg2;
+ (BOOL)voiceIdentifier:(id)arg1 matchesLocale:(id)arg2;
+ (short)countVoices:(short *)arg1;
+ (BOOL)makeVoiceForIdentifier:(struct __CFString *)arg1 voiceSpec:(struct VoiceSpec *)arg2;
+ (short)getVoiceSpecForIndex:(short)arg1 voiceSpec:(struct VoiceSpec *)arg2;
+ (id)copyIdentifierStringForVoiceSpec:(struct VoiceSpec *)arg1;
+ (id)attributesForVoice:(id)arg1;
+ (unsigned int)creatorCodeForVoice:(id)arg1;
+ (id)availableVoices;
+ (id)defaultVoice;
+ (BOOL)isAnyApplicationSpeaking;
+ (void)initialize;
+ (BOOL)loadSynthesizerResourceFromPath:(id)arg1 forDeviceID:(id)arg2;
+ (BOOL)unloadSynthesizerResourceForDeviceID:(id)arg1;
- (BOOL)_setObject:(id)arg1 forProperty:(struct __CFString *)arg2;
- (id)_objectForProperty:(struct __CFString *)arg1;
- (BOOL)isPaused;
- (void)_continueSpeaking;
- (void)_pauseSpeakingAtBoundary:(unsigned int)arg1;
- (void)_stopSpeakingAtBoundary:(unsigned int)arg1;
- (float)_volume;
- (void)_setVolume:(float)arg1;
- (float)_rate;
- (void)_setRate:(float)arg1;
- (float)_pitchMod;
- (void)_setPitchMod:(float)arg1;
- (float)pitchBase;
- (void)_setPitchBase:(float)arg1;
- (unsigned int)_audioDeviceID;
- (void)_setAudioDevice:(unsigned int)arg1;
- (float)_normalPitchMod;
- (float)_normalPitchBase;
- (float)_normalSpeakingRate;
- (void)_handleDefaultVoiceChange;
- (BOOL)_setupCallbacksSavingToFile:(BOOL)arg1;
- (BOOL)_makeCallbacksOnTTSThread;
- (void)_setMakeCallbacksOnTTSThread:(BOOL)arg1;
- (BOOL)_skipSpeechDoneToggle;
- (void)_setSkipSpeechDoneToggle:(BOOL)arg1;
- (BOOL)_beginSpeakingString:(id)arg1 optionallyToURL:(id)arg2;
- (void)_handlePhonemeCallbackWithOpcode:(id)arg1;
- (void)_handleWordCallbackWithParams:(id)arg1;
- (void)_handleSpeechDoneCallback;
- (void)_handleSpeechDoneNoCallback;
- (void)_checkIfSpeakingThroughSpeechFeedbackWindowIsFinished:(id)arg1;
- (BOOL)_feedbackWindowIsVisible;
- (id)_speakingString;
- (id)supportedCharacterRanges;
- (id)supportedLiteralCharacterRanges;
- (void)setUsesFeedbackWindow:(BOOL)arg1;
- (BOOL)usesFeedbackWindow;
- (BOOL)setVoice:(id)arg1;
- (id)voice;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isSpeaking;
- (void)stopSpeaking;
- (void)stopAllSpeechNotify:(id)arg1;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2;
- (BOOL)startSpeakingString:(id)arg1;
- (void)resetChannel;
- (void)dealloc;
- (id)initWithVoice:(id)arg1;
- (id)init;

@end

