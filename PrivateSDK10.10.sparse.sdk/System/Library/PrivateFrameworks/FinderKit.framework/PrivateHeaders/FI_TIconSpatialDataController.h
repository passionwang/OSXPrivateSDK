/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface FI_TIconSpatialDataController : NSObject
{
    struct TMutex _lock;
    struct TFENode _bulkSettingContainer;
    struct TFENodeVector _bulkSettingNodes;
    vector_3577cbd0 _bulkSettingSpatialData;
    long long _settingSpatialDataInBulk;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setNodePropertyList:(struct TFENodePropertyList *)arg1 spatialData:(const struct DataBrowserItemSpatialData *)arg2;
- (_Bool)loadSpatialData:(struct DataBrowserItemSpatialData *)arg1 forNode:(const struct TFENode *)arg2;
- (void)manuallyWriteSpatialDataInBulk:(const struct TFENodeVector *)arg1 spatialData:(const vector_3577cbd0 *)arg2;
- (void)writeSpatialDataInBulk:(const struct TFENode *)arg1 nodes:(const struct TFENodeVector *)arg2 spatialData:(const vector_3577cbd0 *)arg3;
- (void)writeSpatialData:(const struct DataBrowserItemSpatialData *)arg1 forNode:(const struct TFENode *)arg2;
- (void)saveSpatialData:(const struct DataBrowserItemSpatialData *)arg1 forNode:(const struct TFENode *)arg2;
- (void)setSpatialDataBulkMode:(_Bool)arg1 forParent:(const struct TFENode *)arg2;
- (_Bool)inBulkModeForParent:(const struct TFENode *)arg1;

@end

