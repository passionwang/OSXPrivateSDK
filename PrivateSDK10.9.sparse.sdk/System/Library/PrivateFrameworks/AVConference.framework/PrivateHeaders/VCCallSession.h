//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LoopbackSocketTunnelDelegate.h"

@class AVAudioPayload, AVAudioTier, AVAudioTierPicker, GKInterfaceListener, GKRingBuffer, LoopbackSocketTunnel, NSArray, NSCondition, NSData, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<VCCallSessionDelegate>, NSObject<VideoConferenceChannelQualityDelegate>, NSObject<VideoConferenceRealTimeChannel>, NSString, RTCReporting, TCPTunnelClient, TimingCollection, VCBitrateArbiter, VCCallInfo, VCCallLinkCongestionDetector, VCCapabilities, VCJitterBuffer, VCSessionMessaging, VCTransport, VCWCMClient, VideoAttributes;

__attribute__((visibility("hidden")))
@interface VCCallSession : NSObject <LoopbackSocketTunnelDelegate>
{
    NSObject<VCCallSessionDelegate> *delegate;
    VCCallInfo *localCallInfo;
    VCCallInfo *remoteCallInfo;
    struct tagHANDLE *rtpHandle;
    struct tagHANDLE *rtpVideo;
    int numEncodedBytes;
    int numBufferBytesAvailable;
    BOOL didUseICE;
    struct tagCONNRESULT connectionResult;
    struct tagCONNRESULT prevConnectionResult;
    struct tagCONNRESULT origConnectionResult;
    long long state;
    NSMutableArray *audioPayloads;
    AVAudioPayload *currentAudioPayload;
    AVAudioTierPicker *audioTierPicker_AppleCalling;
    AVAudioTierPicker *audioTierPicker_FaceTime;
    AVAudioTier *currentAudioTier;
    long long videoPayload;
    long long sampleRate;
    long long samplesPerFrame;
    long long blockSize;
    float blockSeconds;
    struct tagHANDLE *hAUIO;
    struct tagHANDLE *hSIP;
    double lastReceivedAudio;
    BOOL launchedShutdownThread;
    BOOL isAudioRunning;
    BOOL isWaitingForICEResult;
    BOOL didSend200OK;
    float remoteParticipantVolume;
    NSObject<VideoConferenceRealTimeChannel> *rtChannel;
    LoopbackSocketTunnel *tunnel;
    struct _opaque_pthread_mutex_t mutex;
    BOOL useLoopback;
    BOOL receivedSIPInvite;
    char szRemoteRTPIP[48];
    int iRemoteRTPPort;
    int iRemoteRTCPPort;
    VCCapabilities *caps;
    struct tagHANDLE *hMediaQueue;
    struct tagHANDLE *hAFRC;
    GKRingBuffer *ringBuf;
    unsigned int lastReceived;
    char *bundleBuffer;
    int bundledPackets;
    int packetsPerBundle;
    unsigned int bundleTimestamp;
    int bundlePayload;
    int canUseSpecialAACBundle;
    int preferredAudioCodec;
    int audioTxBitrate;
    int audioHeaderSize;
    unsigned int afrcBitrate;
    double audioInterval;
    BOOL useSBR;
    BOOL useControlByte;
    BOOL useUEP;
    NSDictionary *_allPayloadsLocalFeaturesString;
    char _matchedFeaturesString[1600];
    unsigned char inputMeter;
    BOOL audioIsPaused;
    struct _opaque_pthread_mutex_t pauseLock;
    NSObject<OS_dispatch_queue> *videoQueue;
    NSArray *mutedPeers;
    int bandwidthUpstream;
    int bandwidthDownstream;
    BOOL allowAudioRecording;
    int aacBlockSize;
    BOOL fInitialBandwidthDetection;
    int carrierBitrateCap;
    struct AudioStreamBasicDescription vpioFormat;
    BOOL allowAudioSwitching;
    BOOL shouldUpdateLastReceivedPacketTimestamp;
    double lastReceivedPacketTimestamp;
    BOOL isRemoteMediaStalled;
    int packetsSinceStall;
    BOOL isAttemptingRelay;
    long long relayState;
    BOOL allowsRelay;
    BOOL requiresWifi;
    BOOL useCompressedConnectionData;
    int natType;
    unsigned int lastSentAudioSampleTime;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    TCPTunnelClient *_tcpTunnelClient;
    TimingCollection *perfTimers;
    double packetLossRate;
    double timeLastCheckedNetworkConditions;
    double timeLastKnowGoodNetworkPLR;
    double timeLastKnowGoodNetworkRTT;
    double networkConditionsTimeoutInSeconds;
    NSString *peerCN;
    NSString *sessionID;
    unsigned int roundTripTime;
    float packetLateAndMissingRatio;
    float callerPreEmptiveTimeoutInSecs;
    int sampleLogCount;
    double timeSinceLastReportedNoPackets;
    double noRemotePacketsTimeout;
    BOOL didAttemptSIPInvite;
    NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
    struct _opaque_pthread_mutex_t qualityDelegateLock;
    NSObject<OS_dispatch_queue> *qualityQueue;
    NSObject<OS_dispatch_queue> *managerQueue;
    BOOL shouldTimeoutPackets;
    struct _opaque_pthread_mutex_t srtpLock;
    BOOL didPrepareSRTP;
    BOOL useAFRC;
    BOOL isRTCPFBEnabled;
    VCCallLinkCongestionDetector *congestionDetector;
    BOOL shouldSendAudio;
    BOOL isRemoteDevice4x;
    BOOL isGKVoiceChat;
    void *packetThread;
    int signalStrength;
    int signalRaw;
    int signalGrade;
    _Bool bBWEstOperatingModeInitialized;
    _Bool bBWEstNewBWEstModeEnabled;
    _Bool bBWEstFakeLargeFrameModeEnabled;
    _Bool bBWEstActiveProbingSenderLog;
    struct CGSize remoteScreenPortraitAspectRatio;
    struct CGSize remoteScreenLandscapeAspectRatio;
    struct CGSize remoteExpectedPortraitAspectRatio;
    struct CGSize remoteExpectedLandscapeAspectRatio;
    BOOL isStarted;
    NSData *srtpKeyBytes;
    BOOL isInitiator;
    BOOL sentClientSuccessfulDidStart;
    double videoThrottlingTimeout;
    BOOL useAWDStats;
    VCSessionMessaging *messaging;
    BOOL isCurrentNetworkBad;
    BOOL requestedTimeoutRelay;
    unsigned int callSessionBitrate;
    NSObject<OS_dispatch_queue> *cellTechQueue;
    NSObject<OS_dispatch_source> *cellTechChangeSource;
    VCBitrateArbiter *callSessionBitrateArbiter;
    NSObject<OS_dispatch_source> *connectionTimeoutSource;
    unsigned short maxPacketLength;
    double lastTierSwitch;
    BOOL audioTierHysteresis;
    long long totalSentBytes;
    long long totalReceivedBytes;
    VCJitterBuffer *vcJitterBuffer;
    struct tagHANDLE *hVideoReceiver;
    struct tagHANDLE *hVideoTransmitter;
    BOOL remoteSupportsVisibleRect;
    BOOL remoteSupportsExpectedAspectRatio;
    BOOL canLocalResizePIP;
    BOOL canRemoteResizePIP;
    BOOL receivedFirstRemoteFrame;
    int fecMode;
    NSObject<OS_dispatch_source> *sessionHealthMonitor;
    VideoAttributes *remoteVideoAttributes;
    double lastVideoQualityNotificationUpdate;
    unsigned int remoteFrameWidth;
    unsigned int remoteFrameHeight;
    GKInterfaceListener *interfaceListener;
    VCWCMClient *vcWCMClient;
    NSCondition *connectionDataTimeoutCondVar;
    VCTransport *transport;
    struct OpaqueVTPixelTransferSession *hdTransferSession;
    struct __CVPixelBufferPool *hdBufferPool;
    struct CGSize expectedDecodeSize;
    RTCReporting *reportingAgent;
    int reportUpdateInterval;
    int reportReportFrequency;
    BOOL enableAFRCDump;
    int operatingMode;
    unsigned int receivedAudioBytes;
    unsigned int sentAudioBytes;
    double lastVCLogCallbackTime;
    struct SKEStateOpaque *skeState;
    struct __CFData *secretKey;
}

+ (id)keyPathsForValuesAffectingNetworkQuality;
@property(retain) NSData *srtpKeyBytes; // @synthesize srtpKeyBytes;
@property(nonatomic) int operatingMode; // @synthesize operatingMode;
@property unsigned int remoteFrameHeight; // @synthesize remoteFrameHeight;
@property unsigned int remoteFrameWidth; // @synthesize remoteFrameWidth;
@property(readonly) VCJitterBuffer *vcJitterBuffer; // @synthesize vcJitterBuffer;
@property(retain, nonatomic) VideoAttributes *remoteVideoAttributes; // @synthesize remoteVideoAttributes;
@property(nonatomic) BOOL isStarted; // @synthesize isStarted;
@property(nonatomic) BOOL shouldSendAudio; // @synthesize shouldSendAudio;
@property(nonatomic) BOOL isRTCPFBEnabled; // @synthesize isRTCPFBEnabled;
@property(nonatomic) BOOL useAFRC; // @synthesize useAFRC;
@property BOOL shouldTimeoutPackets; // @synthesize shouldTimeoutPackets;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID;
@property(nonatomic) float packetLateAndMissingRatio; // @synthesize packetLateAndMissingRatio;
@property(readonly, nonatomic) AVAudioPayload *currentAudioPayload; // @synthesize currentAudioPayload;
@property(nonatomic) int signalGrade; // @synthesize signalGrade;
@property(nonatomic) int signalRaw; // @synthesize signalRaw;
@property(nonatomic) int signalStrength; // @synthesize signalStrength;
@property(nonatomic) unsigned int roundTripTime; // @synthesize roundTripTime;
@property(nonatomic) double networkConditionsTimeoutInSeconds; // @synthesize networkConditionsTimeoutInSeconds;
@property(nonatomic) double packetLossRate; // @synthesize packetLossRate;
@property(copy, nonatomic) NSString *peerCN; // @synthesize peerCN;
@property(nonatomic) unsigned int lastSentAudioSampleTime; // @synthesize lastSentAudioSampleTime;
@property(nonatomic) int natType; // @synthesize natType;
@property(nonatomic) BOOL requiresWifi; // @synthesize requiresWifi;
@property(readonly) BOOL audioIsPaused; // @synthesize audioIsPaused;
@property(retain, nonatomic) NSArray *mutedPeers; // @synthesize mutedPeers;
@property int bandwidthDownstream; // @synthesize bandwidthDownstream;
@property int bandwidthUpstream; // @synthesize bandwidthUpstream;
@property(nonatomic) BOOL useCompressedConnectionData; // @synthesize useCompressedConnectionData;
@property unsigned char inputMeter; // @synthesize inputMeter;
@property BOOL useUEP; // @synthesize useUEP;
@property BOOL useControlByte; // @synthesize useControlByte;
@property int preferredAudioCodec; // @synthesize preferredAudioCodec;
@property(readonly, nonatomic) int audioTxBitrate; // @synthesize audioTxBitrate;
@property int bundledPackets; // @synthesize bundledPackets;
@property unsigned int lastReceived; // @synthesize lastReceived;
@property(retain, nonatomic) GKRingBuffer *ringBuf; // @synthesize ringBuf;
@property struct tagHANDLE *hAFRC; // @synthesize hAFRC;
@property struct tagHANDLE *hMediaQueue; // @synthesize hMediaQueue;
@property int numBufferBytesAvailable; // @synthesize numBufferBytesAvailable;
@property int numEncodedBytes; // @synthesize numEncodedBytes;
@property NSObject<VideoConferenceRealTimeChannel> *rtChannel; // @synthesize rtChannel;
@property BOOL receivedSIPInvite; // @synthesize receivedSIPInvite;
@property BOOL isWaitingForICEResult; // @synthesize isWaitingForICEResult;
@property(readonly) BOOL isAudioRunning; // @synthesize isAudioRunning;
@property(retain) NSObject<VCCallSessionDelegate> *delegate; // @synthesize delegate;
@property long long sampleRate; // @synthesize sampleRate;
@property long long videoPayload; // @synthesize videoPayload;
@property BOOL didUseICE; // @synthesize didUseICE;
@property long long state; // @synthesize state;
@property unsigned short maxPacketLength; // @synthesize maxPacketLength;
@property struct tagCONNRESULT origConnectionResult; // @synthesize origConnectionResult;
@property struct tagCONNRESULT prevConnectionResult; // @synthesize prevConnectionResult;
@property struct tagCONNRESULT connectionResult; // @synthesize connectionResult;
@property struct tagHANDLE *rtpHandle; // @synthesize rtpHandle;
@property(readonly) BOOL isSKEOptimizationEnabled;
- (BOOL)getRealAudioTxBitrate:(unsigned short *)arg1 RxBitrate:(unsigned short *)arg2 duplication:(unsigned short *)arg3;
- (BOOL)pullAudioSamples:(char *)arg1 timestamp:(unsigned int *)arg2 byteCount:(int *)arg3 sampleCount:(int *)arg4 sampleRate:(int *)arg5 receivedBytes:(int *)arg6 lastReceivedAudioTime:(double *)arg7 padding:(char *)arg8 paddingLength:(char *)arg9 silence:(int *)arg10;
- (id)callMetadata;
- (BOOL)resultMatchesIPInRemoteConnectionData:(struct tagCONNRESULT *)arg1;
- (id)localParticipantID;
- (id)remoteParticipantID;
- (void)sendARPLData:(id)arg1 toCallID:(unsigned int)arg2;
- (void)rcvdFirstRemoteFrame;
- (void)processCancelRelayRequest:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (void)processRelayUpdateDict:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (void)processRelayRequestResponseDict:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (BOOL)stillWantsToRelay;
- (BOOL)setPauseVideo:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setPauseVideo:(BOOL)arg1 force:(BOOL)arg2 error:(id *)arg3;
- (BOOL)setPauseAudio:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setPauseAudio:(BOOL)arg1 force:(BOOL)arg2 error:(id *)arg3;
- (BOOL)isCallOngoing;
- (void)processRemoteIPChange:(id)arg1 callID:(unsigned int)arg2;
@property BOOL isGKVoiceChat;
@property int packetsPerBundle;
- (id)inviteDataForParticipantID:(id)arg1 callID:(unsigned int *)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id *)arg5;
- (BOOL)disconnect:(id)arg1 didRemoteCancel:(BOOL)arg2;
- (int)rtcpDescriptor;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 error:(id *)arg6;
@property(readonly, nonatomic) BOOL isCaller;
- (int)bundleAndSendSamples:(char *)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned int)arg4 bufferedSamples:(int)arg5 hasNewSamples:(BOOL)arg6;
- (int)sendAudioHeartbeat:(unsigned int)arg1;
- (int)sendAudioBundle:(BOOL)arg1 atTimeStamp:(unsigned int)arg2 nextInterval:(float)arg3;
- (void)sendThreadedAudio:(struct tagEncodedAudio *)arg1 buffer:(char *)arg2 bufferSize:(unsigned int)arg3;
- (float)nextAudioInterval:(int)arg1;
- (BOOL)bundleAudio:(void *)arg1 withPayload:(int)arg2 numInputBytes:(int)arg3;
- (int)encodeAudio:(void *)arg1 numInputBytes:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4 withPayload:(int *)arg5;
- (void)setupConnectionTimeoutTimerWithErrorCode:(int)arg1 detailedCode:(int)arg2 description:(id)arg3 reason:(id)arg4;
- (void)cancelConnectionTimeoutTimer;
- (void)timeoutUnfinishedConnection;
- (void)dealloc;
- (BOOL)handshakeComplete:(struct SSLContext *)arg1 withError:(struct __CFError **)arg2;
- (void)updateLastReceivedPacket:(BOOL)arg1;
- (void)updateLastReceivedPacketWithTimestamp:(double)arg1;
- (void)updateRemoteMediaStallState:(double)arg1;
@property(readonly) double networkQuality;
@property NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
- (void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned int)arg2;
- (void)handleCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;
- (void)updateMaxPktLength:(struct tagCONNRESULT *)arg1;
- (BOOL)evaluateEnableRRx:(int *)arg1;
- (BOOL)isBetterForIncomingSIPThanOtherSession:(id)arg1 result:(struct tagCONNRESULT *)arg2;
- (void)updateVideoQualityStatus:(double)arg1 bitrate:(double)arg2 time:(double)arg3 isRemote:(BOOL)arg4;
@property(readonly) BOOL videoIsPaused;
- (void)startAWDStats;
- (unsigned int)callID;
- (id)init;
- (void)interfaceStateDidChangeWithWifiUp:(BOOL)arg1 withCellUp:(BOOL)arg2;
- (void)wcmGetCallConfig:(unsigned int *)arg1 targetBitrate:(unsigned int *)arg2;
- (void)wcmSetCallConfig:(unsigned int)arg1 interferenceLevel:(unsigned int)arg2;
- (void)resetLoopback;
- (id)description;
- (void)loopbackSocketTunnel:(id)arg1 receivedData:(id)arg2 from:(struct tagIPPORT *)arg3;
- (void)deleteTCPTunnel;
- (BOOL)createTCPTunnelForParticipantID:(id)arg1 relayDictionary:(id)arg2 didOriginateRequest:(BOOL)arg3 relayType:(unsigned char)arg4 error:(id *)arg5;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)setupLoopback;
- (int)sipCallback:(int)arg1 callID:(unsigned int)arg2 msgIn:(const char *)arg3 msgOut:(char *)arg4 optional:(void *)arg5 confIndex:(int *)arg6;
- (unsigned int)connectionResultCallback:(struct tagCONNRESULT *)arg1 didReceiveICEPacket:(BOOL)arg2 didUseRelay:(BOOL)arg3 secretKey:(struct __CFData *)arg4 skeResult:(int)arg5;
- (void)processConnectionResultUpdate;
- (void)disableSessionHealthMonitor;
- (void)enableSessionHealthMonitor;
- (void)logConnectionSuccess;
- (unsigned int)maxBitrateForConnectionType;
- (void)adjustBitrateForConnectionType;
- (void)setupBitrateNegotation;
- (BOOL)findFeatureString:(const char *)arg1 value:(char *)arg2 withPrefix:(const char *)arg3;
- (char *)matchedFeaturesString;
- (BOOL)setMatchedFeaturesString:(id)arg1 remoteFeaturesString:(id)arg2;
- (id)allPayloadsLocalFeaturesString;
- (id)createLocalFeaturesString;
- (id)deriveAspectRatioFLS;
- (id)retrieveRawFeaturesString;
- (id)pickFeaturesStringForPayload:(int)arg1 featuresListDict:(id)arg2 remote:(BOOL)arg3;
- (void)logIdentity:(struct OpaqueSecIdentityRef *)arg1;
- (void)setLocalIdentityForKeyExchange;
- (int)Conference_SetBWEstMode:(_Bool)arg1 bFakeLargeFrameMode:(_Bool)arg2;
- (id)createRelayUpdateDictionary:(id)arg1;
- (id)createInitiateRelayDictionary;
- (void)initiateRelayRequest;
- (BOOL)doBandwidthDetection:(struct tagHANDLE *)arg1 error:(id *)arg2;
- (void)notifyDelegateSessionStarted;
- (unsigned int)connectionType;
- (void)doSipEndAction:(int)arg1 callID:(unsigned int)arg2 error:(id)arg3;
- (void)disconnectWithNoRemotePackets:(long long)arg1 timeoutUsed:(double)arg2;
- (void)disconnectWithNoRemotePackets:(long long)arg1;
- (void)doSipEndProc:(id)arg1;
- (void)stopLoopbackProc:(id)arg1;
- (void)stopLoopback;
- (unsigned int)videoRTPID;
- (unsigned int)audioRTPID;
- (void)sipConnectThreadProc:(id)arg1;
- (void)shutdownVoiceChatFromRemoteSIPSignal:(int)arg1;
- (BOOL)chooseSecondaryPayloads:(int *)arg1 count:(int)arg2;
- (BOOL)choosePayload:(int *)arg1 count:(int)arg2;
- (unsigned int)codecBitmapForPayloads:(int *)arg1 count:(int)arg2;
- (BOOL)setupAudioCodecWithPayload:(int)arg1;
- (id)addAudioPayload:(int)arg1;
- (void)setupAACELDPayload:(int)arg1;
- (BOOL)stopAFRC:(id *)arg1;
- (BOOL)startAFRC:(id *)arg1;
- (BOOL)stopMediaQueue:(id *)arg1;
- (BOOL)startMediaQueue:(id *)arg1;
- (void)getVideoSettings:(int)arg1 width:(int *)arg2 height:(int *)arg3 framerate:(int *)arg4 bitRate:(int *)arg5;
- (BOOL)stopVideo:(BOOL)arg1 error:(id *)arg2;
- (BOOL)startVideo:(BOOL)arg1 error:(id *)arg2;
- (BOOL)allocateBundleBuffer;
- (BOOL)chooseAudioNetworkBitrate;
- (void)useAudioTier:(id)arg1;
- (void)useAudioPayload:(id)arg1 withBitrate:(unsigned int)arg2;
- (void)updateAudioTxBitrate;
- (BOOL)setupAudioTierPicker;
- (BOOL)setupAudioEncoders;
- (BOOL)setupAudioCookies;
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopAudio;
- (void)stopAudioIOProc:(id)arg1;
- (BOOL)sipConnectWithError:(id *)arg1;
- (BOOL)setupCallerRTPChannelWithError:(id *)arg1;
- (BOOL)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;
- (BOOL)setRTPDestinationWithError:(id *)arg1;
- (id)getCompatibleLocalFeaturesListForPayloads:(int *)arg1 count:(int)arg2;
- (int)getAllCompatibleVideoPayloads:(int **)arg1;
- (BOOL)chooseVideoPayload:(int *)arg1 count:(int)arg2;
- (BOOL)canNegotiateVideoPayload:(int)arg1;
- (BOOL)negotiateMaxBandwidth:(int *)arg1;
- (BOOL)negotiatePayloads:(int **)arg1 numPayloads:(int *)arg2 withError:(id *)arg3;
- (int)negotiateFeaturesString:(id)arg1 forPaylosd:(int)arg2;
- (void)getDecodePayloads:(int **)arg1 numPayloads:(int *)arg2 withPayload:(int)arg3 secondaryPayloads:(int *)arg4 numSecondaryPayloads:(int)arg5;
- (BOOL)startRTPWithError:(id *)arg1;
- (BOOL)createMediaQueueHandle:(id *)arg1;
- (BOOL)createRTPHandles:(id *)arg1;
- (void)launchDeadlineExitTimer;
- (BOOL)is3GCall;
- (BOOL)treatAsCellular;
- (BOOL)sendSIPInviteWithError:(id *)arg1;
- (void)getAllPayloadsForVideo:(int **)arg1 count:(int *)arg2;
- (void)getAllPayloadsForAudio:(int **)arg1 count:(int *)arg2 secondaryPayloads:(int **)arg3 secondaryCount:(int *)arg4;
- (BOOL)getForcedPayload:(int *)arg1;
- (int)handleIncomingWithCallID:(unsigned int)arg1 msgIn:(const char *)arg2 msgOut:(char *)arg3 optional:(void *)arg4 confIndex:(int *)arg5 error:(id *)arg6;
- (BOOL)createSDP:(int *)arg1 audioPayloadCount:(int)arg2 secondaryPayloadTypes:(int *)arg3 secondaryPayloadCount:(int)arg4 videoPayloadTypes:(int *)arg5 videoPayloadCount:(int)arg6 localFeaturesList:(id)arg7 answerBandwidth:(int)arg8 maxBandwidth:(int)arg9 imageSizesSend:(struct imageTag **)arg10 imageSendCount:(int *)arg11 imageSizesRecv:(struct imageTag **)arg12 imageRecvCount:(int *)arg13 sdp:(char *)arg14 numSDPBytes:(int *)arg15 error:(id *)arg16;
- (void)inviteeICEResultTimer:(float)arg1 shouldBailIfRelay:(BOOL)arg2;
- (void)resetState;
- (void)unlock;
- (void)lock;
- (void)processSIPMessage:(char *)arg1 msgOut:(char *)arg2 optional:(void *)arg3 confIndex:(int *)arg4;
- (void)remotePauseDidChangeToState:(BOOL)arg1 forVideo:(BOOL)arg2;
- (void)sendTimings;
- (int)generateConnectionData:(char **)arg1 forCallID:(unsigned int)arg2 connectionDataSize:(int *)arg3 nonCellularCandidateTimeout:(double)arg4;
- (BOOL)createConnectionDataForParticipantID:(id)arg1 pCallID:(unsigned int *)arg2 nonCellularCandidateTimeout:(double)arg3 error:(id *)arg4 useRelay:(BOOL)arg5;
- (void)stopPausedHeartbeat;
- (void)startPausedHeartbeat;
- (void)cleanupMedia;
- (void)reportDashboardEndResult;
- (long long)calculateSIPEndAction:(BOOL)arg1 currentState:(long long)arg2 error:(id)arg3;
- (void)notifyDelegateAndEndCall:(long long)arg1 didRemoteCancel:(BOOL)arg2 error:(id)arg3;
- (struct OpaqueSecIdentityRef *)retrieveIdentity;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingBlob:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 useRelay:(BOOL)arg6 error:(id *)arg7;
- (double)iceTimeoutInSeconds:(BOOL)arg1;
- (void)setupPeerInfo:(id)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 capabilities:(id)arg4;
- (void)updateQOS;
- (void)setupDTLSDefaults;
- (void)connectionResultFromSIP:(struct tagSIPCallbackData *)arg1;
- (void)logDetailedNetworkInformation;
- (void)logConnectionType:(int)arg1;
- (void)resetICETimeoutToLongTimeout;
- (void)updateNetworkCheckHint:(double)arg1;
- (void)notifyDelegateToCancelRelay;
- (void)initWithRelevantStorebagEntries;
- (void)setupEncryptionWithKey:(const struct __CFData **)arg1 confIndex:(int *)arg2;
- (id)createSKEBlobWithRemoteSKEBlob:(id)arg1;
- (void)setupCellTechChangeMessages;
- (void)setupTransport;
- (void)setupAudioPausedHBMessages;
- (void)setupVideoPauseMessages;
- (void)setupAudioPauseMessages;
- (void)setupMessaging;
- (void)callAlarmsWithRTPTimeStamp:(unsigned int)arg1;
- (void)processResolutionChangeToVideoRule:(id)arg1;
- (id)createRemoteScreenAttributesForOrientation:(int)arg1;
- (void)updateVideoQualityNotification:(double)arg1;
- (double)sessionReceivingBitrate;
- (double)sessionReceivingFramerate;
- (double)sessionTransmittingBitrate;
- (double)sessionTransmittingFramerate;
- (BOOL)initializeVideoReceiver:(id *)arg1 reportingAgent:(id)arg2;
- (BOOL)initializeVideoTransmitter:(id *)arg1 encodeRule:(id)arg2 unpausing:(BOOL)arg3 reportingAgent:(id)arg4;
- (void)onPlayVideo:(struct __CVBuffer *)arg1 frameTime:(CDStruct_198678f7)arg2 cameraStatusBits:(unsigned char)arg3;
- (BOOL)onCaptureFrame:(struct __CVBuffer *)arg1 audioTS:(unsigned int)arg2 audioHT:(double)arg3 videoHT:(double)arg4 cameraBits:(unsigned char)arg5;

@end

