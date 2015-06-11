/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CannedVideoFrameFeeder-Protocol.h"

@class NSArray, NSDictionary, NSString, VideoScaler;

// Not exported
@interface CannedRawVideoCapture : NSObject <CannedVideoFrameFeeder>
{
    int _width;
    int _height;
    NSArray *_allResolutions;
    int _allFrameCount;
    double _allFrameRate;
    NSDictionary *_currentResolution;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        void *_field9;
        void *_field10;
        void *_field11;
        void *_field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_currentInputFile;
    struct __CVPixelBufferPool *_currentPixelBufferPool;
    struct __CVPixelBufferPool *_rotatedPixelBufferPool;
    VideoScaler *_videoScaler;
    struct _opaque_pthread_mutex_t _inputMutex;
    struct _opaque_pthread_mutex_t _attributeMutex;
}

@property(retain, nonatomic) VideoScaler *videoScaler; // @synthesize videoScaler=_videoScaler;
@property(retain, nonatomic) NSDictionary *currentResolution; // @synthesize currentResolution=_currentResolution;
@property(nonatomic) double allFrameRate; // @synthesize allFrameRate=_allFrameRate;
@property(nonatomic) int allFrameCount; // @synthesize allFrameCount=_allFrameCount;
@property(retain, nonatomic) NSArray *allResolutions; // @synthesize allResolutions=_allResolutions;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
- (void)getFrameRate:(double *)arg1 frameCount:(int *)arg2;
- (struct __CVBuffer *)createPixelBufferForFrameIndex:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2;
- (int)initializeFrameResolutionArrayFromFolder:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

