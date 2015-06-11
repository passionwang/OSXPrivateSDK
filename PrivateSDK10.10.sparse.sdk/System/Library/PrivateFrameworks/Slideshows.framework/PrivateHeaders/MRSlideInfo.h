/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MRSlideInfo : NSObject
{
    BOOL _isMain;
    NSString *_assetPath;
    unsigned long long _index;
    double _aspectRatio;
    double _time;
    double _scale;
    double _rotation;
    id _player;
    struct CGPoint _center;
}

@property(nonatomic) BOOL isMain; // @synthesize isMain=_isMain;
@property(nonatomic) id player; // @synthesize player=_player;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *assetPath; // @synthesize assetPath=_assetPath;
- (id)description;
- (void)dealloc;

@end

