/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CRCodeRedeemerLayerDelegate <NSObject>
- (void)codeRedeemerLayerCameraDidStart:(id)arg1;
- (void)codeRedeemerLayerDidFindBox:(id)arg1;
- (void)codeRedeemerLayerDidFadeStatus:(id)arg1;
- (void)codeRedeemerLayerWillFadeStatus:(id)arg1;
- (void)codeRedeemerLayer:(id)arg1 didFailWithError:(id)arg2;
- (void)codeRedeemerLayer:(id)arg1 didSucceedWithCodes:(id)arg2;

@optional
- (void)codeRedeemerLayer:(id)arg1 willRecognizeCodes:(id)arg2;
@end

