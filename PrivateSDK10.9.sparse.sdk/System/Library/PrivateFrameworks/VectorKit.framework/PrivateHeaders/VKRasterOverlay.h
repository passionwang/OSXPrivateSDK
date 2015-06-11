//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VKRasterOverlayTileSource;

@interface VKRasterOverlay : NSObject
{
    id <VKRasterOverlayDelegate> _delegate;
    CDStruct_02837cd9 _replaceMapContentInRect;
    unsigned long long _level;
    VKRasterOverlayTileSource *_mapModel;
    VKRasterOverlayTileSource *_tileSource;
}

@property(nonatomic) VKRasterOverlayTileSource *tileSource; // @synthesize tileSource=_tileSource;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(nonatomic) CDStruct_02837cd9 replaceMapContentInRect; // @synthesize replaceMapContentInRect=_replaceMapContentInRect;
@property id <VKRasterOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void)setNeedsDisplay;
- (void)drawKey:(const CDStruct_32a7f38a *)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)canDrawKey:(const CDStruct_32a7f38a *)arg1;
- (void)setNeedsDisplayInRect:(const CDStruct_02837cd9 *)arg1 level:(long long)arg2;
- (id)init;

@end

