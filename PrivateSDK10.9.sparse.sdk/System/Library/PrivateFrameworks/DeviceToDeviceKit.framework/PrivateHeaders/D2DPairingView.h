//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "D2DInquiryDelegate.h"

@class NSImageView, NSMatrix, NSTabView, NSTextField;

@interface D2DPairingView : NSViewController <D2DInquiryDelegate>
{
    id <D2DInquiry> mInquiry;
    BOOL mActive;
    NSTabView *pairingTabs;
    NSImageView *automaticIndicator;
    NSMatrix *passcodeMatrix;
    NSTextField *passcodeField;
    NSTextField *comparisonCode;
    id <D2DPeer> device;
    id <D2DPairing> pairing;
}

+ (id)pairingViewForDevice:(id)arg1;
+ (id)searchViewForDevicesOfClass:(int)arg1 subclass:(int)arg2;
@property BOOL active; // @synthesize active=mActive;
@property(retain) id <D2DInquiry> inquiry; // @synthesize inquiry=mInquiry;
@property(retain) id <D2DPeer> device; // @synthesize device;
- (void)inquiryComplete:(id)arg1 error:(id)arg2;
- (void)inquiry:(id)arg1 deviceNameUpdated:(id)arg2 devicesRemaining:(unsigned long long)arg3;
- (void)inquiry:(id)arg1 updatedDevice:(id)arg2;
- (void)inquiry:(id)arg1 foundDevice:(id)arg2;
- (void)inquiryStarted:(id)arg1;
- (void)devicePairingUserPasskeyNotification:(id)arg1 passkey:(unsigned long long)arg2;
- (void)devicePairingUserConfirmationRequest:(id)arg1 numericValue:(unsigned long long)arg2;
- (void)devicePairingPINCodeRequest:(id)arg1;
- (void)cancelSearch:(id)arg1;
- (void)startSearch:(id)arg1;
- (void)cancelPairing;
- (void)startPairing;

@end

