/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class CRAlignmentLayer, CRBoxLayer, CRCaptureSessionManager, DiagnosticHUDLayer, NSArray, NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSTimer;

@interface CRCameraReader : NSViewController <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    BOOL _continousMode;
    BOOL _captureMode;
    BOOL _showDiagnosticHUD;
    BOOL _configPresentCentered;
    BOOL _codeInverted;
    BOOL _didSendEndOrCancel;
    BOOL _didSendFindBox;
    int _numberOfNameDateAttempts;
    int _maxNumberOfNameDateAttempts;
    id <CRCameraReaderDelegate> _callbackDelegate;
    NSArray *_outputObjectTypes;
    long long _currentCameraIdentifier;
    unsigned long long _captureCount;
    double _sessionTimeout;
    long long _whiteBalanceMode;
    long long _focusMode;
    long long _exposureMode;
    long long _torchMode;
    NSString *_cameraMode;
    long long _cameraPosition;
    double _configDemoSpeed;
    CRCaptureSessionManager *_sessionManager;
    CRBoxLayer *_boxLayer;
    DiagnosticHUDLayer *_diagnosticHUDLayer;
    NSArray *_foundPoints;
    NSString *_foundCode;
    NSDate *_sessionStarted;
    NSDate *_pointsFound;
    NSDate *_codePresented;
    unsigned long long _imagesToCapture;
    NSTimer *_boxLayerHideTimer;
    struct opaqueCMSampleBuffer *_lastBuffer;
    NSObject<OS_dispatch_semaphore> *_processingImage;
    CRAlignmentLayer *_alignmentLayer;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (id)findCCCodeInImage:(struct vImage_Buffer)arg1 maxStage:(unsigned long long)arg2 roi:(struct CGRect)arg3;
+ (id)findCodeInImage:(struct vImage_Buffer)arg1 maxStage:(unsigned long long)arg2 roi:(struct CGRect)arg3;
+ (id)findCodeInImage:(struct vImage_Buffer)arg1 maxStage:(unsigned long long)arg2;
+ (void)loadFonts;
+ (unsigned long long)supportedCameraCount;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain) CRAlignmentLayer *alignmentLayer; // @synthesize alignmentLayer=_alignmentLayer;
@property int maxNumberOfNameDateAttempts; // @synthesize maxNumberOfNameDateAttempts=_maxNumberOfNameDateAttempts;
@property int numberOfNameDateAttempts; // @synthesize numberOfNameDateAttempts=_numberOfNameDateAttempts;
@property(retain) NSObject<OS_dispatch_semaphore> *processingImage; // @synthesize processingImage=_processingImage;
@property struct opaqueCMSampleBuffer *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain) NSTimer *boxLayerHideTimer; // @synthesize boxLayerHideTimer=_boxLayerHideTimer;
@property unsigned long long imagesToCapture; // @synthesize imagesToCapture=_imagesToCapture;
@property BOOL didSendFindBox; // @synthesize didSendFindBox=_didSendFindBox;
@property BOOL didSendEndOrCancel; // @synthesize didSendEndOrCancel=_didSendEndOrCancel;
@property BOOL codeInverted; // @synthesize codeInverted=_codeInverted;
@property(retain) NSDate *codePresented; // @synthesize codePresented=_codePresented;
@property(retain) NSDate *pointsFound; // @synthesize pointsFound=_pointsFound;
@property(retain) NSDate *sessionStarted; // @synthesize sessionStarted=_sessionStarted;
@property(retain) NSString *foundCode; // @synthesize foundCode=_foundCode;
@property(retain) NSArray *foundPoints; // @synthesize foundPoints=_foundPoints;
@property(retain) DiagnosticHUDLayer *diagnosticHUDLayer; // @synthesize diagnosticHUDLayer=_diagnosticHUDLayer;
@property(retain) CRBoxLayer *boxLayer; // @synthesize boxLayer=_boxLayer;
@property(retain) CRCaptureSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property double configDemoSpeed; // @synthesize configDemoSpeed=_configDemoSpeed;
@property BOOL configPresentCentered; // @synthesize configPresentCentered=_configPresentCentered;
@property BOOL showDiagnosticHUD; // @synthesize showDiagnosticHUD=_showDiagnosticHUD;
@property long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(copy) NSString *cameraMode; // @synthesize cameraMode=_cameraMode;
@property long long torchMode; // @synthesize torchMode=_torchMode;
@property long long exposureMode; // @synthesize exposureMode=_exposureMode;
@property long long focusMode; // @synthesize focusMode=_focusMode;
@property long long whiteBalanceMode; // @synthesize whiteBalanceMode=_whiteBalanceMode;
@property double sessionTimeout; // @synthesize sessionTimeout=_sessionTimeout;
@property unsigned long long captureCount; // @synthesize captureCount=_captureCount;
@property(getter=isCaptureMode) BOOL captureMode; // @synthesize captureMode=_captureMode;
@property BOOL continousMode; // @synthesize continousMode=_continousMode;
@property(readonly) long long currentCameraIdentifier; // @synthesize currentCameraIdentifier=_currentCameraIdentifier;
@property(copy) NSArray *outputObjectTypes; // @synthesize outputObjectTypes=_outputObjectTypes;
@property __weak id <CRCameraReaderDelegate> callbackDelegate; // @synthesize callbackDelegate=_callbackDelegate;
- (void).cxx_destruct;
- (void)reportAcceptedString:(id)arg1 forOutput:(id)arg2 withClientID:(id)arg3;
- (id)generateStringFromDate:(id)arg1;
- (void)sendDidEndWithErrorDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (void)sendDidFindBox;
- (void)sendDidDisplayMessageStyle:(long long)arg1;
- (void)sendDidEndWithError:(id)arg1;
- (void)sendDidEndAnimation;
- (void)sendDidEndWithInfo:(id)arg1;
- (void)sendDidCancel;
- (void)showMessage:(id)arg1 color:(id)arg2 style:(long long)arg3 duration:(double)arg4;
- (void)animatePresentCode;
- (struct CGRect)boxLayerPresentationFrame;
- (void)hideBoxLayer;
- (void)pauseBoxLayerHideTimer;
- (void)primeBoxLayerHideTimer;
- (void)removeLayerTree;
- (void)findCCCodeInSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)findCodeInSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureImageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)stopSession;
- (void)startSession;
- (void)cancel;
- (void)start;
- (void)switchToCamera:(long long)arg1;
- (void)toggleCamera;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

