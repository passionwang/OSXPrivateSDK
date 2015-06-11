/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MCMontage, MPDocument, MRSnapshotter;

@interface MERenderer : NSObject
{
    MPDocument *_document;
    MCMontage *_montage;
    struct CGSize _size;
    MRSnapshotter *_snapshotter;
    id <MZMediaManagement> _assetManagementDelegate;
}

@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)_setup;
- (void)snapshotAtTime:(double)arg1 toBuffer:(unsigned int *)arg2;
@property(readonly) unsigned int bytesPerRow;
@property(readonly, nonatomic) struct CGColorSpace *colorSpace;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 andSize:(struct CGSize)arg2 andPreferences:(id)arg3;

@end

