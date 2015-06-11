//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface MPNavigatorInternal : NSObject
{
    NSString *startPlugID;
    double opacity;
    struct CGPoint position;
    double zPosition;
    struct CGSize size;
    double rotationAngle;
    double xRotationAngle;
    double yRotationAngle;
    double scale;
    long long zIndex;
    NSString *uuid;
    double numberOfLoops;
    double duration;
    double timeIn;
    double phaseInDuration;
    double phaseOutDuration;
    NSMutableDictionary *layerKeyDictionary;
    BOOL isTriggered;
    BOOL startsPaused;
}

@property(retain, nonatomic) NSMutableDictionary *layerKeyDictionary; // @synthesize layerKeyDictionary;
@property(nonatomic) double phaseOutDuration; // @synthesize phaseOutDuration;
@property(nonatomic) double phaseInDuration; // @synthesize phaseInDuration;
@property(nonatomic) BOOL startsPaused; // @synthesize startsPaused;
@property(nonatomic) BOOL isTriggered; // @synthesize isTriggered;
@property(nonatomic) double timeIn; // @synthesize timeIn;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic) double numberOfLoops; // @synthesize numberOfLoops;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(nonatomic) long long zIndex; // @synthesize zIndex;
@property(nonatomic) double scale; // @synthesize scale;
@property(nonatomic) double yRotationAngle; // @synthesize yRotationAngle;
@property(nonatomic) double xRotationAngle; // @synthesize xRotationAngle;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) double zPosition; // @synthesize zPosition;
@property(nonatomic) struct CGPoint position; // @synthesize position;
@property(nonatomic) double opacity; // @synthesize opacity;
@property(retain, nonatomic) NSString *startPlugID; // @synthesize startPlugID;
- (void)dealloc;
- (void)finalize;

@end

